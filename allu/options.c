/*
** options.c for allum1 in /home/temeni_n//allu
** 
** Made by nicolas temenides
** Login   <temeni_n@epitech.net>
** 
** Started on  Sun Jul  7 17:04:37 2013 nicolas temenides
** Last update Mon Jul  8 15:16:34 2013 nicolas temenides
*/

#include "allum1.h"
#include "get_next_line.h"

void	get_lines(t_opt *options)
{
  int	set_lines;
  int	end;

  while (end != 0)
    {
      my_putstr("\nHow many lines ? ");
      set_lines = my_atoi(get_next_line(0));
      if (set_lines < 2)
	my_putstr("Not enough lines !");
      else if (set_lines > 10)
	my_putstr("Too many lines !");
      else
	{
	  options->nblines = set_lines;
	  end = 0;
	}
    }
}

void	set_options(t_opt *options)
{
  int	first;
  int	set_turn;

  first = 0;
  set_turn = 0;
  while (first != 1 && first != 2)
    {
      my_putstr("Reset options(1) or config(2) ? ");
      first = my_atoi(get_next_line(0));
    }
  if (first == 1)
    default_opt(&options);
  else
    {
      while (set_turn != 1 && set_turn != 2)
	{
	  my_putstr("\nPlay first(1) or second(2) ? ");
	  set_turn = my_atoi(get_next_line(0));
	}
      options->turn = set_turn;
      get_lines(options);
    }
}

void	default_opt(t_opt *options)
{
  my_putstr("Options set to default :\n");
  options->turn = 1;
  my_putstr("You play first.\n");
  options->nblines = 5;
  my_putstr("Game has 5 lines.\n");
  options->allum = '|';
  my_putstr("Symbol for matches: |\n");
}
