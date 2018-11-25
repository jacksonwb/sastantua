/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jackson <jbeall@student.42.us.org>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 14:08:32 by jbeall            #+#    #+#             */
/*   Updated: 2018/11/24 20:49:41 by jackson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sastantua.h>

int	ft_atoi(char *str)
{
	int value;
	int sign;

	value = 0;
	sign = 1;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		++str;
	if (*str == '+')
		++str;
	else if (*str == '-')
	{
		sign = -1;
		++str;
	}
	while (*str >= '0' && *str <= '9')
		value = value * 10 + (*str++) - '0';

	return (value * sign);
}
