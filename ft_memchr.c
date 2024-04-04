/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 14:30:41 by claprand          #+#    #+#             */
/*   Updated: 2024/03/26 14:59:23 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(char *)(s + i) == (unsigned char)c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
int main(void)
{
	char s[] = "hello";
	char x[] = "bonjour";
	char z[] = "";

	int c;
	c = 'l';

	printf("%s\n", (char *)ft_memchr(s, c, 10));
	printf("%s\n", (char *)ft_memchr(x, c, 10));
	printf("%s\n", (char *)ft_memchr(z, c, 10));
	printf("\n");
	printf("%s\n", (char *)memchr(s, c, 10));
	printf("%s\n", (char *)memchr(x, c, 10));
	printf("%s\n", (char *)memchr(z, c, 10));
	return (0);
}
*/