/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <faguilar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 17:56:05 by faguilar          #+#    #+#             */
/*   Updated: 2021/08/29 00:59:07 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*curr;
	t_list	*next;

	if (!*lst)
		return ;
	curr = *lst;
	while (curr != NULL)
	{
		next = curr->next;
		(*del)(curr->content);
		free(curr);
		curr = next;
	}
	*lst = NULL;
}
