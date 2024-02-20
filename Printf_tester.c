/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Printf_tester.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezequie <sezequie@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 20:29:47 by sezequie          #+#    #+#             */
/*   Updated: 2024/02/20 16:09:15 by sezequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./src/ft_printf.h"
#include <stdio.h>

int main()
{
	char c;
	char *str;
	int d;
	int totalPrinted;
	int di;
	unsigned int u;
	void *ptr;

	c = 'a';
	str = "Hello World!";
	d = -42;
	totalPrinted = 0;
	di = 42;
	u = 4294967295;
	ptr = &d;
	printf("\n\nTesting ft_printf:\n");
	ft_printf("Character: %c\n", c);
	totalPrinted = ft_printf("String: %s\n", str);
	ft_printf("Total characters printed in string: %d\n", totalPrinted);
	ft_printf("Decimal: %d\n", di);
	ft_printf("Integer: %i\n", d);
	ft_printf("Unsigned: %u\n", u);
	ft_printf("Hex (lowercase): %x\n", u);
	ft_printf("Hex (uppercase): %X\n", u);
	ft_printf("Pointer: %p\n", ptr);
	ft_printf("Percent: %%\n");

	totalPrinted = 0;
	
	printf("\n\nTesting printf (original):\n");
	printf("Character: %c\n", c);
	totalPrinted = printf("String: %s\n", str);
	printf("Total characters printed in string: %d\n", totalPrinted);
	printf("Decimal: %d\n", di);
	printf("Integer: %i\n", d);
	printf("Unsigned: %u\n", u);
	printf("Hex (lowercase): %x\n", u);
	printf("Hex (uppercase): %X\n", u);
	printf("Pointer: %p\n", ptr);
	printf("Percent: %%\n");
	return (0);
}