/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 10:07:47 by cmartino          #+#    #+#             */
/*   Updated: 2023/08/24 11:25:46 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon
{
	private:
	
		std::string type;

	public:

		Weapon(std::string type);
		~Weapon(void);

		std::string	getType(void);
		void	setType(std::string newType);
};

#endif
