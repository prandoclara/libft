/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 15:06:39 by claprand          #+#    #+#             */
/*   Updated: 2024/03/26 15:34:26 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && *(unsigned char *)(s1 + i) != *(unsigned char *)(s2 + i))
	{
		return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
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
	char z[] = "hello";
	char a[] = "\0";

	printf("%d\n", ft_memcmp(s, x, 10));
	printf("%d\n", ft_memcmp(s, z, 10));
	printf("%d\n", ft_memcmp(a, x, 10));
	printf("\n");
	printf("%d\n", memcmp(s, x, 10));
	printf("%d\n", memcmp(s, z, 11));
	printf("%d\n", memcmp(a, x, 10));
	return (0);
}
*/