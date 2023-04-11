/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crramire <crramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 09:45:30 by crramire          #+#    #+#             */
/*   Updated: 2023/02/28 09:45:30 by crramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function checks if a given integer value represents an ASCII character.
 * 
 * @param c The parameter "c" is an integer representing the ASCII value of a character.
 * 
 * @return The function `ft_isascii` returns 1 if the integer `c` represents an ASCII character (i.e.
 * its value is between 0 and 127, inclusive), and 0 otherwise.
 */
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/* int main (void)
{
    ft_isascii ('a');
    return (0);
} */
