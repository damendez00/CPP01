/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 17:32:41 by damendez          #+#    #+#             */
/*   Updated: 2024/07/08 15:56:40 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon 
{
    private:
        std::string _type; 

    public:
        Weapon( std::string type);
        ~Weapon();
        const std::string&  getType(void);
        void                setType( std::string newType);
};

#endif