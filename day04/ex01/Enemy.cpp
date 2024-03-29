/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 20:12:50 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/07 20:12:52 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type) : _hp(hp), _type(type)
{
	return;
}

Enemy::Enemy(Enemy &obj)
{
	*this = obj;
	return;
}

Enemy::~Enemy(void)
{
	return;
}

Enemy &Enemy::operator=(Enemy const &r) 
{
	this->_hp = r._hp;
	this->_type = r._type;
	return (*this);
}

std::string		Enemy::getType() const
{
	return (this->_type);
}

int				Enemy::getHP() const
{
	return (this->_hp);
}

void			Enemy::takeDamage(int amount)
{
	int i = 0;

	if (amount < 0)
		return;
	else if (amount > this->_hp )
		i = this->_hp;
	else
		i = amount;
	this->_hp = this->_hp - i;
	if (this->_hp < 0)
		this->_hp = 0;
	return;
}

void			Enemy::setHP(int i)
{
	this->_hp = i;
	return;
}
