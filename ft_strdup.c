/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 15:50:43 by claprand          #+#    #+#             */
/*   Updated: 2024/04/04 15:04:38 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	DESCRIPTION :
	The function ft_strdup duplicates the given string s1 by allocating 
	memory and performing a copy of the given string.

	RETURN VALUE :
	A pointer to the new string. NULL if the memory allocation fails.
*/

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