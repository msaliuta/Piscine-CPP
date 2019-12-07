/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 20:19:47 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/07 20:19:48 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_H
# define IMATERIASOURCE_H

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>

class AMateria;

class	IMateriaSource
{

	public:

			virtual ~IMateriaSource() {}
			virtual void learnMateria(AMateria*) = 0;
			virtual AMateria* createMateria(std::string const & type) = 0;

};

#endif
