/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 12:23:02 by arakhurs          #+#    #+#             */
/*   Updated: 2023/06/19 16:08:22 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
#include <iomanip>

class	Bureaucrat;

class Form  {

    public:
        Form();
        Form(std::string const name, int sg, int efg);
        Form(const Form &other);
        Form& operator=(const Form &other);
        ~Form();
    
        std::string const   getFName() const;
        bool                getFGrade() const;
        int                 getsgGrade() const;
        int                 getefgGrade() const;
        void                setFName(std::string const name);
        void                setsgGrade(int n);
        void                setefgGrade(int n);
        void                beSigned(const Bureaucrat &target);

        class GradeTooHighException : public std::exception {public: char const  *what() const throw();};
        class GradeTooLowException : public std::exception  {public: char const  *what() const throw();};
        class SignedException : public std::exception       {public: char const  *what() const throw();};

    private:
        std::string const   _fname;
        bool                _boolean;
        int const           _signed_grade;
        int const           _executed_fgrade;
                    };

std::ostream &operator<<(std::ostream &out, Form const &f);

#endif
