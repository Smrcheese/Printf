/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezequie <sezequie@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 20:21:03 by sezequie          #+#    #+#             */
/*   Updated: 2023/10/16 21:53:08 by sezequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>

void	fnum(int number, int *length);
void	fhexadecimal(unsigned int x, int *length, char x_or_x);
void	funsigned_int(unsigned int u, int *length);
void	fpointer(size_t pointer, int *length);

void	fputchar(char chr, int *len);
void	fputstr(char *args, int *len);

int		ft_printf(const char *string, ...);

#endif
