/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 10:09:17 by cmartino          #+#    #+#             */
/*   Updated: 2024/02/12 10:40:17 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl	harl;

	std::cout << "Harl's messages :" << std::endl;
	harl.complain("INFO");
	harl.complain("DEBUG");
	harl.complain("WARNING");
	harl.complain("ERROR");

	harl.complain("");
	harl.complain("EROOR");
	
	return (0);
}
