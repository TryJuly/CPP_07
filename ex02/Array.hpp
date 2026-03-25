/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 09:06:22 by strieste          #+#    #+#             */
/*   Updated: 2026/03/25 11:34:05 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <stdexcept>

template <typename T>
class Array
{
	public:
		Array();
		Array(unsigned int n);
		Array(Array<T> const &copy);
		~Array();
		Array<T>&	operator=(Array<T> const &copy);

		unsigned int	size() const;
		T&	operator[](unsigned int index) const;

	private:
		T	*_array;
		unsigned int	_size;
};

template <typename T>
Array<T>::Array(): _array(NULL), _size(0) { return ; }

template <typename T>
Array<T>::Array(unsigned int n): _array(new T[n]), _size(n) { return ; }

template <typename T>
Array<T>::Array(Array<T> const &copy)
{
	(*this) = copy;
	return ;
}

template <typename T>
Array<T>::~Array()
{
	if (_array != NULL)
		delete [] _array;
	return ;
}

template <typename T>
Array<T>&	Array<T>::operator=(Array<T> const &copy)
{
	if (this != &copy)
	{
		if (copy._array != NULL)
		{
			if (_array != NULL)
				delete [] _array;
			_size = copy._size;
			_array = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
				_array[i] = copy._array[i];
		}
		else
		{
			if (_array != NULL)
				delete [] _array;
			_array = NULL;
		}
	}
	return (*this);
}

template <typename T>
T&	Array<T>::operator[](unsigned int index) const
{
	if (index >= this->_size)
		throw (std::out_of_range("Index out of range !"));
	return (_array[index]);
}

template <typename T>
unsigned int	Array<T>::size() const
{ return (_size); }

#endif
