/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cristina <Cristina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:29:11 by crramire          #+#    #+#             */
/*   Updated: 2023/03/18 01:15:53 by Cristina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function ft_memset() takes a pointer to a memory location,
 * a value, and a number of bytes to
 * fill, and fills the memory with the value
 * 
 * @param b This is the pointer to the memory area to be filled.
 * @param c The character to fill the memory with.
 * @param len The number of bytes to be set to the value c.
 * 
 * @return The address of the first byte of the memory area b.
 */
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *) b;
	while (len--)
	{
		*ptr = (unsigned char) c;
		ptr++;
	}
	return (b);
}

/* int main () 
{ 
    char strft[50];
    strcpy(strft,"Esta es mi función ft_memset para libft.h");
    puts(strft);
    ft_memset(strft,'$',3);
    puts(strft);
    return(0);
} */
