/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/12 15:54:51 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/12 16:13:43 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int		main()
{
	Logger logger("some_log");

	logger.log("console", "heeere");
	logger.log("file", "theeere");
	logger.log("nowhere", "theeere");
}
