/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 19:33:22 by claprand          #+#    #+#             */
/*   Updated: 2024/03/24 19:41:07 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c -= 32;
	}
	return (c);
}

/*
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	int c;

	c = 'a';

	printf("%d\n", ft_toupper(c));
	printf("%d\n", toupper(c));
	return (0);
}
*/