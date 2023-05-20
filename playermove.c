/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   playermove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkilic <hkilic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 13:31:53 by hkilic            #+#    #+#             */
/*   Updated: 2022/08/18 13:31:57 by hkilic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"

void	player_w(t_game *solong)
{
	if (solong->map[solong->y_player][solong->x_player] == 'E'
		&& solong->coin == 0)
	{
		mlx_clear_window(solong->mlx, solong->window);
		solong->map[solong->y_player + 1][solong->x_player] = '0';
		solong->moves++;
		printf("Moves: %d\n", solong->moves);
		exit_game(solong);
	}
	else if (solong->map[solong->y_player][solong->x_player] == '1'
		|| solong->map[solong->y_player][solong->x_player] == 'E')
		solong->y_player += 1;
	else
	{
		mlx_clear_window(solong->mlx, solong->window);
		if (solong->map[solong->y_player][solong->x_player] == 'C')
			solong->coin -= 1;
		solong->map[solong->y_player][solong->x_player] = 'P';
		solong->map[solong->y_player + 1][solong->x_player] = '0';
		solong->moves++;
		map_draw(solong);
	}
}

void	player_a(t_game *solong)
{
	if (solong->map[solong->y_player][solong->x_player] == 'E'
		&& solong->coin == 0)
	{
		mlx_clear_window(solong->mlx, solong->window);
		solong->map[solong->y_player][solong->x_player + 1] = '0';
		solong->moves++;
		printf("Moves: %d\n", solong->moves);
		exit_game(solong);
	}
	else if (solong->map[solong->y_player][solong->x_player] == '1'
		|| solong->map[solong->y_player][solong->x_player] == 'E')
		solong->x_player += 1;
	else
	{
		mlx_clear_window(solong->mlx, solong->window);
		if (solong->map[solong->y_player][solong->x_player] == 'C')
			solong->coin -= 1;
		solong->map[solong->y_player][solong->x_player] = 'P';
		solong->map[solong->y_player][solong->x_player + 1] = '0';
		solong->moves++;
		map_draw(solong);
	}
}

void	player_s(t_game *solong)
{
	if (solong->map[solong->y_player][solong->x_player] == 'E'
		&& solong->coin == 0)
	{
		mlx_clear_window(solong->mlx, solong->window);
		solong->map[solong->y_player - 1][solong->x_player] = '0';
		solong->moves++;
		printf("Moves: %d\n", solong->moves);
		exit_game(solong);
	}
	else if (solong->map[solong->y_player][solong->x_player] == '1'
		|| solong->map[solong->y_player][solong->x_player] == 'E')
		solong->y_player -= 1;
	else
	{
		mlx_clear_window(solong->mlx, solong->window);
		if (solong->map[solong->y_player][solong->x_player] == 'C')
			solong->coin -= 1;
		solong->map[solong->y_player][solong->x_player] = 'P';
		solong->map[solong->y_player - 1][solong->x_player] = '0';
		solong->moves++;
		map_draw(solong);
	}
}

void	player_d(t_game *solong)
{
	if (solong->map[solong->y_player][solong->x_player] == 'E'
		&& solong->coin == 0)
	{
		mlx_clear_window(solong->mlx, solong->window);
		solong->map[solong->y_player][solong->x_player -1] = '0';
		solong->moves++;
		printf("Moves: %d\n", solong->moves);
		exit_game(solong);
	}
	else if (solong->map[solong->y_player][solong->x_player] == '1'
		|| solong->map[solong->y_player][solong->x_player] == 'E')
		solong->x_player -= 1;
	else
	{
		mlx_clear_window(solong->mlx, solong->window);
		if (solong->map[solong->y_player][solong->x_player] == 'C')
			solong->coin -= 1;
		solong->map[solong->y_player][solong->x_player] = 'P';
		solong->map[solong->y_player][solong->x_player -1] = '0';
		solong->moves++;
		map_draw(solong);
	}
}
