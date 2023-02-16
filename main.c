#include <mlx.h>
#include "sl.h"
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "libft.h"



void	init_data(t_mlx *mlx)
{
	//rand
	mlx->win_w = 1920;
	mlx->win_h = 1080;
	
	mlx->player1a.x = 750;
	mlx->player1a.y = 50;
	mlx->player2a.x = 1150;
	mlx->player2a.y = 50;

	mlx->player1b.x = 700;
	mlx->player1b.y = 50;
	mlx->player2b.x = 1100;
	mlx->player2b.y = 50;

	mlx->player1c.x = 800;
	mlx->player1c.y = 50;
	mlx->player2c.x = 1200;
	mlx->player2c.y = 50;

	mlx->colectible.y = 850;
	mlx->colectible.x = 950;

	mlx->active_1 = 2;
	mlx->active_2 = 2;

	g_c.equ_1_pts = 0;
	g_c.equ_2_pts = 0;
	g_c.random = 1;
	g_c.random2 = 1;

}

int	main(void)
{
	t_mlx	mlx;

	memset(&mlx, 0, sizeof(t_mlx));
	init_data(&mlx);
	mlx.mlx = mlx_init();
	mlx.win = mlx_new_window(mlx.mlx, mlx.win_w, mlx.win_h, "Hello 42 World!");
	save_img(&mlx);
	put_player_img(&mlx);
	//get_collectible(&mlx);
	mlx_key_hook(mlx.win, ft_input, &mlx);
	mlx_loop(&mlx);
}
