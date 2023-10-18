/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezequie <sezequie@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 20:19:01 by sezequie          #+#    #+#             */
/*   Updated: 2023/10/16 21:51:34 by sezequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	print_check(char s, va_list *args, int *len, int *i)
{
	if (s == 's')
		fputstr(va_arg(*args, char *), len);
	else if (s == 'd' || s == 'i')
		fnum(va_arg(*args, int), len);
	else if (s == 'u')
		funsigned_int(va_arg(*args, unsigned int), len);
	else if (s == 'x')
		fhexadecimal(va_arg(*args, unsigned int), len, 'x');
	else if (s == 'X')
		fhexadecimal(va_arg(*args, unsigned int), len, 'X');
	else if (s == 'p')
		fpointer(va_arg(*args, size_t), len);
	else if (s == 'c')
		fputchar(va_arg(*args, int), len);
	else if (s == '%')
		fputchar('%', len);
	else
		(*i)--;
}

int	ft_printf(const char *string, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, string);
	while (string[i] != '\0')
	{
		if (string[i] == '%')
		{
			i++;
			print_check(string[i], &args, &len, &i);
			i++;
		}
		else
		{
			fputchar((char)string[i], &len);
			i++;
		}
	}
	va_end(args);
	return (len);
}
