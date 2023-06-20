/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 12:29:15 by arakhurs          #+#    #+#             */
/*   Updated: 2023/06/19 16:14:42 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#define PPF_sign 25
#define PPF_exec 5

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {

    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string const target);
        PresidentialPardonForm(const PresidentialPardonForm &other);
        PresidentialPardonForm& operator=(const PresidentialPardonForm &other);
        virtual ~PresidentialPardonForm();
 
        std::string const   getTName() const;
        void                setTName(std::string const target);
        virtual void        execute(Bureaucrat const &executor) const;

    private:
        std::string const _target;
                                            };
#endif
