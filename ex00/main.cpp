/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 10:04:48 by cmartino          #+#    #+#             */
/*   Updated: 2023/08/23 12:17:41 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	zombie1("Lola"), zombie2("Arthur"), zombie3("Michel");
	Zombie	*zombie4;

	zombie1.announce();
	zombie3.announce();	
	zombie2.announce();
	zombie4 = newZombie("Charlotte");
	zombie4->announce();
	randomChump("Marc");
	zombie2.announce();
	delete(zombie4);
	return (0);
}
