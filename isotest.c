/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isotest.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalexand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/11 11:46:53 by dalexand          #+#    #+#             */
/*   Updated: 2016/10/13 14:12:31 by dalexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include <stdio.h>

int		main()
{
	void	*mlx;
	void	*win;
	int		x; // mettre x, y et z dans une structure
	int		y;
	int		x_screen;
	int		y_screen;
	int		z;

	mlx = mlx_init();
	win = mlx_new_window(mlx, 2000, 2000, "mlx bis");
	y = 400;
	x = 800;
	z = 400;	
	x_screen = 0.71 * (x - y);
	y_screen = -0.41 * (x + y) + 0.82 * z;
	/*while (y_screen < (-0.41 *(x + 100) + 0.82 * z ))
	{
		mlx_pixel_put(mlx, win, x_screen, y_screen, 0x00FFFFFF);
		y_screen++;
	}
	y_screen = -0.41 * (x + y) + 0.82 * z;*/
	while (x_screen < (0.71 *(500 - y)))
	{
		mlx_pixel_put(mlx, win, x_screen, y_screen, 0x00FFFFFF);
		x_screen++;
	}
	mlx_loop(mlx);
}
