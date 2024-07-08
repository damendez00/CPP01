/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 17:32:38 by damendez          #+#    #+#             */
/*   Updated: 2024/07/08 16:24:47 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type) {
    this->setType(type);
}

Weapon::~Weapon() {
    
}

const   std::string& Weapon::getType( void ){
    return this->_type;
}

void    Weapon::setType( std::string newType) {
    this->_type = newType;
}