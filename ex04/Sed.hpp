/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 16:53:14 by damendez          #+#    #+#             */
/*   Updated: 2024/07/08 17:02:42 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <fstream> // io work on files

class Sed
{
    private:
        std::string _inFile;
        std::string _outFile;

    public:
        Sed( std::string filename );
        ~Sed();

        void    replace( std:: string s1, std::string s2 );
};

#endif