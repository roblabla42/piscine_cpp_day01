/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/12 13:39:36 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/12 13:40:45 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int		main()
{
	Human	h;

	h.action("melee", "Vlad");
	h.action("ranged", "White Wizard");
	h.action("shout", "Dragonborn");
	h.action("bleh", "Vlad");
}
