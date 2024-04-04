/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 11:13:06 by claprand          #+#    #+#             */
/*   Updated: 2024/04/03 14:39:30 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (0);
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*
#include <stdio.h>
void print_char_with_index(unsigned int index, char *c)
{
    printf("Character at index %u: %c\n", index, *c);
}


int main()
{
    char str[] = "Hello, world!";

    // Appel de ft_striteri avec la fonction de rappel print_char_with_index
    ft_striteri(str, &print_char_with_index);

    return 0;
}
*/