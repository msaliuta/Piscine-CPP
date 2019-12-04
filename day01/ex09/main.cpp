/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 23:00:43 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/04 23:00:46 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Logger.hpp"

int		main( int ac, char ** av )
{
	Logger log("myLogFile.txt");

	log.log("console", "heare we have some loooooooooooog!!!");
	log.log("file", "heare 22 have some loooooooooooog!!!\n");
	log.log("console", "heare 33 have some loooooooooooog!!!\n");
	log.log("file", "heare 33 have some loooooooooooog!!!\n");
	log.log("file", "heare 33 have some loooooooooooog!!!\n");
	log.log("console", "heare 33 have some loooooooooooog!!!\n");
	return 0;
}
