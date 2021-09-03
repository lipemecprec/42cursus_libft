/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <faguilar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 12:21:41 by faguilar          #+#    #+#             */
/*   Updated: 2021/09/02 21:47:52 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	**mapped;
	t_list	*item;

	if (!lst)
		return (NULL);
	mapped = ft_calloc(sizeof(t_list *), 1);
	if (!mapped)
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
