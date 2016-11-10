/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalexand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 15:08:40 by dalexand          #+#    #+#             */
/*   Updated: 2016/11/10 15:57:58 by dalexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	draw_line(int x1, int x2, int y1, int y2)
{	
	void	*mlx;
	void	*win;
	int		x;
	
	x = x1;

	mlx = mlx_init();
	win = mlx_new_window(mlx, 400, 400, "mlx");
	while (x <= x2)
	{
		if (x1 <= x2 && (x2 - x1) >= ft_abs_value(y2 - y1))
		{
			mlx_pixel_put(mlx, win, x, y1 + ((y2 - y1) * (x - x1)) / (x2 - x1), 0x00FFFFFF);
		}
	}
	mlx_loop(mlx);
}

int		main(void)
{
	draw_line(50, 150, 50, 150);
	return (0);
}
