/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 22:30:03 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/04 22:30:06 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main( void )
{
	std::string str = "HI THIS IS BRAIN";

	std::string *ptr = &str;
	std::string &ref = str;

	std::cout << *ptr << "\n";
	std::cout << ref << "\n";

	return 0;
}
