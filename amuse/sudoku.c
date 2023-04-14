#include "sudoku.h"

int	fermer_esc(int keyboard)
{
	if (keyboard == 65307)
		exit(0);
	return (0);
}

void print_map(t_data *data)
{
	int		i;
	int		j;
	int		a;

	i = 0;
	j = 0;
	data->img = mlx_xpm_file_to_image(data->mlx_ptr, "./assets/linevertical.xpm", &a, &a);
	while (i < 20)
	{
		while (j < 30)
		{
			mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, data->img, j * 32, i * 32);
			j++;
		}
		i++;
		j = 0;
	}

}

int	main(void)
{
	t_data	data;

	data.mlx_ptr = mlx_init();
	data.win_ptr = mlx_new_window(data.mlx_ptr, 960, 640, "letsGOO");
	mlx_hook(data.win_ptr, 2, 1L<<0, &fermer_esc, NULL);
	print_map(&data);
	mlx_loop(data.mlx_ptr);
}

// w haut = 119
// s bas = 115
// a gauche = 97
// d droite = 100
// esc echape = 65307