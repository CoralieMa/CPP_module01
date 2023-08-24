/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 10:08:19 by cmartino          #+#    #+#             */
/*   Updated: 2023/08/24 13:10:50 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"


HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(&weapon){
	return ;
}

HumanA::~HumanA(void){
	return ;
}

void	HumanA::attack(void){
	std::cout << this->name << " attacks with their " << weapon->getType() << std::endl;
}