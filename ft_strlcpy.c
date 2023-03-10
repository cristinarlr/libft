/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crramire <crramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 09:44:51 by crramire          #+#    #+#             */
/*   Updated: 2023/03/10 15:47:49 by crramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char	*dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	size_dst;
	size_t	size_src;
	
	size_dst = ft_strlen(dst);
	size_src = ft_strlen(src);
	//size_dst > 0 para albergar \0
	if (size_src < size_dst)
		return (size_src);
	i = 0;
	while (src[i] != '\0' && size_src > size_dst)
	{
		dst[i] = src[i];
		i++;
		dstsize--;
	}
	dst[i] = '\0';
	return (size_src);
}

int	main()
{	
	char source[] = "gominolas";
	char destination[] = "pipa";

	printf("origen: %s\n", source);
	printf("origen: %lu\n", sizeof(source));
	printf("destino: %s\n", destination);
	printf("destino: %lu\n", sizeof(destination));
	printf("%lu\n", strlcpy(destination, source, 5));
	printf("destino nuevo: %s\n", destination);
	printf("destino nuevo: %lu\n", sizeof(destination));
	return (0);
}