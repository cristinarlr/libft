/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crramire <crramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 09:44:41 by crramire          #+#    #+#             */
/*   Updated: 2023/04/11 09:44:47 by crramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

/**
 * The function `ft_strlcat` concatenates two strings, ensuring that the resulting string is
 * null-terminated and does not exceed a specified size limit.
 * 
 * @param dst The destination string where the concatenated string will be stored.
 * @param src The source string that needs to be concatenated to the destination string.
 * @param dstsize The maximum size of the destination buffer (including the null-terminator).
 * 
 * @return The function `ft_strlcat` returns the total length of the string it creates after
 * concatenating the source string `src` to the destination string `dst`, up to a maximum of `dstsize`
 * characters.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	source_size;
	size_t	dest_size;
	size_t	concat_size;

	source_size = ft_strlen(src);
	dest_size = ft_strlen(dst);
	concat_size = dest_size + source_size;
	if (dstsize <= dest_size)
		return (dstsize + source_size);
	i = 0;
	while (src[i] != '\0' && (dest_size + i) < (dstsize - 1))
	{
		dst[dest_size + i] = src[i];
		i++;
	}
	dst[dest_size + i] = '\0';
	return (concat_size);
}

// int main()
// {
// char destino[] = "Hola";
// char origen[] = " mundo!";
// size_t tamaño = sizeof(destino);
// size_t longitud = strlcat(destino, origen, tamaño);
// printf("Origen len: %lu\n", strlen(origen));
// printf("Destino len: %lu\n", strlen(destino));
// printf("La cadena resultante es: %s\n", destino);
// printf("La longitud de la cadena resultante es: %zu\n", longitud);
// char destino[11] = "Hola"
// char origen[] = " mundo!";
// size_t tamaño = sizeof(destino);
// size_t longitud = ft_strlcat(destino, origen, 20);
// printf("Origen len: %lu\n", strlen(origen));
// printf("Destino len: %lu\n", strlen(destino));
// printf("La cadena resultante es: %s\n", destino);
// printf("La longitud de la cadena resultante es: %zu\n", longitud);
//     printf ("%zu\n", ft_strlcat("pqrs", "abcdefghi", 14));
//     printf ("%zu\n", ft_strlcat("pqrstuvwxyz", "abcd", 1));
//     printf ("%zu\n", ft_strlcat("pqrstuvwxyz", "abcd", 20));
//     printf ("%zu\n", ft_strlcat("pqrs", "abcdefghi", 10));
//     return (0);
// }
