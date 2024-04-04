/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 20:52:22 by claprand          #+#    #+#             */
/*   Updated: 2024/03/24 21:36:52 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (src[i] && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
	}
	dst[i] = '\0';
	while (src[i])
		i++;
	return (i);
}

/*
#include <stdio.h>
int main(void)
{
	char s1[] = "hello";
	char s2[] = "world !";
	char s3[] = "";
	
	printf("%lu\n", ft_strlcpy(s1, s2, 6));
	printf("%lu\n", ft_strlcpy(s1, s3, 6));
	printf("%lu\n", ft_strlcpy(s3, s2, 1));
	printf("%lu\n", ft_strlcpy(s1, s2, 2));
	printf("\n");
	printf("%lu\n", strlcpy(s1, s2, 6));
	printf("%lu\n", strlcpy(s1, s3, 6));
	printf("%lu\n", strlcpy(s3, s2, 1));
	printf("%lu\n", strlcpy(s1, s2, 2));
	return (0);
}
*/