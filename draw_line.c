/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalexand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 13:09:15 by dalexand          #+#    #+#             */
/*   Updated: 2016/12/12 14:08:04 by dalexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>

void	ligne(int x1, int y1, int x2, int yf)
{
	int		x;
	int		y;
	double	a;
	double 	b;

	a = (double)((y2 - y1) / (x2 - x1);
	b = y1 - (a * x1);
	x = x1;
	while (x <= x2)
	{	
		y = (int)((a * x) + b);
		pixel_put(x;y);
		x++;
	}
}
