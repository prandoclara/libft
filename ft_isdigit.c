/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 16:20:47 by claprand          #+#    #+#             */
/*   Updated: 2024/03/24 16:25:02 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}

/*
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	int c;
	c = '1';

	printf("%d\n", ft_isdigit(c));
	printf("%d\n", isdigit(c));	
	return (0);
}
*/