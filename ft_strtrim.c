/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidrissi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 15:09:44 by aidrissi          #+#    #+#             */
/*   Updated: 2019/10/31 15:50:32 by aidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	deb(char const *s1, char const *set)
{
	int		i;
	int		j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] != set[j])
				j++;
			else
				break ;
		}
		if (set[j] == '\0')
			return (i);
		i++;
	}
	return (-1);
}

static int	fin(char const *s1, char const *set)
{
	int		i;
	int		j;

	i = 0;
	while (s1[i])
		i++;
	i--;
	while (i >= 0)
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] != set[j])
				j++;
			else
				break ;
		}
		if (set[j] == '\0')
			return (i);
		i--;
	}
	return (-1);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*t;

	k = 0;
	if (!s1)
		return (NULL);
	i = deb(s1, set);
	j = fin(s1, set);
	if (!(t = malloc(sizeof(char) * (j - i + 2))))
		return (NULL);
	while (i <= j && (i != -1 && j != -1))
	{
		t[k] = s1[i];
		k++;
		i++;
	}
	t[k] = '\0';
	return (t);
}
