/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusousa <gusousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:23:08 by gusousa           #+#    #+#             */
/*   Updated: 2023/04/19 17:37:15 by gusousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "include/PhoneBook.hpp"

int	main(void)
{
	PhoneBook	agenda;
	std::string	input;

	while (42 && !std::cin.eof()) {
		std::cout << "Welcome to the agenda" << std::endl;
		std::cout << "Choose what you want: ADD, SEARCH or EXIT: ";
		std::getline(std::cin, input);
		if (input == "ADD")
			agenda.add();
		else if (input == "SEARCH")
			agenda.search();
		else if (input == "EXIT")
			break;
		else
			std::cout << "Invalid input. Be cautious and try again" << std::endl;
	}
	return (0);
}
