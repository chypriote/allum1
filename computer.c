#include "allum1.h"

int	comp_play(int *game, t_opt *options, int i)
{
  while (i < options->nblines)
    {
      if (game[i] != 0 && i >= 2)
	{
	  my_putstr("The computer removed all matches on line ");
	  my_putchar(i + 49);
	  game[i] = 0;
	  return (0);
	}
      if (game[i] > 1)
	{
	  my_putstr("The computer removed ");
	  my_putchar(game[i] + 48);
	  my_putstr(" matches on line ");
	  my_putchar(i + 49);
	  game[i] = 1;
	  return (0);
	}
      i = i + 1;
    }
}

int	computer(int *game, t_opt *options)
{
  int	remain;

  remain = line_left(game);
  if (remain == options->nblines)
    {
      my_putstr("The computer removed 1 match on line 1.");
      game[0] = 0;
    }
  else
    comp_play(game, options, remain);
  if (line_left(game, options) == 0)
    my_putstr("\nYou Win !\n");
  return (0);
}
