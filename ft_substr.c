/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 16:20:00 by claprand          #+#    #+#             */
/*   Updated: 2024/04/08 15:47:00 by claprand         ###   ########.fr       */
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
	char	*new_str;
	size_t	i;
	size_t	j;

	if (!s)
		return (0);
	new_str = (char *)ft_calloc(len + 1, sizeof(char));
	if (!new_str)
		return (NULL);
	i = start;
	j = 0;
	while (i < (size_t)ft_strlen((char *)s) && j < len)
		new_str[j++] = s[i++];
	new_str[j] = '\0';
	return (new_str);
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