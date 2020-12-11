/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidrissi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 19:15:49 by aidrissi          #+#    #+#             */
/*   Updated: 2019/10/31 16:47:43 by aidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*src1;
	char	*dst1;
	int		i;

	i = -1;
	if (!dst && !src)
		return (NULL);
	src1 = (char *)src;
	dst1 = (char *)dst;
	if (src1 < dst1)
		while ((int)(--n) >= 0)
			dst1[n] = src1[n];
	else
		while (++i < (int)n)
			dst1[i] = src1[i];
	return (dst);
}
