/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidrissi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 19:24:08 by aidrissi          #+#    #+#             */
/*   Updated: 2019/10/31 16:42:59 by aidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*ts;

	temp = NULL;
	if (lst == NULL)
		return (NULL);
	ts = ft_lstnew(f(lst->content));
	if (lst->next)
		temp = lst->next;
	while (temp != NULL)
	{
		ft_lstadd_back(&ts, ft_lstnew((void *)f(temp->content)));
		temp = temp->next;
	}
	ft_lstclear(&lst, del);
	return (ts);
}
