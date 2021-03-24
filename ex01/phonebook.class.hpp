/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 19:19:58 by atemfack          #+#    #+#             */
/*   Updated: 2021/03/24 01:05:10 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# define MAXPHONEBOOKSIZE 8

# include "contact.class.hpp"

class Phonebook {
	private:
		int _size;
		Contact _contacts[MAXPHONEBOOKSIZE];

	public:
		Phonebook(void);
		int size(void) const;
		bool addContact(void);
		bool searchContact(void) const;
		Contact getContact(int index);
		void showContacts(void) const;
};

#endif
