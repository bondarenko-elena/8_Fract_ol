#include "fractol.h"

int	main(int argc, char **argv)
{
	t_map map;
	if (argc == 2 && (ft_strcmp(argv[1], "1") == 0 || ft_strcmp(argv[1], "2") == 0 || ft_strcmp(argv[1], "3") == 0 ))
	{
		map.fractal = ft_atoi(argv[1]);
		mlx(&map);
	}
	else
		ft_putendl("wrong argument");

	while (1);
	return (0);
}
