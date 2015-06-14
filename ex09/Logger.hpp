/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/12 15:10:57 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/12 15:22:12 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
# define LOGGER_HPP

#include<string>
class Logger
{
private:
	std::string	file;
	void		logToFile(std::string str);
	void		logToConsole(std::string str);
	std::string	makeLogEntry(std::string);
public:
	Logger(std::string file);
	void		log(std::string const & dest, std::string const & message);
};

#endif
