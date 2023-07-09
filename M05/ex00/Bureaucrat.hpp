/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 12:20:17 by arakhurs          #+#    #+#             */
/*   Updated: 2023/06/30 15:25:40 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# define RESET			"\033[0m"
# define RED			"\033[31m"				/* Red */
# define GREEN			"\033[32m"				/* Green */
# define YELLOW			"\033[33m"				/* Yellow */
# define MAGENTA		"\033[35m"				/* Magenta */
# define CYAN			"\033[36m"				/* Cyan */

#include <iostream>

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#define MAX 1
#define MIN 150

class Bureaucrat    {

    public:
        Bureaucrat();
        Bureaucrat(std::string const name, int grade);
        Bureaucrat(const Bureaucrat &other);
        Bureaucrat &operator=(const Bureaucrat &other);
        ~Bureaucrat();

        std::string const   getName() const;
        int                 getGrade() const;
        void                increment();
        void                decrement();

    private:
        std::string const   _name;
        int                 _grade;

    class GradeTooHighException : public std::exception {

        public:
                char const  *what() const throw();
                        };

    class GradeTooLowException : public std::exception  {

        public:
                char const  *what() const throw();
                        };
                    };
std::ostream &operator<<(std::ostream &out, Bureaucrat const &i);

#endif
