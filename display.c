#include "allum1.h"

void	spaces(int nb, int lines)
{
  int	i;

  nb = nb + 1;
  i = (lines / 2) + 2;
  while (nb <= i)
    {
      my_putchar(32);
      nb = nb + 1;
    }
}

void	aff_allum(int nb, t_opt *options)
{
  int	i;

  i = 0;
  while (i < nb)
    {
      my_putchar(options->allum);
      i = i + 1;
    }
  my_putchar('\n');
}

void	aff_game(int *game, t_opt *options)
{
  int	i;

  i = 0;
  my_putchar('\n');
  while (i < options->nblines)
    {
      my_putchar(i + 49);
      my_putstr(") ");
      spaces(i, options->nblines);
      aff_allum(game[i], options);
      i = i + 1;
    }
}
