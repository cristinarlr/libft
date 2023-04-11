/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crramire <crramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 09:42:58 by crramire          #+#    #+#             */
/*   Updated: 2023/04/11 09:48:22 by crramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function searches for a specific character in a string and returns a pointer to the first
 * occurrence of that character.
 * 
 * @param s The pointer to the string to be searched for the character 'c'.
 * @param c c is an integer representing the ASCII value of the character to be searched in the string.
 * 
 * @return The function `ft_strchr` returns a pointer to the first occurrence of the character `c` in
 * the string `s`. If the character is not found, it returns a null pointer (`0`).
 */
char	*ft_strchr(const char *s, int c)
{
	char	ccomp;

	ccomp = (char) c;
	while (*s && *s != ccomp)
		s++;
	if (*s == ccomp)
		return ((char *)s);
	return (0);
}

/* int main()
{
	char *source = "h\0la";	
	char *ptr = ft_strchr(source, 'h'); // my_function() devuelve un puntero
  	char *source = "alatortilla";	
	char *ptr = ft_strchr(source, 'l');

  	if (ptr == NULL)
		printf("La función devuelve un puntero nulo.\n");
	else
	printf("La función devuelve un puntero válido.\n");
	printf ("Puntero devuelto: %s\n", ptr);
	printf ("Address puntero devuelto: %p\n", (void *)ptr);
	return (0);
} */
