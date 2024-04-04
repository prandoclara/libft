/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 11:21:08 by claprand          #+#    #+#             */
/*   Updated: 2024/03/27 11:31:52 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcat(char *dst, char *src)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(dst);
	while (src[i])
	{
		dst[len + i] = src[i];
		i++;
	}
	dst[len + i] = '\0';
	return (dst);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	i;
	size_t	j;

	i = ft_strlen((char *)s1);
	j = ft_strlen((char *)s2);
	s = malloc(i + j + 1 * sizeof(char));
	if (!s)
		return (NULL);
	return (s = ft_strcat((char *)s1, (char *)s2));
}

/*
#include <stdio.h>
int main(void)
{
	char s[] = "hello";
	char x[] = "bonjour";

	printf("%s\n", ft_strjoin(s, x));
	return (0);
}*/