/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crramire <crramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 09:44:25 by crramire          #+#    #+#             */
/*   Updated: 2023/03/06 12:26:31 by crramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string.h>
#include <stdio.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *ptr_src;
	unsigned char *ptr_dst;
	
	ptr_src = (unsigned char *) src;
	ptr_dst = (unsigned char *) dst;
	
	// verificar si los punteros son nulos.
	if (!dst && !src)
		return (NULL);
	// si el len es 0 o si el puntero de src y dest apuntan a mismo sitio
	if (len == 0 || ptr_src == ptr_dst)
		return (dst);
	// si src es menor que el array de dest hay que rellenar al revés
	if (ptr_src < ptr_dst)
	{
		while(len--)
			*(ptr_dst + len) = *(ptr_src + len);
	}
	// si src es mayor que el array de dest (si el address de src>dest)
	else
	{
		while(len--)
			*ptr_dst++ = *ptr_src++;
	}
	return (dst);
}

int	main()
{ 
	// test 1: punteros nulos
	char source[] = NULL;
	char destination[] = "gominolas\n";
	printf("%s", destination);
	ft_memmove(destination, source, 3);
	printf("%s", destination);

	// test 2: len==0
	char source[] = "pipa\n";
	char destination[] = "gominolas\n";
	printf("%s", destination);
	ft_memmove(destination, source, 0);
	printf("%s", destination);

	// test 2.1: source = dest
	char source[] = "pipa\n";
	
	printf("%s", source);
	ft_memmove(source, source, 0);
	printf("%s", source);

	// test 3: size_src < size_dst
	char source[] = "pipa\n";
	char destination[] = "gominolas\n";
	printf("%s", destination);
	ft_memmove(destination, source, 3);
	printf("%s", destination);

	// test 4: size_src > size_dst
	char source[] = "gominolas\n";
	char destination[] = "pipa\n";
	printf("%s", destination);
	ft_memmove(destination, source, 3);
	printf("%s", destination);

	// test 5: size_src > size_dst y len = overflow
	char source[] = "gominolas\n";
	char destination[] = "pipa\n";
	printf("%s", destination);
	ft_memmove(destination, source, 20);
	printf("%s", destination);

	return (0);
}


