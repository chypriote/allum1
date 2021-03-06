#ifndef ALLUM1_H_
#define ALLUM1_H_

typedef struct	s_opt
{
  int	turn;
  int	nblines;
  int	launches;
  char	allum;
}		t_opt;

int	ask_start();

/*	OPTIONS		*/
void	default_opt();
void	set_optiosn();
void	settings();

/*	GAME		*/
int	*create_game(t_opt *options);
void	game(t_opt *options);

/*	DISPLAY		*/
void	spaces(int nb, int lines);
void	aff_allum(int nb, t_opt *options);
void	aff_game(int *game, t_opt *options);

/*	ATOI		*/
int	my_atoi(char *str);

/*	LIB		*/
void	my_putchar(char c);
void	my_putstr(char *str);
int	my_strlen(char *str);
void	*xmalloc(unsigned int s);
void	xfree(void *p);

#endif
