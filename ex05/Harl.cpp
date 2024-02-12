/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 10:09:33 by cmartino          #+#    #+#             */
/*   Updated: 2024/02/12 10:54:52 by cmartino         ###   ########.fr       */
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
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
	return ;
}

void	Harl::info(void){
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	return;
}

void	Harl::warning(void){
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	return;
}

void	Harl::error(void){
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	return;
}

void	Harl::complain(std::string level){
	int			i = 0;
	void		(Harl::*fct[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	complainsLevel[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	while (i < 4 && level != complainsLevel[i])
		++i;
	if (i == 4)
		std::cout << "Harl doesn't complain. For once!" << std::endl;
	else
		(this->*fct[i])();
	return ;
}
