/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 16:20:00 by claprand          #+#    #+#             */
/*   Updated: 2024/03/27 09:00:24 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

	printf("%s\n", ft_substr(s, 4, 20));
	return (0);
}
*/