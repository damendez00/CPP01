/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 13:58:11 by damendez          #+#    #+#             */
/*   Updated: 2024/07/05 15:00:57 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
    this->_name = name;
}

Zombie::~Zombie() {
    std::cout << "Zombie " << this->_name << " has been destroyed." << std::endl;
}

Zombie *newZombie(std::string name) {
    return (new Zombie(name));
}

void    Zombie::announce(void) const {
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}