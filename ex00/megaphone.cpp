/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 03:33:32 by atemfack          #+#    #+#             */
/*   Updated: 2021/03/22 18:20:42 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int 		main(int argc, char **argv) {
	int		j;
	
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; i++) {
		j = 0;
		while (argv[i][j]) {
			std::cout << (unsigned char)(std::toupper(argv[i][j++]));
		}
	}
	std::cout << std::endl;
	return (0);
}
