/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 12:28:35 by arakhurs          #+#    #+#             */
/*   Updated: 2023/06/30 15:26:24 by arakhurs         ###   ########.fr       */
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
        AForm &operator=(const AForm &other);
        virtual ~AForm();
    
        std::string const   getFName() const;
        bool                getFGrade() const;
        int                 getsgGrade() const;
        int                 getefgGrade() const;
        void                setFName(std::string const name);
        void                setsgGrade(int n);
        void                setefgGrade(int n);
        void                beSigned(const Bureaucrat &target);
        virtual void        execute(Bureaucrat const &executor) const;

        class GradeTooHighException : public std::exception {public: char const  *what() const throw();};
        class GradeTooLowException : public std::exception  {public: char const  *what() const throw();};
        class SignedException : public std::exception       {public: char const  *what() const throw();};
        class ExecuteException : public std::exception      {public: char const  *what() const throw();};

    private:
        std::string const   _fname;
        bool                _boolean;
        int const           _signed_grade;
        int const           _executed_fgrade;
                    };

std::ostream &operator<<(std::ostream &out, AForm const &f);

#endif
