/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 13:57:38 by damendez          #+#    #+#             */
/*   Updated: 2024/07/05 15:06:55 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
    std::string name = "";
    
    // Create a zombie on the heap
    std::cout << "Creating Zombie on the heap." << std::endl;
    std::cout << "Zombie name: " << std::flush;
    std::cin >> name;
    Zombie* heapZombie = newZombie(name);
    heapZombie->announce();
    delete heapZombie;

    // Create a zombie on the stack
    std::cout << "Creating Zombie on the stack." << std::endl;
    std::cout << "Zombie name: " << std::flush;
    std::cin >> name;
    randomChump(name);
    //std::cout << "hey." << std::endl;
}