/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 20:15:43 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/07 20:15:44 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_H
# define ISQUAD_H

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "ISpaceMarine.hpp"

class	ISquad
{
	public:

		virtual ~ISquad() {}

		virtual int				getCount() const = 0;
		virtual ISpaceMarine*	getUnit(int) const = 0;
		virtual int				push(ISpaceMarine*) = 0;

};

#endif
