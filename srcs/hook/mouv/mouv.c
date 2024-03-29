/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouv.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 14:45:36 by amonier           #+#    #+#             */
/*   Updated: 2023/12/12 02:11:38 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3D.h"

void	keycode_122(t_vars *vars)
{
	if (verification_point_dir(vars, (vars->infos)->body_player, \
		((vars->infos)->body_player)->front_ray))
	{
		applied_move_on_body((vars->infos)->body_player, \
			((vars->infos)->body_player)->front_ray);
		change_sprite(vars, vars->infos->sprite);
		clear_image(vars->img);
		raycast_two(vars, vars->infos);
		mlx_put_image_to_window(vars->mlx, vars->win, (vars->img)->img, 0, 0);
	}
}

void	keycode_115(t_vars *vars)
{
	if (verification_point_dir(vars, (vars->infos)->body_player, \
		((vars->infos)->body_player)->back_ray))
	{
		applied_move_on_body((vars->infos)->body_player, \
			((vars->infos)->body_player)->back_ray);
		change_sprite(vars, vars->infos->sprite);
		clear_image(vars->img);
		raycast_two(vars, vars->infos);
		mlx_put_image_to_window(vars->mlx, vars->win, (vars->img)->img, 0, 0);
	}
}

void	keycode_113(t_vars *vars)
{
	if (verification_point_dir(vars, \
		(vars->infos)->body_player, ((vars->infos)->body_player)->left_ray))
	{
		applied_move_on_body((vars->infos)->body_player, \
			((vars->infos)->body_player)->left_ray);
		change_sprite(vars, vars->infos->sprite);
		clear_image(vars->img);
		raycast_two(vars, vars->infos);
		mlx_put_image_to_window(vars->mlx, vars->win, (vars->img)->img, 0, 0);
	}
}

void	keycode_100(t_vars *vars)
{
	if (verification_point_dir(vars, \
		(vars->infos)->body_player, ((vars->infos)->body_player)->right_ray))
	{
		applied_move_on_body((vars->infos)->body_player, \
			((vars->infos)->body_player)->right_ray);
		change_sprite(vars, vars->infos->sprite);
		clear_image(vars->img);
		raycast_two(vars, vars->infos);
		mlx_put_image_to_window(vars->mlx, vars->win, (vars->img)->img, 0, 0);
	}
}

void	mouv(int keycode, t_vars *vars)
{
	if (keycode == 122)
		keycode_122(vars);
	else if (keycode == 115)
		keycode_115(vars);
	else if (keycode == 113)
		keycode_113(vars);
	else if (keycode == 100)
		keycode_100(vars);
}
