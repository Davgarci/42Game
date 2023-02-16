#include <mlx.h>
#include <stdio.h>

#ifndef SL_H
# define SL_H

typedef struct	s_img {
	void	*img;
	void	*img0;
	void	*img1;
	void	*img2;
	int		hola;
	void	*img3;
	void	*img4;
	void	*img5;
	void	*img6;
	void	*img7;
}				t_img;

typedef struct s_frames {
	void	**images;
	char	*file;
	int		frame;
	int		max;
	int		x;
	int		y;
}				t_frames;

typedef struct s_player {
	int	x;
	int	y;
}	t_player;

typedef struct s_mlx {
	void		*mlx;
	void		*win;
	void		*img;
	t_img		img2;
	char		*addr;
	int			bits_per_pixel;
	int			line_length;
	int			endian;
	int			win_w;
	int			win_h;
	t_player	player2a;
	t_player	player2b;
	t_player	player2c;
	t_player	player1a;
	t_player	player1b;
	t_player	player1c;
	t_player	colectible;
	int			active_1;
	int			active_2;
	t_frames	imgs;
}	t_mlx;

typedef struct s_cosas {
	int		equ_1_pts;
	int		equ_2_pts;	
	int		random;
	int		random2;
}	t_cosas;

t_cosas	g_c;

void	put_player_img(t_mlx *mlx);
void	save_img(t_mlx *mlx);
int		ft_input(int keycode, t_mlx *mlx);
void	get_collectible(t_mlx *mlx);
char			*ft_itoa(int nbr);

#endif