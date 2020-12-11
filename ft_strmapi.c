/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidrissi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 18:26:53 by aidrissi          #+#    #+#             */
/*   Updated: 2019/10/31 16:10:13 by aidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	j;
	char			*t;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	while (s[i] != '\0')
		i++;
	if (!(t = malloc(sizeof(char const) * (i + 1))))
		return (NULL);
	while (j < i)
	{
		t[j] = f(j, s[j]);
		j++;
	}
	t[j] = '\0';
	return (t);
}
