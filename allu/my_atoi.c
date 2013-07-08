/*
** my_atoi.c for allum1 in /home/temeni_n//allum
** 
** Made by nicolas temenides
** Login   <temeni_n@epitech.net>
** 
** Started on  Sat Jul  6 11:42:35 2013 nicolas temenides
** Last update Mon Jul  8 15:30:43 2013 nicolas temenides
*/

#include "allum1.h"
int	my_atoi(char *str)
{
  int	val;

  val = 0;
  while (*str)
    {
      if (*str >= '0' && *str <= '9')
        {
          val *= 10;
          val += *str - '0';
        }
      else
        return (val);
      str++;
    }
  return (val);
}
