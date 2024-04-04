/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:39:43 by claprand          #+#    #+#             */
/*   Updated: 2024/03/26 12:47:28 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		*(unsigned char *)(b + i) = (char)c;
		i++;
	}
	return (b);
}

/*
#include <stdio.h>
int main(void)
{
	char s[] = "hello";
	int c;

	c = 'a';
	printf("%s\n", (char *)ft_memset(s, c, 2));
	printf("%s\n", (char *)memset(s, c, 2));
	return (0);
}
*/