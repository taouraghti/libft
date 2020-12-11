/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidrissi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 14:45:16 by aidrissi          #+#    #+#             */
/*   Updated: 2019/10/31 16:42:08 by aidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *tmp;
	t_list *l;

	l = *lst;
	tmp = NULL;
	while (l != NULL)
	{
		tmp = l->next;
		del((l)->content);
		free(l);
		l = tmp;
	}
	*lst = tmp;
}
