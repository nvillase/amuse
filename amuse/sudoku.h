#ifndef SUDOKU_H
# define SUDOKU_H

# include "./include/libft/libft.h"
# include "./include/mlx/mlx.h"
# include "./include/mlx/mlx_int.h"

typedef struct	s_data
{
	int		info_img;
	void	*mlx_ptr;
	void	*win_ptr;
	void	*img;
}				t_data;

#endif
