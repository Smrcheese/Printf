/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_words.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezequie <sezequie@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 20:23:03 by sezequie          #+#    #+#             */
/*   Updated: 2023/10/16 21:52:32 by sezequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	fputchar(char chr, int *len)
{
	write(1, &chr, 1);
	(*len)++;
}

void	fputstr(char *args, int *len)
{
	size_t	i;

	i = 0;
	if (args == 0)
	{
		write(1, "(null)", 6);
		(*len) += 6;
		return ;
	}
	while (args[i] != '\0')
	{
		fputchar(args[i], len);
		i++;
	}
}
