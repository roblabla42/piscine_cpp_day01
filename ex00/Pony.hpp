/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/11 14:58:06 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/11 15:05:07 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP
# include<string>

class Pony {
	std::string	name;
	Pony(std::string name);
public:
	void talk();
	static void ponyOnStack();
	static void ponyOnHeap();
};

#endif
