/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 22:42:49 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/04 22:42:51 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA()
{
	_name = "unknown";
}

HumanA::HumanA(std::string name, Weapon const & w)
{
	_name = name;
	_weapon = &(Weapon&)w;
}

HumanA::~HumanA()
{
}

Weapon const & HumanA::getWeapon()
{
	return (*_weapon);
}

void HumanA::attack()
{
	std::cout << _name << " attacks with his " << _weapon->getType() << "\n";
}
