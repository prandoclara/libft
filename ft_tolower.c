/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 19:42:02 by claprand          #+#    #+#             */
/*   Updated: 2024/03/24 19:44:27 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c += 32;
	}
	return (c);
}

/*
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	int c;

	c = 'A';

	printf("%d\n", ft_tolower(c));
	printf("%d\n", tolower(c));
	return (0);
}
*/