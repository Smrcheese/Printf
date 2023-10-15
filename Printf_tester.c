/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Printf_tester.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezequie <sezequie@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 20:29:47 by sezequie          #+#    #+#             */
/*   Updated: 2023/10/15 22:28:49 by sezequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./src/ft_printf.h"
#include <stdio.h>

int main()
{
	// Test cases
	char c = 'A';
	char *str = "Hello, world!";
	int d = 42;
	int di = 42.42;
	unsigned int u = 99;
	void *ptr = (void *)&d;

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
	printf("Pointer: %p\n", ptr); // Pass 'ptr' as an argument
	printf("Percent: %%\n");

	return 0;
}