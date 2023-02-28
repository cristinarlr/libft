/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InP_ft_memset.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crramire <crramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:29:11 by crramire          #+#    #+#             */
/*   Updated: 2023/02/28 14:09:34 by crramire         ###   ########.fr       */
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
    strcpy(strft,"Esta es string.h library function");
    puts(strft);
    ft_memset(strft,'$',3);
    puts(strft);
    return(0);
} */
