/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 10:09:04 by cmartino          #+#    #+#             */
/*   Updated: 2024/02/06 14:38:47 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>  
#include <fstream>
#include <iostream>



int ft(std::string fileName, std::string s1, std::string s2)
{
	std::string 	buffer;
	size_t			pos;
	size_t			i;
	std::ifstream	ifs(fileName);

	if (ifs)
	{
		std::ofstream	ofs(fileName + ".replace");
		while (getline(ifs, buffer))
		{
			pos = buffer.find(s1);
			i = 0;
			if (pos == -1)
				ofs << buffer << std::endl;
			else
			{
				while (pos != -1)
				{
					while (i < pos)
					{
						ofs << buffer[i];
						++i;
					}
					ofs << s2;
					i += s2.length() + 1;
					pos = buffer.find(s1, i);
				}
				ofs << &buffer[i] << std::endl;
			}
		}
	}
	else
	{
		std::cout << "File: " << fileName << " does not exist" << std::endl;
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv){
	std::cout << argv[2];
	if (argc != 4)
		std::cout << "Wrong input" << std::endl;
	else
		return (ft(argv[1], argv[2], argv[3]));
	return (1);
}
