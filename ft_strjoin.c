/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 11:21:08 by claprand          #+#    #+#             */
/*   Updated: 2024/04/08 14:12:55 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	DESCRIPTION :
	The function ft_strjoin concatenates the given strings s1 and s2
	and allocates sufficient memory for the newly created string.

	RETURN VALUE :
	A pointer to the new concatenated string.
	NULL if the memory allocation fails.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	int		i;
	size_t	len;

	len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	s = malloc(len + 1 * sizeof(char));
	if (!s)
		return (NULL);
	if (!s1 && !s2)
		return (NULL);
	len = 0;
	while (s1[len])
	{
		s[len] = s1[len];
		len++;
	}
	i = 0;
	while (s2[i])
	{
		s[len + i] = s2[i];
		i++;
	}
	return (s);
}

/*
#include <stdio.h>
int main(void)
{
	char s[] = "hello";
	char x[] = "bonjour";
	char s1[] = "lorem ipsum";
	char s2[] = "dolor sit amet";
	char s3[] = "\0";
	char s4[] = "\0";

	printf("%s\n", ft_strjoin(s, x));
	printf("%s\n", ft_strjoin(s1, s2));
	printf("%s\n", ft_strjoin(s3, s2));
	printf("%s\n", ft_strjoin(s1, s3));
	printf("%s\n", ft_strjoin(s4, s3));
	return (0);
}
*/