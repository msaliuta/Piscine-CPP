/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <msaliuta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 20:24:49 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/03 21:01:37 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "phonebook.hpp"

std::string	Info::get_info(int i) 
{
	if (i == 0)
		return (this->_firstname);
	else if (i == 1)
		return (this->_lastname);
	else if (i == 2)
		return (this->_nickname);
	else if (i == 3)
		return (this->_login);
	else if (i == 4)
		return (this->_address);
	else if (i == 5)
		return (this->_email);
	else if (i == 6)
		return (this->_phone);
	else if (i == 7)
		return (this->_birthday);
	else if (i == 8)
		return (this->_meal);
	else if (i == 9)
		return (this->_underwear_color);
	else if (i == 10)
		return (this->_secret);
	return ("ERROR");
}

void		display_info(Contact *instance, int i)
{
	std::cout << "First Name: " << instance->detail[i].get_firstname() << std::endl;
	std::cout << "Last Name: " << instance->detail[i].get_lastname() << std::endl;
	std::cout << "Nickname: " << instance->detail[i].get_nickname() << std::endl;
	std::cout << "Login: " << instance->detail[i].get_login() << std::endl;
	std::cout << "Postal Address: " << instance->detail[i].get_address() << std::endl;
	std::cout << "Email Address: " << instance->detail[i].get_email() << std::endl;
	std::cout << "Phone Number: " << instance->detail[i].get_phone() << std::endl;
	std::cout << "Birthday date: " << instance->detail[i].get_birthday() << std::endl;
	std::cout << "Favorite Meal: " << instance->detail[i].get_meal() << std::endl;
	std::cout << "Underwear Color: " << instance->detail[i].get_panties() << std::endl;
	std::cout << "Darkest _darkest_secret: " << instance->detail[i].get_secret() << std::endl;
}

void		check_search(Contact *instance, std::string response)
{
	if (response == "1" && (instance->detail[0].get_firstname() != ""))
		display_info(instance, 0);
	else if (response == "2" && (instance->detail[1].get_firstname() != ""))
		display_info(instance, 1);
	else if (response == "3" && (instance->detail[2].get_firstname() != ""))
		display_info(instance, 2);
	else if (response == "4" && (instance->detail[3].get_firstname() != ""))
		display_info(instance, 3);
	else if (response == "5" && (instance->detail[4].get_firstname() != ""))
		display_info(instance, 4);
	else if (response == "6" && (instance->detail[5].get_firstname() != ""))
		display_info(instance, 5);
	else if (response == "7" && (instance->detail[6].get_firstname() != ""))
		display_info(instance, 6);
	else if (response == "8" && (instance->detail[7].get_firstname() != ""))
		display_info(instance, 7);
	else
		std::cout << "Sorry, that index number is invalid." << std::endl;
}


std::string	check_length(Contact *instance, int i, int x)
{
	std::string input = instance->detail[i].get_info(x);
	int a = input.length();

	if (a > 10)
	{
		input.erase(9, a);
		std::cout << input;
		return (".");
	}
	while (a++ < 10)
		std::cout << " ";
	return (input);
}

int			search_contact(Contact *instance, int *total)
{
	int i = 0;
	std::string output;
	std::string response;

	if (*total == 0)
	{
		std::cout << "There are no contacts here." << std::endl;
		return (0);
	}
	std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
	while (i < *total)
	{
		std::cout << "|         " << (i + 1) << "|";
		output = check_length(instance, i, 0);
		std::cout << output << "|";
		output = check_length(instance, i, 1);
		std::cout << output << "|";
		output = check_length(instance, i, 2);
		std::cout << output << "|" << std::endl;
		i++;
	}
	std::cout << std::endl;
	std::cout << "Enter index." << std::endl;
	std::cout << "< ";
	std::getline(std::cin, response);
	check_search(instance, response);
	return (0);
}

int			add_contact(Contact *instance, int *total)
{
	std::string response;

	if (*total == 8)
	{
		std::cout << "Too many contacts." << std::endl;
		return (0);
	}
	std::cout << "Enter this details:" << std::endl;
	std::cout << "> First Name: ";
	std::getline(std::cin, response);
	instance->detail[*total].set_firstname(response);
	std::cout << "> Last Name: ";
	std::getline(std::cin, response);
	instance->detail[*total].set_lastname(response);
	std::cout << "> Nickname: ";
	std::getline(std::cin, response);
	instance->detail[*total].set_nickname(response);
	std::cout << "> Login: ";
	std::getline(std::cin, response);
	instance->detail[*total].set_login(response);
	std::cout << "> Postal Address: ";
	std::getline(std::cin, response);
	instance->detail[*total].set_address(response);
	std::cout << "> Email Address: ";
	std::getline(std::cin, response);
	instance->detail[*total].set_email(response);
	std::cout << "> Phone Number: ";
	std::getline(std::cin, response);
	instance->detail[*total].set_phone(response);
	std::cout << "> Birthdate: ";
	std::getline(std::cin, response);
	instance->detail[*total].set_birthday(response);
	std::cout << "> Favorite Meal: ";
	std::getline(std::cin, response);
	instance->detail[*total].set_meal(response);
	std::cout << "> Underwear Color: ";
	std::getline(std::cin, response);
	instance->detail[*total].set_panties(response);
	std::cout << "> Darkest _darkest_secret: ";
	std::getline(std::cin, response);
	instance->detail[*total].set_secret(response);
	std::cout << " * * * " << std::endl;
	*total = *total + 1;
	return (0);
}

int			check_commands(std::string input, Contact *instance, int *total)
{
	if (input.compare("EXIT") == 0)
		return (1);
	else if (input.compare("ADD") == 0)
		return (add_contact(instance, total));
	else if (input.compare("SEARCH") == 0)
		return (search_contact(instance, total));
	return (0);
}

int			main(void)
{
	int i = 1;
	int total = 0;
	std::string input;
	Contact instance[8];

	while (i)
	{
		std::cout << "Use ADD SEARCH EXIT" << std::endl << "> ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			return (0);
		if (check_commands(input, instance, &total))
			return (0);
	}
	return (0);
}