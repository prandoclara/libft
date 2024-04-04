/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 17:41:48 by claprand          #+#    #+#             */
/*   Updated: 2024/04/03 12:15:23 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_nb(long n)
{
	int	len;

	len = 0;
	while (n < 0)
	{
		n = -n;
		len++;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	*nb_to_str(long nb, char *s, size_t i)
{
	s = malloc(sizeof(char) * i + 1);
	if (!s)
		return (0);
	s[i--] = '\0';
	if (nb < 0)
	{
		s[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		s[i--] = (nb % 10) + '0';
		nb /= 10;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*s;
	long	nb;
	int		i;

	nb = n;
	i = len_nb(nb);
	s = 0;
	s = nb_to_str(nb, s, i);
	if (!s)
		return (NULL);
	return (s);
}

/*
#include <stdio.h>
int main(void)
{
	char *result = ft_itoa(1500);
	printf("%s\n", result);
	free(result);
	return (0);
}
*/
