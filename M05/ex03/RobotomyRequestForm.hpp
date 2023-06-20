/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 12:30:12 by arakhurs          #+#    #+#             */
/*   Updated: 2023/06/20 13:19:29 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#define RRF_sign 72
#define RRF_exec 45

#include "AForm.hpp"

class RobotomyRequestForm : public AForm    {

    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string const target);
        RobotomyRequestForm(const RobotomyRequestForm &other);
        RobotomyRequestForm& operator=(const RobotomyRequestForm &other);
        virtual ~RobotomyRequestForm();

        std::string const   getTName() const;
        void                setTName(std::string const target);
        virtual void        execute(Bureaucrat const &executor) const;
 
    private:
        std::string const _target;
                                            };
#endif
