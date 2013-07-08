/*
** my_strcpy.c for My Strcpy in /home/temeni_n//Projets/Jour6
** 
** Made by nicolas temenides
** Login   <temeni_n@epitech.net>
** 
** Started on  Mon Mar 18 10:23:34 2013 nicolas temenides
** Last update Tue Mar 19 11:22:56 2013 nicolas temenides
*/

char	*my_strcpy(char *dest, char *src)
{
  int	a;

  a = 0;
  while (src[a] != '\0')
    {
      dest[a] = src[a];
      a = a + 1;
    }
  dest[a] = '\0';
  return (dest);
}
