/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/12 15:19:33 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/17 09:18:16 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"
#include <fstream>
#include <iostream>
#include <map>

Logger::Logger(std::string file) : file(file)
{
}

void	Logger::logToFile(std::string str)
{
	std::ofstream f(file.c_str());

	f << makeLogEntry(str) << std::endl;
}

void	Logger::logToConsole(std::string str)
{
	std::cout << makeLogEntry(str) << std::endl;
}

std::string	Logger::makeLogEntry(std::string str)
{
	time_t now = time(0);
	std::string	mytime = std::string(ctime(&now));
	mytime = mytime.substr(0, mytime.length() - 1);
	return mytime + " " + str;
}

void		Logger::log(std::string const & dest, std::string const & msg)
{
	std::string keys[] = { "console", "file" };
	void (Logger::*values[])(std::string) = {
		&Logger::logToConsole,
		&Logger::logToFile
	};
	size_t i = 0;
	while (i < 2 && keys[i] != dest)
		i++;
	if (i < 2)
		(this->*values[i])(msg);
}
