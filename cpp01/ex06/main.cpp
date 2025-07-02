/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 14:41:05 by lmenoni           #+#    #+#             */
/*   Updated: 2025/07/02 14:41:07 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <string>
#include <istream>

int main(int ac, char **av) {
    std::string input;
    Harl        harl;

    if (ac != 2){
        std::cout   << "Invalid n of arguments."    << std::endl;
        return (1);
    }
    input = av[1];
    harl.complain(input);
    return (0);
}
