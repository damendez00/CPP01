/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 17:32:25 by damendez          #+#    #+#             */
/*   Updated: 2024/07/08 16:33:28 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name) : _name(name) {
    this->_weapon = NULL;
}

HumanB::~HumanB(){
    std::cout << this->_name << ": (HumanB), has been destroyed." << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon){
    this->_weapon = &weapon;
}

void    HumanB::attack( void ) const {
    if (this->_weapon != NULL && this->_weapon->getType() != "" ){
        std::cout << _name << " attacks with their: " << this->_weapon->getType() << std::endl;
    }
    else
        std::cout << _name << " doesn't have a weapon to attack with." << std::endl;
}