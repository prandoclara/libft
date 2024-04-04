/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 15:18:52 by claprand          #+#    #+#             */
/*   Updated: 2024/04/03 12:02:58 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *s)
{
	int	i;
	int	sign;
	int	nb;

	i = 0;
	sign = 1;
	nb = 0;
	while (s[i] == '\t' || s[i] == '\v' || s[i] == '\n'
		|| s[i] == '\r' || s[i] == '\f' || s[i] == ' ')
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
		{
			sign = -1;
			i++;
		}
		i++;
	}
	while (s[i] && s[i] >= '0' && s[i] <= '9')
	{
		nb = nb * 10 + (s[i] - '0');
		i++;
	}
	return (nb * sign);
}

/*#include <stdio.h>

int main(void)
{
	char s1[] = "+123";
	char s2[] = "-456";
	char s3[] = "0";
	char s4[] = "";

	printf("%d\n", ft_atoi(s1));
	printf("%d\n", ft_atoi(s2));
	printf("%d\n", ft_atoi(s3));
	printf("%d\n", ft_atoi(s4));
	printf("\n");
	printf("%d\n", atoi(s1));
	printf("%d\n", atoi(s2));
	printf("%d\n", atoi(s3));
	printf("%d\n", atoi(s4));

	return (0);
}
*/