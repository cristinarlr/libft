/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crramire <crramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 15:18:38 by crramire          #+#    #+#             */
/*   Updated: 2023/04/11 09:37:07 by crramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function `ft_memcpy` copies `n` bytes from `src` to `dst`.
 * 
 * @param dst A pointer to the destination memory block where the copied data will be stored.
 * @param src The source pointer to the memory location from where the data will be copied.
 * @param n The parameter "n" in the function "ft_memcpy" represents the number of bytes to be copied
 * from the source memory area to the destination memory area.
 * 
 * @return a pointer to the destination (dst) memory block.
 */
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *restrict) src;
	ptr2 = (unsigned char *restrict) dst;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (n == 0)
		return (dst);
	while (n--)
		*ptr2++ = *ptr1++;
	return (dst);
}

/*
int	main()
{
    //función original
    char source [] = "pipa\n";
    char destination []= "gominolas\n";   
    printf("%s", destination);
    memcpy(destination, source, 3);
    printf("%s", destination);
   
	// size src > dest len < dest
    char source1 [] = "caramelos de limon\n";
    char destination1 []= "go\n";   
    printf("%s", destination1);
    memcpy(destination1, source1, 3);
    printf("%s", destination1);
    
	// len > dest
    char source1 [] = "caramelos de limon\n";
    char destination1 []= "go\n";   
    printf("%s", destination1);
    memcpy(destination1, source1, 3);
    printf("%s", destination1);
    
	// len > dest overflow comportamiento indefinido
    char source1 [] = "caramelos de limon\n";
    char destination1 []= "go\n";   
    printf("%s", destination1);
    memcpy(destination1, source1, 3);
    printf("%s", destination1); 
	
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
}*/
