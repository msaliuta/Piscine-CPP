/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <msaliuta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 21:52:47 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/04 21:56:27 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(std::string type)
{
	_type = type;
}

Zombie *ZombieEvent::newZombie(std::string name)
{
	Zombie *res;
	res = new Zombie(name, _type);
	return (res);
}

Zombie *ZombieEvent::randomChump()
{
	srand (time(0));
	int ZLen = rand() % 10 + 1;
	srand (time(0));
	std::string ZName = "";
	int i;
	for (i = 0; i < ZLen; i++)
	{
		char t = (char)(rand() % 25 + 97);
		ZName += t;
	}
	srand (time(0));
	return(newZombie(ZName));
}

ZombieEvent::ZombieEvent(void)
{
	_type = "arrr";
}

ZombieEvent::ZombieEvent(std::string type)
{
	_type = type;
}

ZombieEvent::~ZombieEvent()
{
}
