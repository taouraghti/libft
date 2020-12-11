/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidrissi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 16:16:32 by aidrissi          #+#    #+#             */
/*   Updated: 2019/10/31 15:01:49 by aidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)src;
	b = (unsigned char *)dst;
	i = 0;
	while (i < n && *a != (unsigned char)c)
	{
		*b = *a;
		a++;
		b++;
		i++;
	}
	if (*a == (unsigned char)c)
	{
		*b = *a;
		b++;
	}
	if (i == n)
		return (NULL);
	return ((void *)b);
}
