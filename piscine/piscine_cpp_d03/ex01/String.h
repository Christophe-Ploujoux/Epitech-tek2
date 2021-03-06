/*
** String.h for String in /home/ploujo_c/tek2/piscine/piscine_cpp_d03/ex00
** 
** Made by Christophe Ploujoux
** Login   <ploujo_c@epitech.net>
** 
** Started on  Fri Jan  8 09:36:21 2016 Christophe Ploujoux
** Last update Fri Jan  8 14:37:39 2016 Christophe Ploujoux
*/

#ifndef _STRING_H_
# define _STRING_H_

typedef struct	String
{
  char		*str;

  void	(*assign_s)(struct String *a, struct String const *b);
  void	(*assign_c)(struct String *a, const char *s);
}		String;

void	StringInit(String *this, char const *s);
void	StringDestroy(String *this);

#endif /* !_STRING_H */
