/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 19:19:58 by atemfack          #+#    #+#             */
/*   Updated: 2021/03/23 06:20:34 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Contact {	
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _login;
		std::string _postalAddress;
		std::string _emailAddress;
		std::string _phoneNumber;
		std::string _birthdayDate;
		std::string _favoriteMeal;
		std::string _underwearColor;
		std::string _darkestSecret;

	public:
		bool init(void);
		void showPart(int index) const;
		void show(void) const;
};

#endif
