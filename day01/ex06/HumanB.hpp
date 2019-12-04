/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 22:43:04 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/04 22:43:05 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB
{
public:
	HumanB();
	HumanB(std::string name);
	~HumanB();
	void attack();
	Weapon const & getWeapon();
	void setWeapon(Weapon &w);

private:
	std::string _name;
	Weapon *_weapon;
};

#endif
