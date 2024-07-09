/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:06:30 by damendez          #+#    #+#             */
/*   Updated: 2024/07/09 12:36:20 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(std::string filename) : _inFile(filename) {
    this->_outFile = this->_inFile + ".replace";
    std::cout << "Outfile created: " << this->_outFile << std::endl;
}

Sed::~Sed() {
}

void    Sed::replace( std::string toFind, std::string toReplace) {
    std::ifstream ifs(this->_inFile.c_str());
    if (ifs.is_open()) {
        std::string infileContent;
        if (std::getline(ifs, infileContent, '\0')) {
            std::ofstream   ofs(this->_outFile.c_str());
            size_t          pos = infileContent.find(toFind);
            while (pos != std::string::npos) {
                infileContent.erase(pos, toFind.length());
                infileContent.insert(pos, toReplace);
                pos = infileContent.find(toFind);
            }
            ofs << infileContent;
            ofs.close();
        }
        else {
            std::cerr << "Empty input file found." << std::endl;
        }
        ifs.close();
    }
    else {
        std::cerr << "Unable to open input file." << std::endl;
        std::exit(1);
    }
}