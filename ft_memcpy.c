/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 12:01:33 by claprand          #+#    #+#             */
/*   Updated: 2024/03/26 12:47:44 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		*(char *)(dst + i) = *(char *)(src + i);
		i++;
	}
	return (dst);
}

/*
#include <stdio.h>
int main(void)
{
	char s[] = "hello";
	char x[] = "bonjour";
	size_t n; 

	n = 5;
	printf("%s\n", (char *)ft_memcpy(s, x, n));
	printf("\n");
	printf("%s\n", (char *)memcpy(s, x, n));
	return (0);
}
*/