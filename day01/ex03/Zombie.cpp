/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 22:28:26 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/04 22:28:30 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

void Zombie::announce()
{
	std::cout << "<" << _name << " (" << _type << ")> Braiiiiiiinnnssss...\n";
}

Zombie::Zombie(std::string name, std::string type)
{
	_name = name;
	_type = type;
}

Zombie::Zombie( void )
{
	_name = "Zzzombie";
	_type = "real zombie";
}

Zombie::~Zombie()
{
	std::cout << "<" << _name << " (" << _type << ")> i`m dying\n";
}

void Zombie::setName(std::string name)
{
	_name = name;
}

