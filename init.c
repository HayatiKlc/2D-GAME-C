/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkilic <hkilic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 13:32:33 by hkilic            #+#    #+#             */
/*   Updated: 2022/08/18 13:32:34 by hkilic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"solong.h"

void	ft_window_size(t_game *solong)
{
	int	i;

	solong->size_x = ft_strlen(solong->map[0]) * 64;
	i = 0;
	while (solong->map[i] != NULL)
		i++;
	solong->size_y = i * 64;
}

void	img_init(t_game *solong)
{
	solong->img_floor = mlx_xpm_file_to_image
		(solong->mlx, "assets/images/floor.xpm", &solong->bos, &solong->bos);
	solong->img_wall = mlx_xpm_file_to_image
		(solong->mlx, "assets/images/wall.xpm", &solong->bos, &solong->bos);
	solong->img_player = mlx_xpm_file_to_image
		(solong->mlx, "assets/images/talha.xpm", &solong->bos, &solong->bos);
	solong->img_coin = mlx_xpm_file_to_image
		(solong->mlx, "assets/images/coin.xpm", &solong->bos, &solong->bos);
	solong->img_exit = mlx_xpm_file_to_image
		(solong->mlx, "assets/images/eyupexit.xpm", &solong->bos, &solong->bos);
}

void	game_init(t_game *solong)
{
	solong->mlx = mlx_init();
	ft_window_size(solong);
	solong->window = mlx_new_window
		(solong->mlx, solong->size_x, solong->size_y, "SOLONG!!!");
	solong->moves = 0;
	img_init(solong);
	map_draw(solong);
}
