#include "allum1.h"
#include "get_next_line.h"

int	allum(int *game, int cline, t_opt *options)
{
  int	nballum;
  int	remain;

  nballum = 0;
  remain = line_left(game, options);
  while (42)
    {
      my_putstr("How many matches ? ");
      nballum = my_atoi(get_next_line(0));
      if ((nballum > 0) && (nballum <= game[cline]))
	{
	  game[cline] = game[cline] - nballum;
	  return (0);
	}
      else
	my_putstr("Wrong number of matches.\n");
    }
}

int	chose_line(int *game, t_opt *options)
{
  int	line;

  line = 0;
  while (42)
    {
      my_putstr("\nChoose a line to remove matches: ");
      line = my_atoi(get_next_line(0));
      if (line < 1 || line > options->nblines)
	my_putstr("This line doesn't exist !");
      else if (game[line - 1] == 0)
	my_putstr("No matches to remove on this line !");
      else
	return (line - 1);
    }
}

void	player(int *game, t_opt *options)
{
  int	cline;

  cline = chose_line(game, options);
  allum(game, cline, options);
  if (line_left(game, options) == 0)
      my_putstr("\nYou Lose !\n");
}
