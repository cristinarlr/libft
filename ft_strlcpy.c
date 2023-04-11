/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crramire <crramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 09:44:51 by crramire          #+#    #+#             */
/*   Updated: 2023/04/11 09:41:55 by crramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
} */

/**
 * The function `ft_strlcpy` copies a string from `src` to `dst` with a maximum size of `dstsize` and
 * returns the length of the source string.
 * 
 * @param dst A pointer to the destination string where the copied string will be stored.
 * @param src The source string that we want to copy into the destination string. It is of type `const
 * char *`, which means it is a pointer to a constant character array.
 * @param dstsize The parameter `dstsize` is the size of the destination buffer `dst` that is passed to
 * the function `ft_strlcpy()`. It specifies the maximum number of characters that can be copied from
 * the source string `src` to the destination string `dst`, including the terminating null byte.
 * 
 * @return the size of the source string (excluding the null terminator).
 */
size_t	ft_strlcpy(char	*dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	size_src;

	size_src = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (size_src);
	while (src[i] != '\0' && i < (dstsize - 1))
	{
			dst[i] = src[i];
			i++;
	}
	dst[i] = '\0';
	return (size_src);
}

/* size_t	ft_strlcpy(char	*dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	size_dst;
	size_t	size_src;

	size_src = ft_strlen(src);
	size_dst = ft_strlen(dst);
	i = 0;
	if (dstsize == 0)
		return (size_src);
	while (src[i] != '\0' && i < (dstsize - 1))
	{
			dst[i] = src[i];
			i++;
	}
	dst[i] = '\0';
	return (size_src);
} */
/*
int	main()
{	
	char source[] = ".mundo!";
	char destination[] = "hola";

	printf("origen: %s\n", source);
	printf("origen strlen: %lu\n", ft_strlen(source));
	printf("origen sizeof: %lu\n\n", sizeof(source));
	printf("destino: %s\n", destination);
	printf("destino strlen: %lu\n", ft_strlen(destination));
	printf("destino sizeof: %lu\n\n", sizeof(destination));
	printf("return de srtlcpy: %lu\n\n", ft_strlcpy(destination, source, 12));
	printf("destino nuevo sizeof: %s\n", destination);
	printf("destino nuevo strlen: %lu\n", ft_strlen(destination));
	printf("destino nuevo: %lu\n\n", sizeof(destination));
	printf("destino nuevo [0]: %c\n", destination[0]);
	printf("destino nuevo [1]: %c\n", destination[1]);
	printf("destino nuevo [2]: %c\n", destination[2]);
	printf("destino nuevo [3]: %c\n", destination[3]);
	printf("destino nuevo [4]: %c\n", destination[4]);
	return (0);
}*/
