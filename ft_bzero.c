/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crramire <crramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 15:11:14 by crramire          #+#    #+#             */
/*   Updated: 2023/03/08 12:13:40 by crramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/* VERSION PRETTY
void ft_bzero(void *s, size_t n)
{
    ft_memset(s, 0, n);
} */

void	ft_bzero(void *s, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *) s;
	while (len--)
	{
		*ptr = '0';
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