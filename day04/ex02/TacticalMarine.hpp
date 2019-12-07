/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <msaliuta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 20:16:09 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/07 20:17:59 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_H
# define TACTICALMARINE_H

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "TacticalMarine.hpp"
#include "ISpaceMarine.hpp"

class	TacticalMarine : public ISpaceMarine
{
	public:

		TacticalMarine(void);
		TacticalMarine(TacticalMarine const &obj);
		virtual ~TacticalMarine(void);
		TacticalMarine &operator=(TacticalMarine const &r);

		ISpaceMarine*	clone() const;
		void			battleCry() const;
		void			rangedAttack() const;
		void			meleeAttack() const;
};

#endif
