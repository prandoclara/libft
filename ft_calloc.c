/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 15:43:27 by claprand          #+#    #+#             */
/*   Updated: 2024/04/04 14:56:54 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	DESCRIPTION :
	The function ft_calloc allocates memory for an array of count elements
	of size bytes each and sets the memory to zero.

	RETURN VALUE :
	The pointer to the allocated memory. NULL if the memory allocation fails.
*/

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

/*
int main(void)
{
	char *s;

	s = ft_calloc(10, sizeof(char));
	if (!s)
		return (1);
	return (0);
}
*/
