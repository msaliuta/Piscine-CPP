/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 20:14:28 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/07 20:14:30 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_H
# define ISPACEMARINE_H

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>

class	ISpaceMarine
{
	public:

		virtual ~ISpaceMarine() {}
		virtual ISpaceMarine* clone() const = 0;

		virtual void	battleCry() const = 0;
		virtual void	rangedAttack() const = 0;
		virtual void	meleeAttack() const = 0;

};

#endif
