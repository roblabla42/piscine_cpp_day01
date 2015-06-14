/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/12 10:56:28 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/12 11:06:51 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human() : brain()
{
}

const Brain	&Human::getBrain()
{
	return (brain);
}

std::string	Human::identify()
{
	return (brain.identify());
}
