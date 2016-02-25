#include "allum1.h"

/* Compte le nombre de lignes sur lesquelles il reste des allumettes */
int	line_left(int *game, t_opt *options)
{
  int	i;
  int	n;

  i = 0;
  n = options->nblines;
  while (i < options->nblines)
    {
      if (game[i] == 0)
	n = n - 1;
      i = i + 1;
    }
  return (n);
}

void	start_playing(int *game, t_opt *options)
{
  int	remain;

  remain = line_left(game, options);
  if (options->turn == 1)
    while (remain != 0)
      {
	player(game, options);
	remain = line_left(game, options);
	if (remain != 0)
	  computer(game, options);
	remain = line_left(game, options);
	if (remain != 0)
	  aff_game(game, options);
      }
  else
    while (remain != 0)
      {
	computer(game, options);
	remain = line_left(game, options);
	if (remain != 0)
	  player(game, options);
	remain = line_left(game, options);
	if (remain != 0)
	  aff_game(game, options);
      }
}

int	*create_game(t_opt *options)
{
  int	i;
  int	*game;

  if (options->launches != 0)
    xfree(game);
  game = xmalloc(options->nblines);
  i = 0;
  while (i < options->nblines)
    {
      game[i] = (i * 2) + 1;
      i = i + 1;
    }
  options->launches = 1;
  return (game);
}

void	game(t_opt *options)
{
  int	*game;

  game = xmalloc(options->nblines);
  game = create_game(options);
  aff_game(game, options);
  start_playing(game, options);
  credits(options);
}
