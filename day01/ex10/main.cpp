/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 23:01:46 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/04 23:01:47 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

int		main( int ac, char ** av )
{
	if (ac > 1)
		for (int i = 1; i < ac; i++)
			Cat::file(av[i]);
	else
		Cat::console();

	return 0;
}
