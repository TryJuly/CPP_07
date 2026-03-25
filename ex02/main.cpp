/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 11:06:28 by strieste          #+#    #+#             */
/*   Updated: 2026/03/25 11:45:41 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <exception>

int	main(void)
{
	Array<int>	myArray1;
	Array<int>	myArray2(5);
	Array<int>	myArray3;

	for (unsigned int i = 0; i < myArray2.size(); i++)
		myArray2[i] = i * 20;

	myArray3 = myArray2; 

	std::cout << "Size of my array 1: " << myArray1.size() << std::endl;
	try
	{
		std::cout << "Try to acess at index 1." << std::endl;
		myArray1[1];
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Size of my array 2: " << myArray2.size() << std::endl;
	std::cout << "Try to access at index 4: " << myArray2[4] << std::endl;

	std::cout << std::endl;
	std::cout << "Try assignment operator." << std::endl;

	for (unsigned int i = 0; i < myArray2.size(); i++)
		std::cout << "Array 2 [" << i << "] = " << myArray2[i] << std::endl;

	std::cout << std::endl;

	for (unsigned int i = 0; i < myArray3.size(); i++)
		std::cout << "Array 3 [" << i << "] = " << myArray3[i] << std::endl;

	std::cout << std::endl;
	std::cout << "Change value in tab 2 ..." << std::endl;

	for (unsigned int i = 0; i < myArray2.size(); i++)
		myArray2[i] = 2;

	std::cout << std::endl;
	
	for (unsigned int i = 0; i < myArray2.size(); i++)
		std::cout << "Array 2 [" << i << "] = " << myArray2[i] << std::endl;

	std::cout << std::endl;

	for (unsigned int i = 0; i < myArray3.size(); i++)
		std::cout << "Array 3 [" << i << "] = " << myArray3[i] << std::endl;
	
	std::cout << "###	FINISH	###" << std::endl;
	return (0);
}