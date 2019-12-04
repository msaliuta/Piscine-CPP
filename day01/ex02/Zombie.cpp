/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <msaliuta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 21:52:25 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/04 21:53:15 by msaliuta         ###   ########.fr       */
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
	std::cout << "<" << _name << " (" << _type << ")> i`m alive\n";
	announce();
}

Zombie::Zombie( void )
{
	_name = "Zema";
	_type = "tupo zombak";
	std::cout << "<" << _name << " (" << _type << ")> i`m alive\n";
	announce();
}

Zombie::~Zombie()
{
	std::cout << "<" << _name << " (" << _type << ")> i`m dying\n";
}

