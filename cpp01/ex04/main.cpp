/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-woel <ade-woel@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 21:43:23 by ade-woel          #+#    #+#             */
/*   Updated: 2025/11/27 16:59:38 by ade-woel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string	replaceString(std::string line, const std::string& s1, const std::string& s2)
{
	size_t	i = 0;
	while (true)
	{
		i = line.find(s1, i);
		if (i == std::string::npos)
			break ;
		line.erase(i, s1.length());
		line.insert(i, s2);
		i += s2.length();
	}
	return (line);
}

int	main(int argc, char **argv)
{
	if (argc != 4) {
		std::cerr << "Error, expecting 3 arguments [filename] [string1] [string2]" << std::endl;
		return (1);
	}

	std::string		s1 = argv[2];
	std::string		s2 = argv[3];
	if (s1.empty ()) {
		std::cerr << "Error, s1 can not be empty" << std::endl;
		return (1);
	}
	
	std::ifstream	inputFile(argv[1]);
	if (!inputFile.is_open()) {
		std::cerr << "Could not open input file " << argv[1] << std::endl;
		return (1);
	}
	
	std::string		newFile = std::string(argv[1]) + ".replace";
	std::ofstream	outputFile(newFile.c_str());
	if (!outputFile.is_open()) {
		std::cerr << "Could not open output file " << newFile << std::endl;
		inputFile.close();
		return (1);
	}

	std::string	line;
	while (std::getline(inputFile, line)) {
		std::string	newLine = replaceString(line, s1, s2);
		outputFile << newLine;
		if (inputFile.peek() != EOF)
			outputFile << '\n';
	}
	
	inputFile.close();
	outputFile.close();
	return (0);
}

/* TESTING */
/* 1 - Empty file */
/* 2 - Unexisting input file */
/* 3 - Empty s1 */
/* 4 - 1 occurence "Hello World" s1 = Hello s2 = Coucou */
/* 5 - Multiple occurences Hello World */
/* 6 - Mixed "Banana" s1 = a s2 = aa */
/* 7 - No occurence */
/* 8 - Empty s2 */
/* 9 - Try with more or less arguments */