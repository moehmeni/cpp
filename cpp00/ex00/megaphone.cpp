/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 18:42:31 by mmomeni           #+#    #+#             */
/*   Updated: 2024/02/11 19:03:53 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	if (argc == 1)
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 0);
	std::string res;
	for (int i = 1; i < argc; i++)
		res += argv[i];
	int len = res.length();
	for (int j = 0; j < len; j++)
		res[j] = std::toupper(res[j]);
	std::cout << res << std::endl;
	return (0);
}
