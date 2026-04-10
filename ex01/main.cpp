/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 13:55:29 by strieste          #+#    #+#             */
/*   Updated: 2026/04/10 08:06:13 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>

static void	MyIntFunction(int &nb);
static void	MyIntConstFunction(int const &nb);
static void	MyCharFunction(char &c);
static void	MyCharConstFunction(char const &c);
static void	MyStringFunction(std::string &str);
static void	MyStringConstFunction(std::string const &str);

int	main(void)
{

	int const length = 3;
	int	arrayInt[] = {11, 12, 13};
	char	arrayChar[] = {'c', 'b', 'd'};
	std::string	arrayStr[3] = {"Hello", "My name", "Is Francis"};

	iter(arrayInt, length, &MyIntConstFunction);
	iter(arrayInt, length, &MyIntFunction);
	std::cout << "Modify:" << std::endl;
	iter(arrayInt, length, &MyIntConstFunction);

	std::cout << std::endl;

	iter(arrayChar, length, &MyCharConstFunction);
	iter(arrayChar, length, &MyCharFunction);
	std::cout << "Modify:" << std::endl;
	iter(arrayChar, length, &MyCharConstFunction);

	std::cout << std::endl;

	iter(arrayStr, length, &MyStringConstFunction);
	iter(arrayStr, length, &MyStringFunction);
	std::cout << "Modify:" << std::endl;
	iter(arrayStr, length, &MyStringConstFunction);

	return (0);
}

static void	MyIntFunction(int &nb)
{
	nb *= 2;
	return ;
}

static void	MyIntConstFunction(int const &nb)
{
	std::cout << nb << std::endl;
	return ;
}

static void	MyCharFunction(char &c)
{
	c += 1;
	return ;
}

static void	MyCharConstFunction(char const &c)
{
	std::cout << c << std::endl;
	return ;
}

static void	MyStringFunction(std::string &str)
{
	str = "I need chicken wings and a large cup of coke !";
	return ;
}

static void	MyStringConstFunction(std::string const &str)
{
	std::cout << str << std::endl;
	return ;
}
