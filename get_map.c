/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wschafer <wschafer@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 15:33:05 by wschafer          #+#    #+#             */
/*   Updated: 2026/05/14 17:14:45 by wschafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	get_map_info(t_map_info *map_info, char *file_name)
{
	map_info = malloc(sizeof(t_map_info));
	if (!map_info)
	{
		free_map_info(map_info);
		error_msg("Malloc failed for map_info struct");
	}
	
}