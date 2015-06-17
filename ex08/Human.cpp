/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/12 13:17:28 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/17 09:18:32 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include <iostream>

void	Human::meleeAttack(std::string const & target)
{
	std::cout << "Melee attack on " << target << std::endl;
}

void	Human::rangedAttack(std::string const & target)
{
	std::cout << "Ranged attack on " << target << std::endl;
}

void	Human::intimidatingShout(std::string const & target)
{
	std::cout << "FusRohDah !!! on " << target << std::endl;
}

void	Human::action(std::string const & action_name, std::string const & target)
{
	std::string	keys[] = { "melee", "ranged", "shout" };
	void (Human::*values[])(std::string const &) = { 
		&Human::meleeAttack,
		&Human::rangedAttack,
		&Human::intimidatingShout
	};
	size_t	i = 0;
	while (i < 3 && keys[i] != action_name)
		i++;
	if (i < 3)
		(this->*values[i])(target);
}
