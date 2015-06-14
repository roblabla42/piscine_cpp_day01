/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/14 14:08:33 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/14 14:08:35 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

static int		parsingReplace(char* file, std::string newFile,
								std::string strFind, std::string strReplace)
{
	std::string	line;
	size_t			len;

	std::ifstream ifs(file, std::ios::in);
	if (!ifs)
	{
		std::cout << "ERROR : File does not exists" << std::endl;
		return (ifs.close(), 1);
	}
	std::ofstream ofs(newFile.c_str());
	if (!ofs)
	{
		std::cout << "ERROR : Cannot Create new file" << std::endl;
		return (ofs.close(), 1);
	}
	while (std::getline(ifs, line))
	{
		while ((len = line.find(strFind)) != std::string::npos)
			line.replace(len, strFind.size(), strReplace);
		ofs << line << std::endl;
	}
	return (0);
}

int				main(int ac, char **av)
{
	std::string fileReplace;
	std::string strFind;
	std::string strReplace;

	if (ac != 4)
		return (std::cout << "Arguement missing!" << std::endl, 1);
	fileReplace = av[1];
	strFind = av[2];
	strReplace = av[3];
	if (fileReplace.compare("") == 0 || strFind.compare("") == 0 ||
			strReplace.compare("") == 0)
		return (std::cout << "Error : Arguement empty" << std::endl, 1);
	fileReplace = fileReplace + ".replace";
	return (parsingReplace(av[1], fileReplace, strFind, strReplace));
}
