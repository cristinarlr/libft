/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crramire <crramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 13:16:35 by Cristina          #+#    #+#             */
/*   Updated: 2023/04/11 09:50:34 by crramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function searches for the last occurrence of a character in a string and returns a pointer to
 * it.
 * 
 * @param s The string to search for the character 'c'.
 * @param c c is an integer representing the ASCII value of the character to be searched in the string.
 * 
 * @return The function `ft_strrchr` returns a pointer to the last occurrence of the character `c` in
 * the string `s`. If the character is not found, it returns a null pointer.
 */
char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	unsigned char	ccomp;

	i = ft_strlen (s);
	ccomp = (unsigned char) c;
	while (i > 0 && s[i] != ccomp)
	{
		i--;
	}
	if (s[i] == ccomp)
		return ((char *) s + i);
	return (0);
}
/* int main()
{
	char *source = "hola";	
	char *ptr = ft_strrchr(source, 'l'); // my_function() devuelve un puntero
  
	printf ("Puntero devuelto: %s\n", ptr);

  	if (ptr == NULL)
		printf ("La función devuelve un puntero nulo.\n");
	else
		printf ("La función devuelve un puntero válido.\n");
	printf ("Puntero devuelto: %s\n", ptr);
	printf ("Address puntero devuelto: %p\n", (void *)ptr);
	return (0);
} */