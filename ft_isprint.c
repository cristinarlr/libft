/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crramire <crramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 09:45:15 by crramire          #+#    #+#             */
/*   Updated: 2023/04/11 09:28:43 by crramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>
// #include <stdio.h>

#include "libft.h"

/**
 * The function checks if a given character is printable.
 * 
 * @param c The parameter "c" is an integer representing the ASCII value of a character.
 * 
 * @return The function `ft_isprint` returns 1 if the integer `c` represents a printable character in
 * the ASCII table (i.e. its decimal value is between 32 and 126 inclusive), and 0 otherwise.
 */
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/* int	main(void)
{
	char	c;

	c = 'Q';
	printf("Result printable %c is passed to isprint(): %d", c, ft_isprint(c));
	printf("\n");
	c = '\n';
	printf("Result printable %c is passed to isprint(): %d", c, ft_isprint(c));
	printf("\n");
	c = 'Q';
	printf("Result printable %c is passed to isprint(): %d", c, isprint(c));
	printf("\n");
	c = '\n';
	printf("Result printable %c is passed to isprint(): %d", c, isprint(c));
	return (0);
} */