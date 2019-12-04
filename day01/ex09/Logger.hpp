/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 23:00:35 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/04 23:00:36 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <string>

class Logger
{
public:
	Logger();
	Logger(std::string const &fName);
	~Logger();
	void log(std::string const & dest, std::string const & message);

private:
	void logToConsole(std::string const &s);
	void logToFile(std::string const &s);
	std::string	get_curTime();
	std::string makeLogEntry(std::string const &s);
	std::string _fname;


};

#endif
