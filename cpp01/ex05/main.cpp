/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:19:36 by lmenoni           #+#    #+#             */
/*   Updated: 2025/07/02 13:19:37 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <string>

// int main( void ){
//     Harl    harl;
//     std::string line;

//     while (1) {
//         std::cout   << "Harl is listening.."    << std::endl;
//         if (!std::getline(std::cin, line))
//             break ;
//         if (line.empty())
//             continue ;
//         harl.complain(line);
//     }
//     return (0);
// }

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
