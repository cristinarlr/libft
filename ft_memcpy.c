/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crramire <crramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 15:18:38 by crramire          #+#    #+#             */
/*   Updated: 2023/03/02 09:52:30 by crramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *restrict) src;
	ptr2 = (unsigned char *restrict) dst;
	while (n--)
		*ptr2++ = *ptr1++;
	return (dst);
}

/* int main()
{
    char source [] = "pipa\n";
    char destination []= "gominolas\n";   
    printf("%s", destination);
    ft_memcpy(destination, source, 3);
    printf("%s", destination);
    return (0);    
    
    // haciendo overlap
    char source1 [] = "gominolas\n";
    char destination1 []= "pipa\n";
    printf("%s", destination1);
    ft_memcpy(destination1, source1, 3);
    printf("%s", destination1);
    return (0);    
} */
