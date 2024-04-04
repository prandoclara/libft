/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 13:08:10 by claprand          #+#    #+#             */
/*   Updated: 2024/03/26 14:23:16 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	if ((char)s[i] == '\0')
		return ((char *)&s[i]);
	while (s[i])
		i++;
	while (i >= 0)
	{
		{
			if ((char)s[i] == (char)c)
				return ((char *)&s[i]);
			i--;
		}
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
	printf("%s\n", ft_strrchr(s, c));
	printf("\n");
	printf("%s\n", strrchr(s, c));
	return (0);
}
*/