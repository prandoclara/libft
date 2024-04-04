/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 10:47:33 by claprand          #+#    #+#             */
/*   Updated: 2024/03/27 11:11:54 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s2;
	size_t	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	s2 = malloc(ft_strlen((char *)s) * sizeof(char) + 1);
	if (!s2)
		return (NULL);
	while (s[i])
	{
		s2[i] = (*f)(i, s[i]);
		i++;
	}
	return (s2);
}

/*
#include <stdio.h>
int main(void)
{
	char s[] = "hello";
	char x[] = ft_strmapi(s, &ft_isalpha);

	printf("%s\n", s);
	printf("%s\n", x);
	free(x);
	return (0);
}
*/