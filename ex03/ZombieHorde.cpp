/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/12 10:25:08 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/12 17:44:23 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "ZombieHorde.hpp"

Zombie		randZomb()
{
	std::string names[] = {
		"Mike Tyson", "Mecha Birdo", "Dracula", "Kraidgief", "Bowser",
		"Mother Brain", "The Father"
	};
	return (Zombie (names[rand() % 7], "random"));
}

ZombieHorde::ZombieHorde(int n) : n(n)
{
	zombies = new Zombie[n];
	int		i = 0;
	while (i < n)
		zombies[i++] = randZomb();
}

ZombieHorde::~ZombieHorde()
{
	delete[] zombies;
}

void	ZombieHorde::announce()
{
	int		i = 0;
	while (i < n)
		zombies[i++].announce();
}
