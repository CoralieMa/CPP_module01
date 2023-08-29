/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 10:09:04 by cmartino          #+#    #+#             */
/*   Updated: 2023/08/24 13:50:27 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int	main(int argc, char **argv){
	std::string	fileName;
	std::string	fileCopy;
	std::string	s1;
	std::string	s2;
	
	if (argc != 4)
	{
		std::cout << "Wrong input" << std::endl;
		return (0);
	}
	fileName = argv[1];
	fileCopy = fileName + ".replace";
	s1 = argv[2];
	s2 = argv[3];

	std::ifstream	ifs(fileName);
	if (ifs == 0)
	{
		std::cout << "File: " << fileName << " does not exist" << std::endl;
		exit (0);
	}
	std::ofstream	ofs(fileCopy);



	
	ofs << "test" << std::endl;
	return (0);
}