/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 17:32:22 by damendez          #+#    #+#             */
/*   Updated: 2024/07/08 15:56:34 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA 
{
    private:
        std::string _name;
        Weapon& _weapon;
        HumanA();

    public:
        HumanA( std::string name, Weapon& weapon );
        ~HumanA();

        void    attack( void ) const;
};