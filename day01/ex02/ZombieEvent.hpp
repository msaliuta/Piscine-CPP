/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 21:53:24 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/04 21:53:27 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent
{
public:
	Zombie* newZombie(std::string name);
	void setZombieType(std::string type);
	Zombie* randomChump();
	ZombieEvent(void);
	ZombieEvent(std::string type);
	~ZombieEvent();

private:
	std::string _type;
};

#endif
