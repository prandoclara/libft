/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 11:41:49 by claprand          #+#    #+#             */
/*   Updated: 2024/03/26 12:00:55 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
#include <stdio.h>
int main(void)
{
	char s[] = "hello";
	char x[] = "hello";
	size_t n; 

	n = 1;
	ft_bzero((char *)s, n);
	bzero((char *)x, n);
	
	printf("%s\n", s);
	printf("%s\n", x);
	return (0);
}
*/
