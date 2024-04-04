/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 20:10:07 by claprand          #+#    #+#             */
/*   Updated: 2024/03/24 20:40:19 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (haystack[i] == '\0')
		return (0);
	if (needle[0] == '\0')
		return ((char *)haystack);
	j = 0;
	while (haystack[i])
	{
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)&haystack[i]);
			j++;
		}
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
int main(void)
{
	char s1[] = "hello bonjour comment ca va?";
	char s2[] = "jour";
	char s3[] = "";
	char s4[] = "4";

	printf("%s\n", ft_strnstr(s1, s2, 20));
	printf("%s\n", ft_strnstr(s1, s3, 20));
	printf("%s\n", ft_strnstr(s1, s4, 20));
	printf("%s\n", ft_strnstr(s3, s2, 20));
	printf("%s\n", ft_strnstr(s1, s2, 10));
	printf("\n");
	printf("%s\n", strnstr(s1, s2, 20));
	printf("%s\n", strnstr(s1, s3, 20));
	printf("%s\n", strnstr(s1, s4, 20));
	printf("%s\n", strnstr(s3, s2, 20));
	printf("%s\n", strnstr(s1, s2, 10));
	return (0);
}
*/