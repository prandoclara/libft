/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 19:45:57 by claprand          #+#    #+#             */
/*   Updated: 2024/03/24 20:01:24 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && (i < n - 1))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>
int main(void)
{
	char s1[] = "hello";
	char s2[] = "hello";
	char s3[] = "bonjour";
	char s4[] = "";

	printf("%d\n", ft_strncmp(s1, s2, 5));
	printf("%d\n", ft_strncmp(s1, s3, 5));
	printf("%d\n", ft_strncmp(s1, s4, 5));
	printf("\n");
	printf("%d\n", strncmp(s1, s2, 5));
	printf("%d\n", strncmp(s1, s3, 5));
	printf("%d\n", strncmp(s1, s4, 5));
	return (0);
}
*/