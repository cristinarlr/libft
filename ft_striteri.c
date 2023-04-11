/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crramire <crramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 09:23:12 by Cristina          #+#    #+#             */
/*   Updated: 2023/04/11 11:15:36 by crramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	ft_transform(unsigned int i, char *s)
{
	(void)i;
	s[i] = 'x';
}*/

/**
 * The function `ft_striteri` applies a given function to each character of a string, along with its
 * index.
 * 
 * @param s A pointer to a string (array of characters) that the function will iterate through.
 * @param f The parameter `f` is a pointer to a function that takes two arguments: an unsigned integer
 * `i` and a pointer to a character `char*`. The function pointed to by `f` is applied to each
 * character in the string `s`, along with its corresponding index `i`.
 * 
 * @return nothing (void). It only has a return statement that is used to exit the function early if
 * either the `s` or `f` parameter is NULL.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*
int	main()
{
	char str[] = "Hello World!";
    printf("str antes: %s\n", str);
	ft_striteri(str, ft_transform);
    printf("str después: %s\n", str);
	return (0);
}*/
