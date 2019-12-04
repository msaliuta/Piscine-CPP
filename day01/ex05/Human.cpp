/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 22:32:58 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/04 22:33:00 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{

}

Human::~Human()
{

}

Brain const & Human::getBrain() const
{
	return (_brain);
}

std::string Human::identify() const
{
	return (_brain.identify());
}

