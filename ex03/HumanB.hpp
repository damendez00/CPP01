/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 17:32:27 by damendez          #+#    #+#             */
/*   Updated: 2024/07/08 16:28:24 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
    private:
        std::string _name;
        Weapon*     _weapon;
        
    public:
        HumanB( std:: string name );
        ~HumanB();

        void    attack ( void ) const;
        void    setWeapon (Weapon& weapon);
};