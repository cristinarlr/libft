/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crramire <crramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 19:05:43 by Cristina          #+#    #+#             */
/*   Updated: 2023/04/11 11:14:23 by crramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* char	ft_transform(unsigned int i, char c)
{
    if (i % 2 == 0)
        return (c);
    else
        return (c + 1);
} */

/**
 * The function `ft_strmapi` applies a function to each character of a string and returns a new string
 * with the modified characters.
 * 
 * @param s A pointer to a null-terminated string that we want to apply the function f to.
 * @param f The parameter `f` is a pointer to a function that takes an unsigned integer and a character
 * as arguments and returns a character. This function will be applied to each character in the string
 * `s` to create a new string.
 * 
 * @return The function `ft_strmapi` returns a new string that is the result of applying the function
 * `f` to each character of the input string `s`. The new string is allocated with `ft_calloc` and
 * contains the same length as the input string `s`. If either `s` or `f` is NULL, the function returns
 * NULL.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*s2;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (0);
	s2 = (char *)ft_calloc((ft_strlen(s) + 1), sizeof(char));
	if (!s2)
		return (0);
	while (s[i] != '\0')
	{
	s2[i] = (*f)(i, s[i]);
	i++;
	}
	return (s2);
}

/* int main()
{
    char *original = "Hola mundo";
    char *transformed = ft_strmapi(original, ft_transform);

    printf("Original: %s\n", original);
    printf("Transformed: %s\n", transformed);

    free(transformed);
    return (0);
} */
