/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isotest.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalexand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/11 11:46:53 by dalexand          #+#    #+#             */
/*   Updated: 2016/10/12 15:43:37 by dalexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include <stdio.h>

int		main()
{
	void	*mlx;
	void	*win;
	int		x;
	int		y;
	int		x_screen;
	int		y_screen;
	int		z;

	mlx = mlx_init();
	win = mlx_new_window(mlx, 2000, 2000, "mlx bis");
	y = 400;
	x = 500;
	z = 100;
	mlx_pixel_put(mlx, win, x, y, 0x00FFFFFF);
	x_screen = 0.71 * (x - y);
	y_screen = -0.41 * (x + y) + 0.82 * z;
	mlx_pixel_put(mlx, win, x, y, 0x00FFFFFF);
	mlx_loop(mlx);
}
