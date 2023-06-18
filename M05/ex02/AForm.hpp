/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 12:28:35 by arakhurs          #+#    #+#             */
/*   Updated: 2023/06/18 19:45:52 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"
#include <iomanip>

class	Bureaucrat;

class AForm  {

    public:
        AForm();
        AForm(std::string const name, int sg, int efg);
        AForm(const AForm &other);
        AForm& operator=(const AForm &other);
        ~AForm();
    
        std::string const   getFName() const;
        bool                getFGrade() const;
        int                 getsgGrade() const;
        int                 getefgGrade() const;
        void                setFName(std::string const name);
        void                setsgGrade(int n);
        void                setefgGrade(int n);
        void                beSigned(const Bureaucrat &target);

    private:
        std::string const   _fname;
        bool                _boolean;
        int const           _signed_grade;
        int const           _executed_fgrade;

    class GradeTooHighException : public std::exception {

        public:
                char const  *what() const throw();
                        };

    class GradeTooLowException : public std::exception  {

        public:
                char const  *what() const throw();
                        };
    class SignedException : public std::exception  {

        public:
                char const  *what() const throw();
                        };
                    };

std::ostream &operator<<(std::ostream &out, AForm const &f);

#endif
