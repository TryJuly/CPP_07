/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 13:49:55 by strieste          #+#    #+#             */
/*   Updated: 2026/03/25 08:47:33 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <typename T>
void	iter(T *array, int const length, void (*f)(T &))
{
	for (int i = 0; i < length; i++)
		(*f)(array[i]);
	return ;
}

template <typename T>
void	iter(T const *array, int const length, void (*f)(T const &))
{
	for (int i = 0; i < length; i++)
		(*f)(array[i]);
	return ;
}

#endif