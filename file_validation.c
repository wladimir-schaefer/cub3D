/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_validation.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wschafer <wschafer@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 16:21:17 by wschafer          #+#    #+#             */
/*   Updated: 2026/05/14 15:20:04 by wschafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

static int	check_extension(char *filename)
{
	int	len;

	len = ft_strlen(filename);
	if (len < 5)
		return (0);
	if (ft_strncmp(&filename[len - 4], ".cub", 5) != 0)
		return (0);
	return (1);
}

int	validate_input_file(int argc, char **argv)
{
	int	fd;

	if (argc != 2)
		return (error_msg("Usage: ./cub3d <map_file>"));
	if (!check_extension(argv[1]))
		return (error_msg("validate_arguments: invalid file extension"));
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		perror("open");
		return (1);
	}
	close(fd);
	return (0);
}
