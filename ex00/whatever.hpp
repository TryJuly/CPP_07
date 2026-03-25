/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 11:24:36 by strieste          #+#    #+#             */
/*   Updated: 2026/03/25 07:30:35 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void swap(T x, T y)
{
	T	tmp = x;
	x = y;
	y = tmp;
	return ;
}

template <typename T>
T min(T x, T y)
{
	if (x < y)
		return (x);
	return (y);
}

template <typename T>
T max(T x, T y)
{
	if (x > y)
		return (x);
	return (y);
}

#endif