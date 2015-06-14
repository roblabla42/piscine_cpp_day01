/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/11 16:23:10 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/12 10:37:31 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"


Zombie::Zombie() : name(""), type("")
{
}

Zombie::Zombie(std::string name, std::string type) : name(name), type(type)
{
}

void Zombie::announce() {
	std::cout	<< "<" << name << " (" << type << ")> Braiiiinnsssss..."
				<< std::endl;
}
