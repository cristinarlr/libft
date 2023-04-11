/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crramire <crramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 00:18:01 by crramire          #+#    #+#             */
/*   Updated: 2023/04/11 09:46:15 by crramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

/**
 * The function converts a lowercase letter to its corresponding uppercase letter.
 * 
 * @param c The parameter `c` is an integer representing the ASCII value of a character.
 * 
 * @return If the input character is a lowercase letter, the function returns the corresponding
 * uppercase letter. Otherwise, it returns the input character unchanged.
 */
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}
/* int	main()
{
	int letter;
	
	letter = 'b';
	printf("before %d\n", letter);
	printf("after %d",ft_toupper(letter));
	return (0);
} */
