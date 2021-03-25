/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 19:19:05 by atemfack          #+#    #+#             */
/*   Updated: 2021/03/23 16:47:03 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"

//====init=====================================================================
static bool getInput(std::string msg, std::string &input) {
	//do {
		std::cout << msg << " \x1B[34m_> \x1B[0m";
		std::getline(std::cin, input);
		if (!std::cin) {
			return (false);
		}
	//} while (input.empty() == true;
	return (true);
}

bool Contact::init(void) {
	std::cout << "\x1B[33mGetting contact informations:\x1B[0m" << std::endl;
	if (getInput(" -Enter First Name     ", this->_firstName) == false ||
		getInput(" -Enter Last Name      ", this->_lastName) == false ||
		getInput(" -Enter Nickname       ", this->_nickName) == false ||
		getInput(" -Enter Login          ", this->_login) == false ||
		getInput(" -Enter Postal Address ", this->_postalAddress) == false ||
		getInput(" -Enter Email Adress   ", this->_emailAddress) == false ||
		getInput(" -Enter Phone Number   ", this->_phoneNumber) == false ||
		getInput(" -Enter Birthday Date  ", this->_birthdayDate) == false ||
		getInput(" -Enter Favorite Meal  ", this->_favoriteMeal) == false ||
		getInput(" -Enter Underwear Color", this->_underwearColor) == false ||
		getInput(" -Enter Darkest Secret ", this->_darkestSecret) == false) {
		return (false);
		}
	return (true);
}

//====showPart==================================================================
static void putTen(std::string str) {
	if (str.size() > 10) {
		std::cout << str.substr(0, 9) << ".";
	} else {
		for (int i = str.size(); i < 10; i++) {
			std::cout << " ";
		}
		std::cout << str;
	}
	return;
}

void Contact::showPart(int index) const {
	std::cout << std::setfill(' ') << std::setw(10) << index;
	std::cout << "|";
	putTen(this->_firstName);
	std::cout << "|";
	putTen(this->_lastName);
	std::cout << "|";
	putTen(this->_nickName);
	std::cout << std::endl;
	return;
}
//====show=====================================================================
void Contact::show(void) const {
	std::cout << "\x1B[33mFirst Name:      \x1B[0m" << this->_firstName;
	std::cout << std::endl;
	std::cout << "\x1B[33mLast Name:       \x1B[0m" << this->_lastName;
	std::cout << std::endl;
	std::cout << "\x1B[33mNickname:        \x1B[0m" << this->_nickName;
	std::cout << std::endl;
	std::cout << "\x1B[33mLogin:           \x1B[0m" << this->_login;
	std::cout << std::endl;
	std::cout << "\x1B[33mPostal Address:  \x1B[0m" << this->_postalAddress;
	std::cout << std::endl;
	std::cout << "\x1B[33mEmail Adress:    \x1B[0m" << this->_emailAddress;
	std::cout << std::endl;
	std::cout << "\x1B[33mPhone Number:    \x1B[0m" << this->_phoneNumber;
	std::cout << std::endl;
	std::cout << "\x1B[33mBirthday Date:   \x1B[0m" << this->_birthdayDate;
	std::cout << std::endl;
	std::cout << "\x1B[33mFavorite Meal:   \x1B[0m" << this->_favoriteMeal;
	std::cout << std::endl;
	std::cout << "\x1B[33mUnderwear Color: \x1B[0m" << this->_underwearColor;
	std::cout << std::endl;
	std::cout << "\x1B[33mDarkest Secret:  \x1B[0m" << this->_darkestSecret;
	std::cout << std::endl;
}
