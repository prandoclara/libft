/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 12:29:31 by claprand          #+#    #+#             */
/*   Updated: 2024/03/26 12:46:44 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	if (dst > src)
	{
		i = len - 1;
		while (i >= 0)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i++;
		}
	}
	return (dst);
}

/*
#include <stdio.h>
int main()
{
	char s[] = "hello";
	char x[] = "bonjour";
	size_t	len;

	len = 7;
	printf("%s\n", (char *)ft_memmove(s, x, len));
	printf("\n");
	printf("%s\n", (char *)memmove(s, x, len));
	return (0);
}
*/