/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 12:49:09 by claprand          #+#    #+#             */
/*   Updated: 2024/04/04 15:04:26 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	DESCRIPTION :
	The function ft_strchr finds the first occurence of character c in
	string str.

	RETURN VALUE :
	A pointer to the first occurence of c in str.
	NULL if c is not found.
*/

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if ((char)s[i] == '\0')
		return ((char *)&s[i]);
	while ((char)s[i])
	{
		if ((char)s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
int main(void)
{
	char s[] = "hello";
	int c;

	c = 'l';
	printf("%s\n", ft_strchr(s, c));
	printf("%s\n", ft_strchr(s, 's'));
	printf("\n");
	printf("%s\n", strchr(s, c));
	printf("%s\n", strchr(s, 's'));
	return (0);
}
*/