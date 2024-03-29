/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crramire <crramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 09:33:23 by crramire          #+#    #+#             */
/*   Updated: 2023/04/11 09:52:07 by crramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function ft_strncmp() compares the first n i
 * characters of the strings s1 and s2
 *
 * @param s1 The first string to be compared.
 * @param s2 The string to compare to.
 * @param n The maximum number of characters to compare.
 *
 * @return The difference between the first two characters
 * that differ in the strings being compared.
 */

/**
 * The function compares two strings up to a certain length and returns the difference between the
 * first non-matching characters or 0 if the strings are equal.
 * 
 * @param s1 A pointer to the first character of the first string to be compared.
 * @param s2 The parameter `s2` is a pointer to a constant character string that is being compared to
 * `s1` in the `ft_strncmp` function.
 * @param n The parameter `n` is the maximum number of characters to compare between the two strings
 * `s1` and `s2`. The function will stop comparing characters once it has reached the end of either
 * string or when `n` characters have been compared.
 * 
 * @return The function `ft_strncmp` returns an integer value that represents the difference between
 * the first non-matching characters of the two strings `s1` and `s2`. If the two strings are equal,
 * the function returns 0.
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 != '\0' && *s2 != '\0' && n > 0)
	{
		if ((unsigned char) *s1 != (unsigned char) *s2)
			return ((unsigned char) *s1 - (unsigned char) *s2);
		s1++;
		s2++;
		n--;
	}
	if (n > 0 && (*s1 == '\0' || *s2 == '\0'))
		return ((unsigned char) *s1 - (unsigned char) *s2);
	return (0);
}
/*
int	main()
{
	char	*string1;
	char	*string2;
	char	*string3;
	size_t	n;

	n = 6;
	string1 = "";
	string2 = "hola.b";
	string3 = "hol";
	printf("%d\n", strncmp(string1, string2, 0)); 
	printf("%d\n", strncmp(string1, string2, 4));
	printf("%d\n", strncmp(string1, string2, 6));
	printf("%d\n", strncmp(string1, string3, 6));

	printf("%d\n", ft_strncmp(string1, string2, 0)); 
	printf("%d\n", ft_strncmp(string1, string2, 4));
	printf("%d\n", ft_strncmp(string1, string2, 6));
	printf("%d\n\n", ft_strncmp(string1, string3, 6));

	printf("TESTS forzando el code:\n");
	printf("s1: %s\n", string1);
	printf("s2: %s\n", string2);
	printf("n: %lu\n", n);
	if (ft_strncmp(string1, string2, n) > 0)
		printf("s1: %s es mayor que s2: %s\n", string1, string2);
	else if (ft_strncmp(string1, string2, n) < 0)
		printf("s1: %s es menor que s2: %s\n", string1, string2);
	else if (ft_strncmp(string1, string2, n) == 0)
		printf("s1: %s es igual que s2: %s\n", string1, string2);
}*/
