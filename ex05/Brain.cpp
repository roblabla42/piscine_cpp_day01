/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/12 10:58:54 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/12 11:05:40 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>

Brain::Brain()
{
}

std::string	Brain::identify() const
{
	std::stringstream ss;
	ss << std::hex << this;
	return (ss.str());
}
