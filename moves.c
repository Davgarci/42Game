#include <mlx.h>
#include "sl.h"
#include <stdio.h>

int	ft_input(int keycode, t_mlx *mlx)
{
	printf("Kc: %i Rnd1: %i Rnd2: %i\n", keycode, g_c.random, g_c.random2);
	if (keycode%2 == 1)
		g_c.random = -1;
	if (keycode%2 == 0)
		g_c.random = 1;
	if (mlx->colectible.y%2 == 1)
		g_c.random2 = 1;
	if (mlx->colectible.y%2 == 0)
		g_c.random2 = -1;

	if (keycode == 18)
		mlx->active_2 = 1;
	if (keycode == 19)
		mlx->active_2 = 2;
	if (keycode == 20)
		mlx->active_2 = 3;
	if (keycode == 83)
		mlx->active_1 = 1;
	if (keycode == 84)
		mlx->active_1 = 2;
	if (keycode == 85)
		mlx->active_1 = 3;

	if (keycode == 126)
	{
		if (mlx->active_1 == 2)
			mlx->player1a.y = mlx->player1a.y - 25;
		if (mlx->active_1 == 1)
			mlx->player1b.y = mlx->player1b.y - 25;
		if (mlx->active_1 == 3)
			mlx->player1c.y = mlx->player1c.y - 25;
		put_player_img(mlx);
	}
	if (keycode == 125)
	{
			
		if (mlx->active_1 == 2)
			mlx->player1a.y = mlx->player1a.y + 25;
		if (mlx->active_1 == 1)
			mlx->player1b.y = mlx->player1b.y + 25;
		if (mlx->active_1 == 3)
			mlx->player1c.y = mlx->player1c.y + 25;
		put_player_img(mlx);
	}
	if (keycode == 123)
	{
		
		if (mlx->active_1 == 2)
			mlx->player1a.x = mlx->player1a.x - 25;
		if (mlx->active_1 == 1)
			mlx->player1b.x = mlx->player1b.x - 25;
		if (mlx->active_1 == 3)
			mlx->player1c.x = mlx->player1c.x - 25;
		put_player_img(mlx);
	}
	if (keycode == 124)
	{
		
		if (mlx->active_1 == 2)
			mlx->player1a.x = mlx->player1a.x + 25;
		if (mlx->active_1 == 1)
			mlx->player1b.x = mlx->player1b.x + 25;
		if (mlx->active_1 == 3)
			mlx->player1c.x = mlx->player1c.x + 25;
		put_player_img(mlx);
	}
	if (keycode == 13)
	{
		if (mlx->active_2 == 2)
			mlx->player2a.y = mlx->player2a.y - 25;
		if (mlx->active_2 == 1)
			mlx->player2b.y = mlx->player2b.y - 25;
		if (mlx->active_2 == 3)
			mlx->player2c.y = mlx->player2c.y - 25;
		put_player_img(mlx);
	}
	if (keycode == 1)
	{
		if (mlx->active_2 == 2)
			mlx->player2a.y = mlx->player2a.y + 25;
		if (mlx->active_2 == 1)
			mlx->player2b.y = mlx->player2b.y + 25;
		if (mlx->active_2 == 3)
			mlx->player2c.y = mlx->player2c.y + 25;
		put_player_img(mlx);
	}
	if (keycode == 0)
	{
		if (mlx->active_2 == 2)
			mlx->player2a.x = mlx->player2a.x - 25;
		if (mlx->active_2 == 1)
			mlx->player2b.x = mlx->player2b.x - 25;
		if (mlx->active_2 == 3)
			mlx->player2c.x = mlx->player2c.x - 25;
		put_player_img(mlx);
	}
	if (keycode == 2)
	{
		if (mlx->active_2 == 2)
			mlx->player2a.x = mlx->player2a.x + 25;
		if (mlx->active_2 == 1)
			mlx->player2b.x = mlx->player2b.x + 25;
		if (mlx->active_2 == 3)
			mlx->player2c.x = mlx->player2c.x + 25;
		put_player_img(mlx);
	}
	return (0);
}
