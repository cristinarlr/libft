/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cristina <Cristina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 09:44:51 by crramire          #+#    #+#             */
/*   Updated: 2023/03/08 06:55:10 by Cristina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h> 

//sacar la ft_strlen (size_t) de dst
//size_t <= size_dst
//if size_t > size_src, rellenar con /0 el resto de huecos hasta que size_t = 0


// ojo que dstsize incluye los bytes de src + el byte para el nulo, ej, pipa = 5 (p,i,p,a,\0)

/* size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
	int src_size;
	int	buffer_size;

//size of src to calculate size of dest
	src_size = ft_strlen(src);
	buffer_size = src_size + 1;

	// to avoid overflow buffer_size must be equal or smaller than the # of bytes to copy from src to dest
	if (dstsize > buffer_size)
		return (0);

	//if buffer_size is too small to contain src, it returns the size of src
	if (buffer_size < src_size)
		return (src_size)
	
	//if (buffer_size == src_size)
	while (src)
	{
		copia src en dest 
		return (src_size) devuelve el #caracteres que copió sin contar con null
	}

	//
	if (dstsize > srcsize)

	else	
	//añadir el null character
	return (buffer_size-1);
	
} */

int	main()
{
	char source[] = "pipa";
	char destination[] = "gominolas";

	printf("%s\n", destination);
	printf("%lu\n", strlcpy(destination, source, 5));
	printf("%s\n", destination);
	return (0);
}
