/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/11 14:55:47 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/11 15:06:12 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

Pony::Pony(std::string name) : name(name)
{
}

void Pony::talk() {
	std::cout << "BLEIGH!!!" << std::endl;
}

void Pony::ponyOnStack() {
	Pony poney("Mon petit poney");
	poney.talk();
	std::cout << "Stack here" << std::endl;
}

void Pony::ponyOnHeap() {
	Pony *poney = new Pony("Mon grand poney");
	poney->talk();
	std::cout << "Heap here" << std::endl;
	delete poney;
}
