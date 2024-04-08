/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 11:21:08 by claprand          #+#    #+#             */
/*   Updated: 2024/04/08 14:58:43 by claprand         ###   ########.fr       */
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

static char	*ft_strcat(char *dest, const char *src)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen((char *)dest);
	while (src[i])
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = 0;
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen((char *)s1);
	j = ft_strlen((char *)s2);
	str = malloc((i + j) + 1 * sizeof(char));
	if (!str)
		return (NULL);
	return (str = ft_strcat(ft_memcpy(str, s1, i), s2));
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