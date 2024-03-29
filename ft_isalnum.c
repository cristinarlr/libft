/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crramire <crramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 09:45:50 by crramire          #+#    #+#             */
/*   Updated: 2023/03/08 12:16:27 by crramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/**
 * The function checks if a given character is alphanumeric or not.
 * 
 * @param c c is a variable of type int that represents a character in ASCII code.
 * 
 * @return The function `ft_isalnum` returns 1 if the input character `c` is an alphanumeric character
 * (i.e. a letter or a digit), and 0 otherwise.
 */
int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

/* int	main ()
{
    char i;
	
	i = '0';
    while (i <= '9')
    {
        printf("%d", ft_isalnum(i));
        i++;
    }
	return(0);
} */
