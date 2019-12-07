/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 20:13:22 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/07 20:13:24 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_H
# define SUPERMUTANT_H

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "Enemy.hpp"

class	SuperMutant : public Enemy
{

	public:

		SuperMutant(void);
		SuperMutant(SuperMutant &obj);
		virtual ~SuperMutant(void);
		SuperMutant &operator=(SuperMutant const &r);

		virtual void		takeDamage(int damage);

};

#endif
