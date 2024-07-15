/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 15:10:55 by damendez          #+#    #+#             */
/*   Updated: 2024/07/15 16:02:08 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
    std::string inum = "";
    std::string name = "";
    int num;
    
    std::cout << "Enter number of zombies for zombieHorde: " << std::flush;
    if (!std::getline(std::cin, inum) || inum.empty())
        exit(0);
    std::stringstream ss(inum);
    ss >> num;
    if (ss.fail()) {
        std::cerr << "Invalid number: " << inum << std::endl;
        return 1;
    }

    std::cout << "Enter name of zombies for zombieHorde: " << std::flush;
    if (!std::getline(std::cin, name) || name.empty())
        exit(0);

    Zombie *zombies = zombieHorde(num, name);
    
    for (int i = 0; i < num; i++){
        zombies[i].announce();
    }
    delete [] zombies;
    return 0;
}