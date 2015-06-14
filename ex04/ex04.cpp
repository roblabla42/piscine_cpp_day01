/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/12 10:50:07 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/12 10:51:01 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int		main()
{
	std::string	str = "Hello";
	std::string	*ptr = &str;
	std::string	&ref = str;

	std::cout << str << std::endl << *ptr << std::endl << ref << std::endl;
	return (0);
}
