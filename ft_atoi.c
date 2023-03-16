/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crramire <crramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:45:33 by crramire          #+#    #+#             */
/*   Updated: 2023/03/16 14:21:02 by crramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* It converts a string to an integer. */

int ft_atoi(const char *str)
{
	char	*ptr;
    int resultado;

    resultado = *ptr - 78;
    return (resultado);
}


int	 main ()
{
	char	*str;

	str = "3";
	printf ("%d\n", atoi(str));
	printf ("%d\n", ft_atoi(str));
	return (0);
}
