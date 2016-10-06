/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintestbis.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalexand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/06 16:12:32 by dalexand          #+#    #+#             */
/*   Updated: 2016/10/06 16:25:53 by dalexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include <stdio.h>

int		main()
{
	void		*mlx;
	void		*win;
	int			x;
	int			y;

	mlx = mlx_init();
	win = mlx_new_window(mlx, 400, 400, "mlx bis");
	y = 50;
	x = 50;
	while (y == 50 && x < 150)
	{
		mlx_pixel_put(mlx, win, x, y, 0x00FFFFFF);
		x++;
	}
	x = 50;
	while (x == 50 && y < 150)
	{
		mlx_pixel_put(mlx, win, x, y, 0x00FFFFFF);
		y++;
	}

	mlx_loop(mlx);
}
