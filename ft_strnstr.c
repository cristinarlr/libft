/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crramire <crramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 23:57:13 by Cristina          #+#    #+#             */
/*   Updated: 2023/04/11 09:58:38 by crramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
 @param haystack the string to search in
@param needle the string to find
@param len the maximum number of characters to search
 */

/**
 * The function searches for a substring within a given string and returns a pointer to the first
 * occurrence of the substring, or NULL if it is not found.
 * 
 * @param haystack A pointer to the string in which to search for the needle.
 * @param needle The substring that we are searching for in the haystack string.
 * @param len The parameter "len" is of type "size_t" and represents the maximum number of characters
 * to search in the "haystack" string.
 * 
 * @return The function `ft_strnstr` returns a pointer to the first occurrence of the substring
 * `needle` in the string `haystack`, where the search is limited to the first `len` characters of
 * `haystack`. If `needle` is not found, the function returns a null pointer.
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*needle == '\0' || (needle == haystack))
		return ((char *) haystack);
	if (ft_strlen(haystack) < ft_strlen(needle))
		return (0);
	if (len == 0 || len < ft_strlen(needle))
		return (0);
	while (i < len)
	{
		while (haystack[i] == needle[j] && (i < len))
		{
			i++;
			j++;
			if (needle[j] == '\0')
				return ((char *) haystack + (i - j));
		}
		i = i - j;
		j = 0;
		i++;
	}
	return (0);
}
/*
int main ()
{
    const char *hay;
    const char *needle;
    size_t     n;

    n = 50;
    hay = "soy un gran pajar de palabras";
    needle = "un";
    printf("%s\n", strnstr(hay, hay, n));
    printf("%s\n", strnstr(hay, needle, n));
    printf("%s\n", ft_strnstr(hay, hay, n));
    printf("%s\n", ft_strnstr(hay, needle, n));
    return (0);
}*/
