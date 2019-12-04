/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 23:00:30 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/04 23:00:31 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"
#include <ctime>
#include <fstream>
#include <iostream>

std::string	Logger::get_curTime()
{
	// get time now
	time_t t = time(0);
	tm *dateTimeNow = localtime( &t );
	char buf[80];
	strftime (buf, 80, "%Y.%m.%d_%H:%M:%S", dateTimeNow);
	return (buf);
}

Logger::Logger()
{
	_fname = "log.txt";
}

Logger::Logger(std::string const &fName)
{
	_fname = fName;
}

Logger::~Logger()
{
}

std::string Logger::makeLogEntry(std::string const &s)
{
	std::string res = "<" + get_curTime() + "> ";
	res += s;
	if (s[s.length() - 1] != '\n')
		res += "\n";
	return (res);
}

void Logger::logToConsole(std::string const &s)
{
	std::cout << s;
}

void Logger::logToFile(std::string const &s)
{
	std::ofstream log(_fname, std::ios::app);
	if (!log)
	{
		std::cout << "There were some errors during file opening\n";
	}
	else
	{
		log << s;
		log.close();
	}
}

void Logger::log(std::string const &dest, std::string const &message)
{
	std::string actName[2] = {"console", "file"};
	void (Logger::*actionArr[2])(std::string const &) =
		{
			&Logger::logToConsole,
			&Logger::logToFile,
		};
	std::string s = makeLogEntry(message);
	for(int i = 0; i < 2; i++)
		if(actName[i] == dest)
			(this->*actionArr[i])(s);
}

