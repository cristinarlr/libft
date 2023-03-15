/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crramire <crramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:24:42 by crramire          #+#    #+#             */
/*   Updated: 2023/03/15 16:57:57 by crramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	cc;
	unsigned char	*ptr;

	cc = (unsigned char) c;
	ptr = (unsigned char *) s;
	if (n > 0 && cc == '\0')
		return ((void *) ptr);
	while (n > 0)
	{
		if (*ptr == cc)
			return ((void *) ptr);
		ptr++;
		n--;
	}
	return (0);
}
/*
int	main ()
{	
	const void	*str;
	//char		*funcion;

	//funcion = "ft_memchr";
	str = "hola";
	
	printf("FUNCIÓN ORIGINAL:\n");
	printf("test de funcionamiento normal:\n");
	printf("%s\n", memchr(str,'l', 3));
	printf("test de funcionamiento no encuentra c:\n");
	printf("%s\n", memchr(str,'z', 3));
	printf("test de funcionamiento c está pero n es pequeño para encontrarlo:\n");
	printf("%s\n", memchr(str,'l', 2));
	printf("test de funcionamiento n es cero\n");
	printf("%s\n", memchr(str,'l', 0));
	printf("test de funcionamiento str es cero \n");
	printf("%s\n", memchr(0,'l', 3));
	printf("test de funcionamiento si n > el tamaño de str:\n");
	printf("%s\n", memchr(str,'l', 12));
	
	printf("MI FUNCIÓN:\n");
	printf("test de funcionamiento normal:\n");
	printf("%s\n", ft_memchr(str,'z', 3));
	printf("test de funcionamiento no encuentra c:\n");
	printf("%s\n", ft_memchr(str,'z', 3));
	printf("test de funcionamiento c está pero n es pequeño para encontrarlo:\n");
	printf("%s\n", ft_memchr(str,'l', 2));
	printf("test de funcionamiento n es cero\n");
	printf("%s\n", ft_memchr(str,'l', 0));
	printf("test de funcionamiento str es cero \n");
	printf("%s\n", ft_memchr(0,'l', 3));
	printf("test de funcionamiento si n > el tamaño de str:\n");
	printf("%s\n", ft_memchr(0,'z',12));

	return (0);
	
}*/
