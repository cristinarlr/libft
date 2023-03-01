/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cristina <Cristina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:29:11 by crramire          #+#    #+#             */
/*   Updated: 2023/03/01 09:31:44 by Cristina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
