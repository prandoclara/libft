/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 16:20:00 by claprand          #+#    #+#             */
/*   Updated: 2024/04/04 16:29:11 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	DESCRIPTION :
	The function ft_substr extracts a substring from the given string by
	allocating sufficient memory for the new string starting at index start
	and ending at len characters.

	RETURN VALUE :
	A pointer to the new string.
	NULL if the memory allocation fails.
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	slen;

	if (!s)
		return (NULL);
	slen = ft_strlen((char *)s);
	if (start > slen)
		start = slen;
	if (len > slen - start)
		len = slen - start;
	s2 = malloc(len + 1 * sizeof(char));
	if (!s2)
		return (NULL);
	return (ft_memmove(s2, (const char *)&s[start], len));
}

/*
#include <stdio.h>
int main(void)
{
	char s[] = "hello";
	char	str[] = "lorem ipsum dolor sit amet";

	printf("%s\n", ft_substr(s, 4, 20));
	printf("%s\n", ft_substr(str, 0, 10));
	printf("%s\n", ft_substr(str, 7, 10));
	printf("%s\n", ft_substr(str, 7, 10));
	printf("%s\n", ft_substr(str, 0, 10));
	return (0);
}
*/