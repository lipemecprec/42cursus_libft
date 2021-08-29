/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <faguilar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 12:21:41 by faguilar          #+#    #+#             */
/*   Updated: 2021/08/29 13:40:55 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	**mapped;
	t_list	*item;

	mapped = malloc(sizeof(t_list *));
	if (!lst)
		return (NULL);
	while (lst != NULL)
	{
		item = ft_lstnew(f(lst->content));
		if (!item)
		{
			del(item);
			free(item);
		}
		else
			ft_lstadd_back(mapped, item);
		lst = lst->next;
	}
	return (*mapped);
}
