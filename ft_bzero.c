/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crramire <crramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 15:11:14 by crramire          #+#    #+#             */
/*   Updated: 2023/04/11 09:35:32 by crramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/* VERSION PRETTY
void ft_bzero(void *s, size_t n)
{
    ft_memset(s, 0, n);
} */

/**
 * The function `ft_bzero` sets a block of memory to zero.
 * 
 * @param s A pointer to the memory area to be zeroed.
 * @param len len is a variable of type size_t, which represents the length of the memory block pointed
 * to by the pointer s. The function ft_bzero sets the first len bytes of the memory block to zero.
 */
void	ft_bzero(void *s, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *) s;
	while (len--)
	{
		*ptr = 0;
		ptr++;
	}
}

/* int	main()
{
	char s[] = "Prueba de bzero para la libft.h!";
    printf("%s\n", s);
	ft_bzero(s, 3);
	printf("%s\n", s);
	return (0);
} */
/*
int	main()
{
	char mem[] = "hola";

	memset(mem, 'e', 5);
    ft_bzero(mem, 5);
    write(1, mem, 5);
	return (0);
}*/