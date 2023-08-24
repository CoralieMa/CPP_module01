/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 10:08:11 by cmartino          #+#    #+#             */
/*   Updated: 2023/08/24 13:09:56 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanA
{
	private:

		std::string	name;
		Weapon	*weapon;
	
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);

		void	attack(void);

};

#endif
