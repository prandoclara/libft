/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 15:50:43 by claprand          #+#    #+#             */
/*   Updated: 2024/03/26 16:07:55 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;

	s2 = malloc(ft_strlen((char *)s1) + 1 * sizeof(char));
	if (!s2)
		return (NULL);
	return (ft_memcpy(s2, s1, ft_strlen((char *)s1) + 1));
}

/*
#include <stdio.h>
int main(void)
{
	char s[] = "hello";
	char x[] = "";
	
	printf("%s\n", ft_strdup(s));
	printf("%s\n", ft_strdup(x));
	printf("\n");
	printf("%s\n", strdup(s));
	printf("%s\n", strdup(x));
}
*/