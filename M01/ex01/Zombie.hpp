/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 12:42:06 by arakhurs          #+#    #+#             */
/*   Updated: 2023/04/07 15:17:09 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# define RESET			"\033[0m"
# define RED			"\033[31m"				/* Red */
# define GREEN			"\033[32m"				/* Green */
# define YELLOW			"\033[33m"				/* Yellow */

# include <iostream>
# include <string>

class Zombie    {

public:
    Zombie();
    Zombie(std::string &name);
    ~Zombie();
    
    void    announce();
    void    set_name(std::string name);
private:
    std::string _name;
                };

Zombie	*zombieHorde(int N, std::string name);

#endif
