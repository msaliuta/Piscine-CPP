/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 20:52:04 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/04 20:52:08 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

Pony::Pony()
{
	_name = "Stig";
	_age = 1;
	std::cout << "New pony " << getName() << " suddenly born\n";
}

Pony::Pony(std::string newName, int newAge)
{
	_name = newName;
	_age = newAge;
	std::cout << "New pony " << getName() << " suddenly born\n";
}

Pony::~Pony()
{
	_age = 0;
	std::cout << "My pony " << getName() << " suddenly died\n\n";
}

int Pony::getAge() const
{
	return (_age);
}

int Pony::setAge(int n)
{
	_age = n;
	return (_age);
}

std::string Pony::getName() const
{
	return (_name);
}

std::string Pony::setName(std::string newName)
{
	_name = newName;
	return (_name);
}
