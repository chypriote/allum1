#include <stdio.h>
#include <stdlib.h>
#include "allum1.h"
#include "get_next_line.h"

int	ask_start()
{
  int	start;

  start = 0;
  while (42)
    {
      my_putstr("Do you want to start the game(1)");
      my_putstr(" or change options(2) ? ");
      start = my_atoi(get_next_line(0));
      if (start == 1 || start == 2)
	return (start);
    }
}

void	credits(t_opt *options)
{
  int	cred;

  cred = 0;
  while (42)
    {
      my_putstr("Play again? Yes(1) No(2) ");
      cred = my_atoi(get_next_line(0));
      if (cred == 1)
	{
	  cred = ask_start();
	  if (cred == 1)
	    game(options);
	  else if (cred == 2)
	    {
	      set_options(options);
	      game(options);
	    }
	}
      else if (cred == 2)
	{
	  my_putstr("Thanks gor playing !\n");
	  exit(0);
	}
    }
}

void	main()
{
  int		choice;
  t_opt		options;

  my_putstr("\nAllum1 started !\n\n");
  options.launches = 0;
  default_opt(&options);
  choice = ask_start();
  if (choice == 1)
    game(&options);
  else if (choice == 2)
    {
      set_options(&options);
      game(&options);
    }
}
