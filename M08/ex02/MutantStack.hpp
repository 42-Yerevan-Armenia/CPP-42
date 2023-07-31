/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 19:52:35 by arakhurs          #+#    #+#             */
/*   Updated: 2023/07/28 16:12:35 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>

template <class T>
class MutantStack : public std::stack<T>
{
    public:

        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator  begin(){return this->c.begin();};    
        iterator  end(){return this->c.end();};
};

#endif
