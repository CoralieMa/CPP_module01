/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 10:06:18 by cmartino          #+#    #+#             */
/*   Updated: 2024/01/19 14:05:10 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int		i;
	Zombie	zombie1("Lola"), zombie2("Arthur"), zombie3("Michel");
	Zombie	*horde, *noZombie, *group;

	zombie1.announce();
	zombie3.announce();	
	zombie2.announce();
	std::cout << std::endl;
	horde = zombieHorde(30, "Charlotte");
	i = 0;
	while(i < 30)
	{
		horde[i].announce();
		++i;
	}
	delete [] horde;
	std::cout << std::endl;
	noZombie = zombieHorde(0, "Charles");
	delete [] noZombie;
	std::cout << std::endl;
	group = zombieHorde(10, "Steph");
	i = 0;
	while(i < 10)
	{
		group[i].announce();
		++i;
	}
	delete [] group;
	return (0);
}
