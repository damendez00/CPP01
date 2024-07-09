/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:40:55 by damendez          #+#    #+#             */
/*   Updated: 2024/07/09 13:24:09 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <cstdlib>

class Harl
{
    private:
        void    debug( void );
        void    info ( void );
        void    warning ( void );
        void    error ( void );

    public:
        Harl();
        ~Harl();

        void    complain( std::string level );
};

typedef void (Harl::*t_func) ( void );

#endif