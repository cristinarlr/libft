/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crramire <crramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 00:16:20 by crramire         #+#    #+#             */
/*   Updated: 2023/02/25 00:16:20 by crramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

/**
 * The function `ft_tolower` converts an uppercase letter to its corresponding lowercase letter.
 * 
 * @param c The parameter `c` is an integer representing the ASCII value of a character.
 * 
 * @return If the input character is an uppercase letter, the function returns the corresponding
 * lowercase letter. Otherwise, it returns the input character unchanged.
 */
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	return (c);
}

/* int	main()
{
	int letter = 'A';	

	printf("before %d\n", letter);
	printf("after %d\n", ft_tolower(letter));
	return (0);
} */