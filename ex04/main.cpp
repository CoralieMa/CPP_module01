/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 10:09:04 by cmartino          #+#    #+#             */
/*   Updated: 2024/02/06 11:23:32 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>


int replace(std::string fileName, std::string s1, std::string s2)
{
	std::string 	buffer;
	size_t			pos;
	std::ifstream	ifs(fileName);

	if (ifs)
	{
		std::ofstream	ofs(fileName + ".replace");
		// while (getline(ifs, buffer))
		// {
		// 	find()		
		// 	if ()
		// }
	}
	else
	{
		std::cout << "File: " << fileName << " does not exist" << std::endl;
		return (1);
	}
	
	// ofs << "test" << std::endl;
	return (0);
}

int	main(int argc, char **argv){
	if (argc != 4)
		std::cout << "Wrong input" << std::endl;
	else
		return (replace(argv[1], argv[2], argv[3]));
	return (1);
}