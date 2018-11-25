/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jackson <jbeall@student.42.us.org>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 14:41:43 by jackson           #+#    #+#             */
/*   Updated: 2018/11/24 20:44:13 by jackson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SASTANTUA_H
# define SASTANTUA_H
# include <unistd.h>

void	sastantua(int size);
int		door_sizer(int size);
int		calc_width(int nb);
void	line_printer_door(int w_total, int w, int handle_flag, int door_size);
void	line_printer(int w_total, int w);
void	ft_putchar(char c);
int		ft_atoi(char *str);

#endif