/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/11 16:54:27 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/17 08:35:34 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"
#include <cstdlib>
#include <iostream>

void	randomChump()
{
	std::string names[] = {
		"Mike Tyson", "Mecha Birdo", "Dracula", "Kraidgief", "Bowser",
		"Mother Brain", "The Father"
	};
	Zombie z(names[rand() % 7], "random");
	z.announce();
}

int		main()
{
	ZombieEvent	ev("test");
	Zombie	*z;
	Zombie	stackZ("My name is", "heap");
	std::string	tmp;

	stackZ.announce();
	z = ev.newZombie("Hello");
	z->announce();
	delete z;
	ev.setZombieType("test3");
	z = ev.newZombie("Hello WOrld !");
	z->announce();
	delete z;
	while (std::getline(std::cin, tmp))
		randomChump();
	return (0);
}
