/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Printf_tester.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezequie <sezequie@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 20:29:47 by sezequie          #+#    #+#             */
/*   Updated: 2023/10/18 13:40:57 by sezequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./src/ft_printf.h"
#include <stdio.h>

int main()
{
	char c;
	char *str;
	int d;
	int di;
	unsigned int u;
	void *ptr;

	c = 'a';
	str = "Hello World!";
	d = -42;
	di = 42;
	u = 4294967295;
	ptr = &d;
	printf("Testing ft_printf:\n");
	ft_printf("Character: %c\n", c);
	ft_printf("String: %s\n", str);
	ft_printf("Decimal: %d\n", di);
	ft_printf("Integer: %i\n", d);
	ft_printf("Unsigned: %u\n", u);
	ft_printf("Hex (lowercase): %x\n", u);
	ft_printf("Hex (uppercase): %X\n", u);
	ft_printf("Pointer: %p\n", ptr);
	ft_printf("Percent: %%\n");
	printf("\nTesting printf (original):\n");
	printf("Character: %c\n", c);
	printf("String: %s\n", str);
	printf("Decimal: %d\n", d);
	printf("Integer: %i\n", d);
	printf("Unsigned: %u\n", u);
	printf("Hex (lowercase): %x\n", u);
	printf("Hex (uppercase): %X\n", u);
	printf("Pointer: %p\n", ptr);
	printf("Percent: %%\n");
	return (0);
}