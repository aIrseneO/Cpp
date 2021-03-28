/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 19:48:00 by atemfack          #+#    #+#             */
/*   Updated: 2021/03/26 19:54:45 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstring>
#include <string>

std::string &replaceS1ByS2InLine(std::string const &s1, std::string const &s2, std::string &line) {
	size_t found(0);

	if (s1.length() == 0)
		return (line);
	found = line.find(s1);
	while (found != std::string::npos) {
		line.replace(found, s1.length(), s2.c_str());
		found = line.find(s1.c_str(), found + 1, s1.length());
	}
	return (line);
}

bool replace(std::string const &s1, std::string const &s2, std::string const &filename) {
	std::string line;

	std::ifstream ifs(filename.c_str());
	if (!ifs.is_open()) {
		std::cout << "Error opening inputed file: ";
		std::cout << std::strerror(errno) << std::endl;
		return (false);
	}
	while (std::getline(ifs, line)) {
		if (ifs.fail()) {
			std::cout << "Error reading file: ";
			std::cout << std::strerror(errno) << std::endl;
			ifs.close();
			return (false);
		}
		std::cout << replaceS1ByS2InLine(s1, s2, line);
		if (ifs.eof())
			break;
		std::cout << std::endl;
	}
	ifs.close();
	return (true);
}

int main(int argc, char **argv) {
	if (argc != 4) {
		std::cout << "Usage: ./sed String1 String2 Filename" << std::endl;
		return (1);
	}
	if (replace(argv[1], argv[2], argv[3]) == false)
		return (1);
	return (0);
}