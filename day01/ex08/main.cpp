/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <msaliuta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 22:52:37 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/04 22:57:53 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Human.hpp"

int		main( int ac, char ** av )
{
	Human man;

	man.action("melee", "zombie");
	man.action("ranged", "leha");
	man.action("shout", "mzhurba");
	return 0;
}
