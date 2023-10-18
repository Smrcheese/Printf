/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezequie <sezequie@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 20:23:50 by sezequie          #+#    #+#             */
/*   Updated: 2023/10/16 21:53:51 by sezequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	fnum(int number, int *len)
{
	if (number == -2147483648)
	{
		write(1, "-2147483648", 11);
		(*len) += 11;
		return ;
	}
	if (number < 0)
	{
		fputchar('-', len);
		fnum(number * -1, len);
	}
	else
	{
		if (number > 9)
		{
			fnum(number / 10, len);
		}
		fputchar(number % 10 + '0', len);
	}
}

void	funsigned_int(unsigned int number, int *len)
{
	if (number > 9)
	{
		funsigned_int(number / 10, len);
	}
	fputchar(number % 10 + '0', len);
}

void	fhexadecimal(unsigned int number, int *len, char choose)
{
	char	str[25];
	char	*hexa_base;
	int		i;

	i = 0;
	if (choose == 'X')
		hexa_base = "0123456789ABCDEF";
	else
		hexa_base = "0123456789abcdef";
	i = 0;
	if (number == 0)
	{
		fputchar('0', len);
		return ;
	}
	while (number != 0)
	{
		str[i] = hexa_base [number % 16];
		number = number / 16;
		i++;
	}
	while (i--)
		fputchar(str[i], len);
}

void	fpointer(size_t pointer, int *len)
{
	char	str[25];
	int		i;
	char	*hexa_base;

	hexa_base = "0123456789abcdef";
	i = 0;
	if (pointer == 0)
	{
		*len += write(1, "(nil)", 5);
		return ;
	}
	else
		*len += write(1, "0x", 2);
	while (pointer != 0)
	{
		str[i] = hexa_base[pointer % 16];
		pointer = pointer / 16;
		i++;
	}
	while (i)
	{
		i--;
		fputchar(str[i], len);
	}
}
