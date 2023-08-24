/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 10:07:54 by cmartino          #+#    #+#             */
/*   Updated: 2023/08/24 11:30:41 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type){
	return ;
}

Weapon::~Weapon(void){
	return ;
}

std::string	Weapon::getType(void){
	return(this->type);
}

void	Weapon::setType(std::string newType){
	if (newType.size() > 0)
		this->type = newType;
	else
		std::cout << "Error: Type of weapon refused" << std::endl;
	return ;
}