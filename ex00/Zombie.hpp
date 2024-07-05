/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 13:58:08 by damendez          #+#    #+#             */
/*   Updated: 2024/07/05 14:59:39 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie{
private:
    std::string _name;

public:
    Zombie(std::string name);
    ~Zombie();
    void announce() const;
};

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);    

#endif