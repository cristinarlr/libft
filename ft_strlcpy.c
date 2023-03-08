/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crramire <crramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 09:44:51 by crramire          #+#    #+#             */
/*   Updated: 2023/03/08 13:39:10 by crramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char	*dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_size;

	src_size = ft_strlen(src);
	if (dstsize == 0)
		return (src_size);
	i = 0;
	while (--dstsize > 0 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[dstsize] = '\0';
	return (src_size);
}
/*		
int	main()
{	
	char source[] = "pipa";
	char destination[] = "gominolas";

	printf("%s\n", destination);
	printf("%lu\n", strlcpy(destination, source, 5));
	printf("%s\n", destination);
	return (0);
}*/

int	main()
{
	ft_print_result(ft_strlcpy(dest, "lorem", 15));
    write(1, "\n", 1);
    write(1, dest, 15);
	return (0);
}