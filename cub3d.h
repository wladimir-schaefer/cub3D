#ifndef CUB3D_H
#define CUB3D_H

# include "libft/libft.h"
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>


typedef struct s_map_info
{
	int		lines_count;
	char	**lines;
	char	*no;
	char	*so;
	char	*we;
	char	*ea;
	int		floor_color;
	int		ceiling_color;
	char	**map;
	int		map_height;
	int		map_width;
}	t_map_info;

int main(int argc, char **argv);


//file_validation.c
int		validate_input_file(int argc, char **argv);

//get_map.c
void	get_map_info(t_map_info *map_info, char *file_name);


//utils.c
int		error_msg(char *msg);
void	free_map_info(t_map_info *map_info);
void	free_map(char **map);

#endif