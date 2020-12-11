/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidrissi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 14:34:18 by aidrissi          #+#    #+#             */
/*   Updated: 2019/10/31 15:38:38 by aidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	fct(char *t, char *t1, size_t l, size_t i)
{
	size_t	j;

	if (*t == *t1)
	{
		t++;
		t1++;
		j = i + 1;
		while (*t == *t1 && *t1 != '\0' && j < l)
		{
			j++;
			t++;
			t1++;
		}
		if (*t1 == '\0')
			return (-1);
	}
	return (i);
}

char		*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	char	*temp;
	char	*temp1;
	char	*temp3;
	size_t	j;

	temp3 = (char *)str;
	i = 0;
	j = 0;
	if (*to_find == '\0')
		return (temp3);
	while (*temp3 != '\0' && i < len)
	{
		temp1 = (char *)to_find;
		temp = temp3;
		if (fct(temp, temp1, len, i) == -1)
			return (temp3);
		i++;
		temp3++;
	}
	return (NULL);
}
