/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 18:29:39 by lmenoni           #+#    #+#             */
/*   Updated: 2025/06/30 18:29:42 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string     s = "HI THIS IS BRAIN";
    std::string*    stringPTR = &s;
    std::string&    stringREF = s;

    std::cout   << "Memory address of s:        "  << &s                << std::endl;
    std::cout   << "Memory address held by ptr: "  << stringPTR         << std::endl;
    std::cout   << "Memory address held by ref: "  << &stringREF        << std::endl;
    std::cout   << "--------------------------------------------"       << std::endl;
    std::cout   << "Value of s:                 "  << s                 << std::endl;
    std::cout   << "Value pinted to by ptr:     "  << *stringPTR        << std::endl;
    std::cout   << "Value pinted to by ref:     "  << stringREF         << std::endl;

    return (0);
}
