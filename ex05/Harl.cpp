/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:40:58 by damendez          #+#    #+#             */
/*   Updated: 2024/07/09 13:23:49 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::debug( void ) {
    std::cout << "love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void    Harl::info( void ) {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void    Harl::warning( void ) {
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming foryears whereas you started working here since last month." << std::endl;
}

void    Harl::error( void ) {
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::Harl(){
}

Harl::~Harl(){
}

void    Harl::complain( std::string level ) {
    std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    t_func  funcs[] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
    
    int i = 0;
    while (i < 4 && levels[i].compare(level))
        i++;
    if (i < 4)
        (this->*funcs[i])();
    else if (level != "exit")
        std::cout << "Input incorrect, either enter DEBUG, INFO, WARNING, ERROR or exit" << std::endl;
}