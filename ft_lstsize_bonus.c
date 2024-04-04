/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claprand <claprand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 17:02:54 by claprand          #+#    #+#             */
/*   Updated: 2024/04/03 14:41:02 by claprand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}

/*
#include <stdio.h>
int main(void)
{
	char *s = "hello";
	t_list *lst;
	lst = ft_lstnew((char *)s);
	ft_lstadd_front(&lst, ft_lstnew("Salut"));
	ft_lstadd_front(&lst, ft_lstnew("Bjr"));
	printf("%d", ft_lstsize(lst));
	t_list	*temp;

	return (0);
}
*/