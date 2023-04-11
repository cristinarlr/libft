/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crramire <crramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 09:45:21 by crramire          #+#    #+#             */
/*   Updated: 2023/02/28 09:45:21 by crramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function checks if a given character is a digit.
 * 
 * @param c c is a variable of type int that represents a character. The function checks if the
 * character is a digit between 0 and 9.
 * 
 * @return The function `ft_isdigit` returns an integer value of 1 if the input character `c` is a
 * digit (0-9), and 0 otherwise.
 */
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/* int main (void)
{
    ft_isdigit('5');
    return (0);
}
 */
