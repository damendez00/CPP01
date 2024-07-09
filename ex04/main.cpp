/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 16:48:11 by damendez          #+#    #+#             */
/*   Updated: 2024/07/09 12:36:32 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

// check for 4 arguments, return EXIT_FAILURE
// 
int main (int argc, char **argv)
{
    if (argc != 4){
        std::cerr << "Usage: ./Sed <filename> <to_find> <to_replace>." << std::endl; // character error
        return 1;
    }
    else {
        Sed sed(argv[1]);
        sed.replace(argv[2], argv[3]);
    }
    return 0;
}