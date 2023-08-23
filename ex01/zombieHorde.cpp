/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 10:06:55 by cmartino          #+#    #+#             */
/*   Updated: 2023/08/23 13:28:39 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name){
	int		i;
	Zombie	*horde;

	if (N < 1)
		return (NULL);
	horde = new Zombie[N];
	i = 0;
	while (i < N)
	{
		horde[i].newName(name);
		++i;
	}
	return (horde);
}
