/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 20:13:09 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/07 20:13:11 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_H
# define PLASMARIFLE_H

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "AWeapon.hpp"

class	PlasmaRifle : public AWeapon
{

	public:

		PlasmaRifle(void);
		PlasmaRifle(PlasmaRifle &obj);
		virtual ~PlasmaRifle(void);
		PlasmaRifle &operator=(PlasmaRifle const &r);

		void	attack(void) const;

};

#endif
