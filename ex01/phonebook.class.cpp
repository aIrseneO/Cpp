/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 19:19:05 by atemfack          #+#    #+#             */
/*   Updated: 2021/03/23 16:59:01 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"

//====Phonebook default construtor==============================================
Phonebook::Phonebook(void) {
	this->_size = 0;
	return;
}

//====Phonebook size============================================================
int Phonebook::size(void) const {
	std::cout << "\x1B[33mYour phonebook has " ;
	std::cout << this->_size << "contact(s)\x1B[0m" << std::endl;
	return this->_size;
}

//====addContact================================================================
bool Phonebook::addContact() {
	if (this->_size >= MAXPHONEBOOKSIZE) {
		std::cout << "\x1B[33mYour Phonebook is full.\x1B[0m" << std::endl;
		return (true);
	}
	if (this->_contacts[this->_size].Contact::init() ==  false) {
		std::cout << std::endl;
		return (false);
	}
	this->_size++;
	std::cout << "\x1B[33mContact added, your Phonebook has ";
	std::cout << this->_size << " contact(s)\x1B[0m" << std::endl;
	return (true);
}

//====searchContact=============================================================
static int getIndex(int size) {
	int index;
	std::string discard;

	do {
		std::cout << "Which index amount the above (0 to quit)";
		std::cout << " \x1B[34m_>\x1B[0m ";
		std::cin >> index;
		if (index == 0) {
			std::cout << std::endl;
			return (false);
		}
	} while (index < 1 || index > size);
	std::getline(std::cin, discard);
	return index;
}

bool Phonebook::searchContact(void) const {
	int index;

	if (this->_size == 0) {
		std::cout << "\x1B[33mYour Phonebook is empty.\x1B[0m" << std::endl;
		return (true);
	}
	std::cout << "     \x1B[33mContact(s) list to choose from:\x1B[0m";
	std::cout << std::endl << std::endl;
	std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
	std::cout << "     ______________________________________" << std::endl;
	for (int i = 0; i < this->_size; i++) {
		this->_contacts[i].Contact::showPart(i + 1);
	}
	std::cout << std::endl;
	if ((index = getIndex(this->_size)) == 0)
		return (false);
	this->_contacts[index - 1].Contact::show();
	return (true);
}

//====showContacts==============================================================
void Phonebook::showContacts(void) const {
	for (int i = 0; i < this->_size; i++) {
		this->_contacts[i].Contact::show();
		std::cout << std::endl;
	}
	return;
}