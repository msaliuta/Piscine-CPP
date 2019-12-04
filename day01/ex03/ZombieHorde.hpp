/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 22:28:45 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/04 22:35:58 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include "Zombie.hpp"
#include <iostream>

class ZombieHorde
{
public:
	ZombieHorde();
	ZombieHorde(int n);
	~ZombieHorde();
	std::string randomName();
	void announce() const;

private:
	int _num;
	Zombie *_horde;
};

#endif
