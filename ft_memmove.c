/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crramire <crramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 09:44:25 by crramire          #+#    #+#             */
/*   Updated: 2023/03/08 12:11:37 by crramire         ###   ########.fr       */
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
	
	// check if pointers are null.
	if (!dst && !src)
		return (NULL);
	// check if len is 0 or if src and dest pointers point to the same place
	if (len == 0 || ptr_src == ptr_dst)
		return (dst);
	// check if src is smaller than the dest array > fill in backwards
	if (ptr_src < ptr_dst)
	{
		while(len--)
			*(ptr_dst + len) = *(ptr_src + len);
	}
	// check if src is greater than the dest array (if src address>dest)
	else
	{
		while(len--)
			*ptr_dst++ = *ptr_src++;
	}
	return (dst);
}

/* int	main()
{ 
	// test 1: null pointers
	char source[] = "";
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
	printf("%s", destination); *
	return (0);
} */


