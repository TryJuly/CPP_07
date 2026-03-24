/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 13:55:29 by strieste          #+#    #+#             */
/*   Updated: 2026/03/24 14:54:27 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void)
{
	return (0);
}

template<typename T>
void	iter(T &array, const T length, void (*f)(T))
{
	for (int i = 0; i < length; i++)
		(*f)(array[i]);
	return ;
}
