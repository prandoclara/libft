/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 17:52:54 by claprand          #+#    #+#             */
/*   Updated: 2024/03/24 18:07:12 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	else
		return (0);
}

/*
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	int a;
	int b;
	int c;
	int d;
	int f;

	a = '1';
	b = 'Z';
	c = 'a';
	d = '$';
	f = 128;
	printf("%d\n", ft_isascii(a));
	printf("%d\n", ft_isascii(b));
	printf("%d\n", ft_isascii(c));
	printf("%d\n", ft_isascii(d));
	printf("%d\n", ft_isascii(f));
	printf("\n");
	printf("%d\n", isascii(a));
	printf("%d\n", isascii(b));
	printf("%d\n", isascii(c));
	printf("%d\n", isascii(d));
	printf("%d\n", isascii(f));
	return (0);
}
*/