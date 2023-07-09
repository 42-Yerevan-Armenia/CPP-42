/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 16:48:47 by arakhurs          #+#    #+#             */
/*   Updated: 2023/06/30 15:25:45 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# define RESET			"\033[0m"
# define RED			"\033[31m"				/* Red */
# define GREEN			"\033[32m"				/* Green */
# define YELLOW			"\033[33m"				/* Yellow */
# define MAGENTA		"\033[35m"				/* Magenta */
# define CYAN			"\033[36m"				/* Cyan */

#include <iostream>
#include "Form.hpp"

#define MAX 1
#define MIN 150

class Form;

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
        void                signForm(Form &f) const;

        class GradeTooHighException : public std::exception {public: char const  *what() const throw();};
        class GradeTooLowException : public std::exception  {public: char const  *what() const throw();};

    private:
        std::string const   _name;
        int                 _grade;
                    };
std::ostream &operator<<(std::ostream &out, Bureaucrat const &i);

#endif
