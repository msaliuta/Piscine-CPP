/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 22:42:56 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/04 22:42:58 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA
{
public:
	HumanA();
	HumanA(std::string name, Weapon const & w);
	~HumanA();
	void attack();
	Weapon const & getWeapon();

private:
	std::string _name;
	Weapon *_weapon;
};

#endif
