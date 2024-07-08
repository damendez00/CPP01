/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 17:32:20 by damendez          #+#    #+#             */
/*   Updated: 2024/07/08 16:33:58 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& weapon) : _name(name), _weapon(weapon) {
}

HumanA::~HumanA(){
    std::cout << this->_name << ": (HumanA), has been destroyed." << std::endl;
}

void    HumanA::attack( void ) const {
    if (this->_weapon.getType() != "" ){
        std::cout << _name << " attacks with their: " << this->_weapon.getType() << std::endl;
    }
        else
        std::cout << _name << " doesn't have a weapon to attack with." << std::endl;
}