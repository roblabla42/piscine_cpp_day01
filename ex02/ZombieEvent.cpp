/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/11 16:40:23 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/11 16:55:01 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(std::string type) : type(type) {
}

void ZombieEvent::setZombieType(std::string typ) {
	type = typ;
}

Zombie	*ZombieEvent::newZombie(std::string name) {
	return (new Zombie(name, type));
}
