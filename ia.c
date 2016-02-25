#include "allum1.h"

/* Renvoi la ligne possédant le plus d'allumettes */
int	find_line_big(int *game, t_opt *options)
{
  int	i;
  int	big;
  int	line;

  i = 0;
  line = 0;
  big = 0;
  while (i < options->nbline)
    {
      if (game[i] > big)
	{
	  line = i;
	  big = game[i];
	}
      i = i + 1;
    }
  return (line);
}

/* Compte le nombre de lignes possédant plus d'une allumette */
int	count_line_big(int *game, t_opt *options)
{
  int	i;
  int	nb;

  i = 0;
  nb = 0;
  while (i < options->nbline)
    {
      if (game[i] > 1)
	nb = nb + 1;
      i = i + 1;
    }
  return (nb);
}

void	comp_calc(int *game, t_opt *options)
{
  int	tmp;

  tmp = 0;
  if (count_line_big(game, options) == 1)
    {    
      tmp = count_line_one(game, options);
      if (tmp % 2 == 0)
	game[find_line_big(game, options)] = 1;
      else
	game[find_line_big(game, options)] = 0;
    }
  else if 
}
