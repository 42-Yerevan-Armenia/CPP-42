/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 16:14:30 by arakhurs          #+#    #+#             */
/*   Updated: 2023/08/16 15:54:15 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){};
BitcoinExchange::~BitcoinExchange(){};

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy)
{
	_in = copy._in;
	_btcPrices = copy._btcPrices;
}

BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &other)
{
	if (this != &other)
	{
		_in = other._in;
        _btcPrices = other._btcPrices;
	}
	return (*this);
}

BitcoinExchange::BitcoinExchange(const std::string &filename): _in(filename)    {
/*-----------------------------------------------------------------------------*/
    std::ifstream   datafile("data.csv");
    if(!datafile)
    {
        std::cout << RED << "❌ Error: could not find data.csv file." << std::endl;
        exit (1);
    }
    std::string header;
    if (!getline(datafile, header))
    {
        std::cout << RED << "❌ Error: missing header in data.csv file." << std::endl;
        exit(1);
    }
    std::string     line;
    while (getline(datafile, line))
    {
        size_t      delimiterPos = line.find(',');
        if (delimiterPos == std::string::npos)
        {
            std::cout << RED << "❌ Error: invalid data format in *.csv." << RESET << std::endl;
            exit (1);  
        }
    std::string     data = line.substr(0, delimiterPos);
    double          price = std::strtod(line.substr(delimiterPos + 1).c_str(), NULL);
    _btcPrices[data] = price;
    }
    datafile.close();
/*----------------------------------------------------------------------------*/}

bool BitcoinExchange::isValidDateFormat(const std::string &date)    {
/*-----------------------------------------------------------------*/
    if (date.length() != 10) {
        return false;
    }
    return (date[4] == '-' && date[7] == '-');
/*----------------------------------------------------------------*/}

bool BitcoinExchange::isValidMonthDay(const std::string &date)  {
/*-------------------------------------------------------------*/
    int year, month, day;
    if (sscanf(date.c_str(), "%4d-%2d-%2d", &year, &month, &day) != 3) {
        return false;
    }
    if (month < 1 || month > 12 || day < 1) {
        return false;
    }
    switch (month) {
        case 2: // February
            return (day <= (isLeapYear(year) ? 29 : 28));
        case 4: case 6: case 9: case 11: // April, June, September, November
            return (day <= 30);
        default: // January, March, May, July, August, October, December
            return (day <= 31);
    }
/*------------------------------------------------------------*/}

bool BitcoinExchange::isLeapYear(int year) {return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));}

void    BitcoinExchange::exchange()   {
/*-----------------------------------*/
    std::ifstream   infile(_in);
    if (!infile.is_open())
    {
        std::cout << RED << "❌ Error: could not open file." << RESET << std::endl;
        exit (1);         
    }
    std::string line;
    
    if (!getline(infile, line))
    {
        std::cerr << RED << "Error: " << RESET << "input file is empty. ";
        std::cout << CYAN << "[" << line << "]" << RESET << std::endl;
        exit(1);        
    }
    if (line != "date | value")
    {
        std::cerr << RED << "Error: " << RESET << "incorrect header line or missing header. ";
        std::cout << CYAN << "[" << line << "]" << RESET << std::endl;
        exit(1);
    }
    std::string earliestDate = _btcPrices.begin()->first;
    std::string latestDate = _btcPrices.rbegin()->first;
    while (getline(infile, line))
    {
        if (line.empty())
            continue ;
        size_t delimiterPos = line.find('|');
        if (delimiterPos == std::string::npos)
        {
            std::cerr << RED << "Error: " << RESET << "bad input: ";
            std::cout << CYAN << "[" << line << "]" << RESET << std::endl;
            continue ;  
        }
        std::string     data = line.substr(0, delimiterPos - 1);
        if (!isValidDateFormat(data) || !isValidMonthDay(data))
        {
            std::cerr << RED << "Error: " << RESET << "Invalid date format or month/day in: ";
            std::cout << CYAN << "[" << data << "]" << RESET << std::endl;
            continue;
        }
        if (data < earliestDate || data > latestDate)
        {
            std::cerr << RED << "Error: " << RESET << "Not available date.";
            std::cout << CYAN << "[" << data << "]" << RESET << std::endl;
            continue;
        }
        std::string     valueStr = line.substr(delimiterPos + 2);
        try
        {
            char    *endptr;
            double  value = strtod(valueStr.c_str(), &endptr);              
            if (*endptr != '\0')
            {
                std::cerr << RED << "Error: " << RESET << "invalid numeric value: ";
                std::cout << CYAN << "[" << valueStr << "]" << RESET << std::endl;
                continue;
            }
            if (value <= 0)
            {
                std::cerr << RED << "Error: " << RESET << "not a positive number.";
                std::cout << CYAN << "[" << valueStr << "]" << RESET << std::endl;
                continue;
            }
            else if (value > 1000)
            {
                std::cerr << RED << "Error: " << RESET << "too large a number.";
                std::cout << CYAN << "[" << valueStr << "]" << RESET << std::endl;
                continue;
            }
            std::map<std::string, double>::iterator it = _btcPrices.lower_bound(data);
            if (it == _btcPrices.begin())
                std::cerr << YELLOW << "Warning: " << RESET << "No historical data available for " << data << ". Using the oldest available data." << std::endl;
            else if (it == _btcPrices.end())
                --it;
            else
            {
                std::map<std::string, double>::iterator prevIt = it;
                --prevIt;
                --it;
                if ((data.compare(it->first) - data.compare(prevIt->first)) > 0)
                    it = prevIt;                  
            }
            double exchangeRate = it->second;
            double result = value * exchangeRate;
            std::cout << data << "=> " << value << " = " << result << std::endl;
        }
        catch (...)
        {
            std::cerr << RED << "Error: bad input => " << line << std::endl;
        }
    }
    infile.close();
/*----------------------------------*/}
