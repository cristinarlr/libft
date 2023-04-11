/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crramire <crramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:24:42 by crramire          #+#    #+#             */
/*   Updated: 2023/04/11 09:56:11 by crramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This function searches for a specific character in a block of memory and returns a pointer to the
 * first occurrence of that character.
 * 
 * @param s A pointer to the memory area to be searched.
 * @param c The integer value of the character to be searched in the memory block.
 * @param n n is a size_t variable representing the number of bytes to search in the memory block
 * pointed to by the pointer s.
 * 
 * @return a pointer to the first occurrence of the character 'c' in the first 'n' bytes of the memory
 * block pointed to by 's'. If the character is not found, it returns a null pointer.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	cc;
	unsigned char	*ptr;

	cc = (unsigned char) c;
	ptr = (unsigned char *) s;
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
	printf("test con '\0' intercalado en el str:\n");
	printf("%s\n", memchr("/|\x12\xff\x09\0\x42\042\0\42|\\",'\0', 12));
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
	printf("test con '\0' intercalado en el str:\n");
	printf("%s\n", ft_memchr("/|\x12\xff\x09\0\x42\042\0\42|\\",'\0', 12));
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
