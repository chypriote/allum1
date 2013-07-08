/*
** allum1.h for allum1 in /home/temeni_n//allu
** 
** Made by nicolas temenides
** Login   <temeni_n@epitech.net>
** 
** Started on  Sun Jul  7 17:18:53 2013 nicolas temenides
** Last update Sun Jul  7 21:11:02 2013 nicolas temenides
*/

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
