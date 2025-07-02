/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 16:55:54 by lmenoni           #+#    #+#             */
/*   Updated: 2025/07/01 16:55:57 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

static bool    openFiles(std::string filename, std::ifstream& infile, std::ofstream& outfile){
    infile.open(filename.c_str());
    if (!infile){
        std::cerr   << "Error opening infile"   << std::endl;
        return (false);
    }
    std::string outname = filename + ".replace";
    outfile.open(outname.c_str());
    if (!outfile){
        std::cerr   << "Error opening outfile"   << std::endl;
        infile.close();
        return (false);
    }
    return (true);
}

static std::string replaceLine(std::string& l, std::string& find, std::string& replace){
    std::string result;
    std::size_t i = 0;
    std::size_t found = 0;
    
    if (find.empty())
        return (l);
    found = l.find(find, i);
    while (found != std::string::npos){
        result.append(l, i, found - i);
        result.append(replace);
        i = found + find.length();
        found = l.find(find, i);
    }
    result.append(l, i, l.length() - i);
    return (result);
}

static void    copyFile(std::ifstream& in, std::ofstream& ou, char **av){
    std::string line;
    std::string s1 = av[2];
    std::string s2 = av[3];

    while (std::getline(in, line)){
        line = replaceLine(line, s1, s2);
        ou << line << std::endl;
    }
}

int main(int ac, char **av)
{
    std::string filename;
    std::ifstream   infile;
    std::ofstream   outfile;

    if (ac != 4){
        std::cout   << "Invalid n of arguments."    << std::endl;
        return (1);
    }
    filename = av[1];
    if (!openFiles(filename, infile, outfile))
        return (1);
    copyFile(infile, outfile, av);
    infile.close();
    outfile.close();
    return (0);
}
