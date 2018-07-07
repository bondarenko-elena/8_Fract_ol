/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olbondar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 18:57:15 by olbondar          #+#    #+#             */
/*   Updated: 2018/07/07 18:57:31 by olbondar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

int	main(int argc, char **argv)
{
	t_map	map;

	if (argc == 2 && ((!ft_strcmp(argv[1], "1")) ||
				(!ft_strcmp(argv[1], "2")) ||
				(!ft_strcmp(argv[1], "3")) ||
				(!ft_strcmp(argv[1], "4"))))
	{
		map.fractal = ft_atoi(argv[1]);
		init_map(&map);
		draw(&map);
		event(&map);
		mlx_loop(map.mlx_init);
	}
	else
		ft_putendl("wrong argument");
	return (0);
}
