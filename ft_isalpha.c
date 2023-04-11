/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crramire <crramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 09:45:42 by crramire          #+#    #+#             */
/*   Updated: 2023/04/11 09:20:34 by crramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function checks if a given character is an alphabetic letter.
 * 
 * @param c The parameter "c" is of type integer and represents the ASCII value of a character. The
 * function checks if the character is an alphabetic character (a-z or A-Z) and returns 1 if it is, and
 * 0 if it is not.
 * 
 * @return The function `ft_isalpha` returns an integer value of 1 if the input character `c` is an
 * alphabetic character (either uppercase or lowercase), and 0 otherwise.
 */
int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
// int main ()
// {
//     ft_isalpha('a');
//     return (0);
// }
