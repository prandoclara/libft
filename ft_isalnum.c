/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 17:41:16 by claprand          #+#    #+#             */
/*   Updated: 2024/03/24 17:46:45 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}

/*
#include <ctype.h>
#include <stdio.h>
int main(void)
{
	int a;
	int b;
	int c;
	int d;
	
	a = '1';
	b = 'e';
	c = '$';
	d = ' ';
	printf("%d\n", ft_isalnum(a));
	printf("%d\n", ft_isalnum(b));
	printf("%d\n", ft_isalnum(c));
	printf("%d\n", ft_isalnum(d));
	printf("\n");
	printf("%d\n", isalnum(a));
	printf("%d\n", isalnum(b));
	printf("%d\n", isalnum(c));
	printf("%d\n", isalnum(d));
	return (0);
}
*/