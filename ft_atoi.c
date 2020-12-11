/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidrissi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 22:21:09 by aidrissi          #+#    #+#             */
/*   Updated: 2019/10/31 15:40:06 by aidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_signe(const char *s)
{
	int sig;

	sig = 1;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sig = -1;
	}
	return (sig);
}

int			ft_atoi(const char *s)
{
	int				signe;
	long long int	result;
	long long int	val;

	result = 0;
	val = 0;
	while ((*s == ' ' || *s == '\t' || *s == '\r' || *s == '\v'
				|| *s == '\f' || *s == '\n') && *s)
		s++;
	signe = ft_signe(s);
	if (*s == '-' || *s == '+')
		s++;
	while (*s != '\0' && *s >= '0' && *s <= '9')
	{
		val = result;
		result = (result * 10) + ((*s - '0') * (signe));
		if (signe == 1 && result < val)
			return (-1);
		if (signe == -1 && result > val)
			return (0);
		s++;
	}
	return (result);
}
