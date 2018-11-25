/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jackson <jbeall@student.42.us.org>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 14:20:09 by jackson           #+#    #+#             */
/*   Updated: 2018/11/24 20:49:48 by jackson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sastantua.h>

int main(int argc, char **argv)
{
if (argc != 2 || !ft_atoi(argv[1]))
		return (0);
	int n = ft_atoi(argv[1]);
	sastantua(n);
	return (0);
}
