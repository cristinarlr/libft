/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crramire <crramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 09:42:58 by crramire          #+#    #+#             */
/*   Updated: 2023/03/13 14:09:37 by crramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if ((const char) c == '\0')
		return ((char *) s);
	while (*s != '\0')
	{
		if (*s == (const char) c)
			return ((char *) s);
		s++;
	}
	return (NULL);
}
/*
int main()
{
	char *source = "hola";	
	char *ptr = ft_strchr(source, '\0'); // my_function() devuelve un puntero
  
  	if (ptr == NULL)
		printf("La función devuelve un puntero nulo.\n");
	else
	printf("La función devuelve un puntero válido.\n");
	printf ("Puntero devuelto: %s", ptr);
	
	return (0);
}*/
