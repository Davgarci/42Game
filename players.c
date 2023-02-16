	#include <mlx.h>
	#include "sl.h"

	void new_colectible(t_mlx *mlx)
	{
		mlx->colectible.y = mlx->colectible.y + 225 * g_c.random;
		mlx->colectible.x = mlx->colectible.x + 225 * g_c.random2;
		if (mlx->colectible.x >= 1850 || mlx->colectible.x <= 50 || mlx->colectible.y >= 1000 || mlx->colectible.y <= 50)
		{
					mlx->colectible.y = 1000/mlx->active_1;
					mlx->colectible.x = 1800/mlx->active_2;
		}

		//if ()

	}
	
	void get_collectible(t_mlx *mlx)
	{
		if ((mlx->player1a.x >= mlx->colectible.x - 25 && mlx->player1a.x <= mlx->colectible.x + 25)
			&& (mlx->player1a.y >= mlx->colectible.y - 25 && mlx->player1a.y <= mlx->colectible.y + 25))
		{
			new_colectible(mlx);
			g_c.equ_1_pts += 1;
		}
		if ((mlx->player2a.x >= mlx->colectible.x - 35 && mlx->player2a.x <= mlx->colectible.x + 35)
			&& (mlx->player2a.y >= mlx->colectible.y - 35 && mlx->player2a.y <= mlx->colectible.y + 35))
		{
			new_colectible(mlx);	
			g_c.equ_2_pts += 1;
		}
		
		if ((mlx->player1b.x >= mlx->colectible.x - 25 && mlx->player1b.x <= mlx->colectible.x + 25)
			&& (mlx->player1b.y >= mlx->colectible.y - 25 && mlx->player1b.y <= mlx->colectible.y + 25))
		{
			new_colectible(mlx);
			g_c.equ_1_pts += 1;
		}
		if ((mlx->player2b.x >= mlx->colectible.x - 35 && mlx->player2b.x <= mlx->colectible.x + 35)
			&& (mlx->player2b.y >= mlx->colectible.y - 35 && mlx->player2b.y <= mlx->colectible.y + 35))
		{
			new_colectible(mlx);
			g_c.equ_2_pts += 1;
		}

		if ((mlx->player1c.x >= mlx->colectible.x - 25 && mlx->player1c.x <= mlx->colectible.x + 25)
			&& (mlx->player1c.y >= mlx->colectible.y - 25 && mlx->player1c.y <= mlx->colectible.y + 25))
		{
			new_colectible(mlx);
			g_c.equ_1_pts += 1;
		}
		if ((mlx->player2c.x >= mlx->colectible.x - 35 && mlx->player2c.x <= mlx->colectible.x + 35)
			&& (mlx->player2c.y >= mlx->colectible.y - 35 && mlx->player2c.y <= mlx->colectible.y + 35))
		{
			new_colectible(mlx);
			g_c.equ_2_pts += 1;
		}

	}

	void	save_img(t_mlx *mlx)
	{
		mlx->img2.img = mlx_xpm_file_to_image(mlx, "./foto/00.xpm", &mlx->imgs.x, &mlx->imgs.y);
		mlx->img2.img0 = mlx_xpm_file_to_image(mlx, "./foto/01.xpm", &mlx->imgs.x, &mlx->imgs.y);
		mlx->img2.img7 = mlx_xpm_file_to_image(mlx, "./collectibles/01_libft.xpm", &mlx->imgs.x, &mlx->imgs.y);
		mlx->img2.img1 = mlx_xpm_file_to_image(mlx, "./foto/02.xpm", &mlx->imgs.x, &mlx->imgs.y);
		mlx->img2.img2 = mlx_xpm_file_to_image(mlx, "./foto/03.xpm", &mlx->imgs.x, &mlx->imgs.y);
		mlx->img2.img3 = mlx_xpm_file_to_image(mlx, "./foto/04.xpm", &mlx->imgs.x, &mlx->imgs.y);
		mlx->img2.img4 = mlx_xpm_file_to_image(mlx, "./foto/05.xpm", &mlx->imgs.x, &mlx->imgs.y);
		mlx->img2.img5 = mlx_xpm_file_to_image(mlx, "./foto/06.xpm", &mlx->imgs.x, &mlx->imgs.y);
		mlx->img2.img6 = mlx_xpm_file_to_image(mlx, "./foto/07.xpm", &mlx->imgs.x, &mlx->imgs.y);
	}
	
	
	void	put_player_img(t_mlx *mlx)
	{
		printf("%d\n", mlx->player1a.y);
		mlx_put_image_to_window(mlx->mlx, mlx->win, mlx->img2.img, 0, 0);
		mlx_put_image_to_window(mlx->mlx, mlx->win, mlx->img2.img0,  900, 450);
		
		mlx_put_image_to_window(mlx->mlx, mlx->win, mlx->img2.img7, mlx->colectible.x, mlx->colectible.y);
		
		mlx_put_image_to_window(mlx->mlx, mlx->win, mlx->img2.img1, mlx->player1a.x, mlx->player1a.y);
		mlx_put_image_to_window(mlx->mlx, mlx->win, mlx->img2.img2, mlx->player1b.x, mlx->player1b.y);
		mlx_put_image_to_window(mlx->mlx, mlx->win, mlx->img2.img3, mlx->player1c.x, mlx->player1c.y);
		mlx_put_image_to_window(mlx->mlx, mlx->win, mlx->img2.img4, mlx->player2a.x, mlx->player2a.y);
		mlx_put_image_to_window(mlx->mlx, mlx->win, mlx->img2.img5, mlx->player2b.x, mlx->player2b.y);
		mlx_put_image_to_window(mlx->mlx, mlx->win, mlx->img2.img6, mlx->player2c.x, mlx->player2c.y);
		

		get_collectible(mlx);
		mlx_string_put(mlx->mlx, mlx->win, 100, 50, 000000, "Equipo Galáctico:");
		mlx_string_put(mlx->mlx, mlx->win, 300, 50, 000000, ft_itoa(g_c.equ_1_pts));
		mlx_string_put(mlx->mlx, mlx->win, 100, 70, 000000, "Equipo  Sideral:");
		mlx_string_put(mlx->mlx, mlx->win, 300, 70, 000000, ft_itoa(g_c.equ_2_pts));
	}
