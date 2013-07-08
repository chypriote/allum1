/*
** lib.c for allum1 in /home/temeni_n//allu
** 
** Made by nicolas temenides
** Login   <temeni_n@epitech.net>
** 
** Started on  Sun Jul  7 17:27:21 2013 nicolas temenides
** Last update Sun Jul  7 17:30:46 2013 nicolas temenides
*/

#include <stdlib.h>
#include <unistd.h>
#include "allum1.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i = i + 1;
  return (i);
}

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}

void	*xmalloc(unsigned int s)
{
  void	*p;

  if ((p = malloc(s)) == 0)
    {
      my_putstr("Couldn't allocate memory.\n");
      exit(EXIT_FAILURE);
    }
  return (p);
}

void	xfree(void *p)
{
  if (p)
    free(p);
}
