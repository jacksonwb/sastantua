/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jackson <jbeall@student.42.us.org>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 09:38:50 by jbeall            #+#    #+#             */
/*   Updated: 2018/11/24 20:49:43 by jackson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sastantua.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
