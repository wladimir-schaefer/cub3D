/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wschafer <wschafer@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 14:18:09 by wschafer          #+#    #+#             */
/*   Updated: 2026/05/14 17:20:15 by wschafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	error_msg(char *msg)
{
	printf("Error\n%s\n", msg);
	return (1);
}

void	free_map_info(t_map_info *map_info)
{
	int	i;

	if (map_info->lines)
	{
		i = 0;
		while (i < map_info->lines_count)
			free(map_info->lines[i++]);
		free(map_info->lines);
		map_info->lines = NULL;
	}
	if (map_info->no)
		free(map_info->no);
	map_info->no = NULL;
	if (map_info->so)
		free(map_info->so);
	map_info->so = NULL;
	if (map_info->we)
		free(map_info->we);
	map_info->we = NULL;
	if (map_info->ea)
		free(map_info->ea);
	map_info->ea = NULL;
	if (map_info->map)
		free_map(map_info->map);
}

void	free_map(char **map)
{
	int	i;

	if (!map)
		return ;
	i = 0;
	while (map[i])
	{
		free(map[i]);
		i++;
	}
	free(map);
}