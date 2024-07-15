/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 15:15:47 by damendez          #+#    #+#             */
/*   Updated: 2024/07/15 16:11:09 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>

class Zombie
{
    private:
        std::string _name;

    public:
        Zombie();
        ~Zombie();
        void    announce(void) const;
        void    setName(std::string name);
};

Zombie* zombieHorde(int num, std::string name);

#endif