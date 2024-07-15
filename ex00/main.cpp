/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 13:57:38 by damendez          #+#    #+#             */
/*   Updated: 2024/07/15 15:53:29 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
    std::string name = "";
    
    // Create a zombie on the heap
    std::cout << "Creating Zombie on the heap." << std::endl;
    std::cout << "Zombie name: " << std::flush;
    if (!std::getline(std::cin, name) || name.empty())
        exit(0);
    Zombie* heapZombie = newZombie(name);
    heapZombie->announce();
    delete heapZombie;

    // Create a zombie on the stack
    std::cout << "Creating Zombie on the stack." << std::endl;
    std::cout << "Zombie name: " << std::flush;
    if (!std::getline(std::cin, name) || name.empty())
        exit(0);
    randomChump(name);
    return 0;
}