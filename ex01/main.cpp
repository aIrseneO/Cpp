/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 01:50:42 by atemfack          #+#    #+#             */
/*   Updated: 2021/03/24 06:26:29 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"
#include "contact.class.hpp"

int main(void) {
	std::string command;
	Phonebook myPhonebook;
	
	std::cout << "\x1B[32mWelcome to Phonebook...\x1B[0m" << std::endl;
	while (true) {
		std::cout << "\x1B[34mADD/SEARCH/EXIT _> \x1B[0m";
		std::getline(std::cin, command);
		if (!std::cin) {
			std::cout << std::endl;
			break;
		}
		if (command == "ADD") {
			if (myPhonebook.addContact() == false)
				break;
		}
		else if (command == "SEARCH") {
			if (myPhonebook.searchContact() == false)
				break;
		}
		else if (command == "EXIT") {
			break;
		}
	}
	std::cout << "\x1B[32mGoodbye !\x1B[0m" << std::endl;
	return (0);
}
