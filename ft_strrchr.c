/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cristina <Cristina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 13:16:35 by Cristina          #+#    #+#             */
/*   Updated: 2023/03/15 10:32:41 by crramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

/* char	*ft_strrchr(const char *s, int c)
{
	char ccomp;
	size_t i;

	ccomp = (char) c;
	i = ft_strlen(s);
	
	while (i > 0 && s[i] != ccomp)
		i--;
	if (s[i] == ccomp)
		return((char *) s + i);
	return (0);
}
 */
char	*ft_strrchr(const char *s, int c)
{
	char	ccomp;

	ccomp = (char) c;
	while (*s)
		s++;
	while (*s != ccomp)
		s--;
	if (*s == ccomp)
		return ((char *) s);
	return (0);
}

/* int main()
{
	char *source = "hola";	
	char *ptr = ft_strrchr(source, '\0'); // my_function() devuelve un puntero
  
  	if (ptr == NULL)
		printf("La función devuelve un puntero nulo.\n");
	else
		printf("La función devuelve un puntero válido.\n");
		printf ("Puntero devuelto: %s\n", ptr);
		printf ("Address puntero devuelto: %p\n", (void *)ptr);
	return (0);
} */
