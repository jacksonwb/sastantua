/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jackson <jbeall@student.42.us.org>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 09:53:54 by jbeall            #+#    #+#             */
/*   Updated: 2018/11/24 20:49:46 by jackson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sastantua.h>

int door_sizer(int size)
{
	return (size - 1 + size % 2);
}

int calc_width(int nb)
{
	int seg_lines;
	int i;
	int width;

	width = 7;
	i = 2;
	seg_lines = 4;
	while (i <= nb)
	{
		width += (((i - 2) / 2) + 3) * 2 - 2;
		while (seg_lines >= 1)
		{
			width += 2;
			--seg_lines;
		}
		seg_lines = i + 3;
		++i;
	}
	return (width);
}

void line_printer(int w_total, int w)
{
	int i;

	i = 1;
	while (i <= (w_total - w) / 2 + w)
	{
		if (i <= ((w_total / 2) - (w / 2)))
		{
			ft_putchar(' ');	
		}
		else if (i == ((w_total - w) / 2) + 1)
		{
			ft_putchar('/');
		}
		else if (i == (w_total - w) / 2 + w)
		{
			ft_putchar('\\');
		}
		else
		{
			ft_putchar('*');
		}
		++i;
	}
	ft_putchar('\n');
}

void line_printer_door(int w_total, int w, int handle_flag, int door_size)
{
	int i;

	i = 1;
	while (i <= (w_total - w) / 2 + w)
	{
		if (i <= ((w_total / 2) - (w / 2)))
			ft_putchar(' ');	
		else if (i == ((w_total - w) / 2) + 1)
			ft_putchar('/');
		else if (i == (w_total - w) / 2 + w)
			ft_putchar('\\');
		else if (handle_flag && i == w / 2 + door_size - 1)
			ft_putchar('$');
		else if (i > w_total / 2 + 1 - door_size/2 - 1 && i < w_total/2 + door_size/2 + 2)
			ft_putchar('|');
		else
			ft_putchar('*');
		++i;
	}
	ft_putchar('\n');
}

void	sastantua(int size)
{
	int line;
	int segment;
	int w_total;
	int door_size;

	door_size = door_sizer(size);
	w_total = calc_width(size);
	line = 1;
	segment = 1;
	while (segment <= size)
	{
		while (line <= segment + 2)
		{
			if (segment == size && line > 3 - segment % 2)
			{
				if (line == segment + 2 - door_size / 2 && size > 4)
					line_printer_door(w_total, (calc_width(segment) - 2 * (segment + 2 - line)), 1, door_size);
				else
					line_printer_door(w_total, (calc_width(segment) - 2 * (segment + 2 - line)), 0, door_size);
			}
			else
				line_printer(w_total, (calc_width(segment) - 2 * (segment + 2 - line)));
			++line;
		}
		line = 1;
		++segment;
	}
}
