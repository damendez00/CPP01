/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 15:15:47 by damendez          #+#    #+#             */
/*   Updated: 2024/07/05 16:11:53 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <sstream>

class Zombie{
    private:
        std::string _name;

    public:
        Zombie();
        ~Zombie();
        void    announce(void) const;
        //* newZombie(std::string name) const;
        void    setName(std::string name);
};

Zombie* zombieHorde(int num, std::string name);

#endif