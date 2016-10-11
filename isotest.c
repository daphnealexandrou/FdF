/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isotest.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalexand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/11 11:46:53 by dalexand          #+#    #+#             */
/*   Updated: 2016/10/11 12:03:02 by dalexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include <stdio.h>

int		main()
{
	void	*mlx;
	void	win;
	int		x;
	int		y;
	int		x_screen;
	int		y_screen;

	mlx = mlx_init();
	win = mlx_new_window(mlx, 400, 400, "mlx bis");
	y = 50;
	x_screen = 0.71 *(x - y)
}
