/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/12 13:17:28 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/12 16:18:27 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include <iostream>
#include <map>

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
	std::map<std::string, void (Human::*)(std::string const &)> fns;
	fns["melee"] = &Human::meleeAttack;
	fns["ranged"] = &Human::rangedAttack;
	fns["shout"] = &Human::intimidatingShout;
	if (fns.count(action_name))
		(this->*fns[action_name])(target);
}
