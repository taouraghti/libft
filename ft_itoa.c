/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidrissi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 16:47:47 by aidrissi          #+#    #+#             */
/*   Updated: 2019/10/31 16:06:52 by aidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_alloc(int n, int c)
{
	char	*t;

	if (n < 0)
	{
		if (!(t = malloc(c + 3)))
			return (NULL);
		t[0] = '-';
		t[c + 2] = '\0';
	}
	else
	{
		if (!(t = malloc(c + 2)))
			return (NULL);
		t[c + 1] = '\0';
	}
	return (t);
}

static char	*ft_tab(char *t, long long int nbr, int c)
{
	if (nbr < 10)
		t[c] = nbr + '0';
	else
	{
		ft_tab(t, nbr / 10, c - 1);
		t[c] = (nbr % 10) + '0';
	}
	return (t);
}

char		*ft_itoa(int n)
{
	long long int	nbr;
	int				range;
	char			*t;
	int				c;

	range = 1;
	c = 0;
	nbr = n;
	if (n < 0)
		nbr = (-1) * nbr;
	while ((nbr / range) >= 10)
	{
		range = range * 10;
		c++;
	}
	if (!(t = ft_alloc(n, c)))
		return (NULL);
	if (n < 0)
		t = ft_tab(t, nbr, c + 1);
	else
		t = ft_tab(t, nbr, c);
	return (t);
}
