/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 15:29:37 by damendez          #+#    #+#             */
/*   Updated: 2024/07/05 16:03:53 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int num, std::string name){
    Zombie *zombies = new Zombie[num];
    for (int i = 0; i < num; i++){
        zombies[i].setName(name);
    }
    return zombies;
}