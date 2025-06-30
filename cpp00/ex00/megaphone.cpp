/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 15:53:36 by lmenoni           #+#    #+#             */
/*   Updated: 2025/06/17 15:53:39 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

using namespace std;

std::string	trim_spaces(std::string& input)
{
	size_t	start = 0;
	size_t	end = input.length() - 1;

	while (std::isspace(input[start]))
		start++;
	while (end > start && std::isspace(input[end]))
		end--;
	return (input.substr(start, end - start + 1));
}

int	main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
		return (0);
	}
	for (int i = 1; i < ac; i++)
	{
		std::string str = av[i];
		str = trim_spaces(str);
		for (size_t j = 0; j < str.length(); j++)
			std::cout << (char)std::toupper(str[j]);
		if (str[0] != '\0')
			std::cout << ' ';
	}
	std::cout << endl;
	return (0);
}
//g++ -Wall -Werror -Wextra -o megaphone megaphone.cpp