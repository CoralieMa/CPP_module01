/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 10:10:26 by cmartino          #+#    #+#             */
/*   Updated: 2024/02/12 11:42:33 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void){
	return ;
}

Harl::~Harl(void){
	return ;
}

void	Harl::debug(void){
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
	return ;
}

void	Harl::info(void){
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	return;
}

void	Harl::warning(void){
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	return;
}

void	Harl::error(void){
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	return;
}

void	Harl::complain(std::string level){
	int			i = 0;
	void		(Harl::*fct[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	complainsLevel[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	while (i < 4 && level != complainsLevel[i])
		++i;

	switch(i)
	{
		case(0):
		{
			this->debug();
			std::cout << std::endl;
		}
		case(1):
		{
			this->info();
			std::cout << std::endl;
		}
		case(2):
		{
			this->warning();
			std::cout << std::endl;
		}
		case(3):
		{
			this->error();
			std::cout << std::endl;
			break;
		}
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return;
}

