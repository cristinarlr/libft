/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crramire <crramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:57:22 by crramire          #+#    #+#             */
/*   Updated: 2023/04/11 10:16:49 by crramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function returns the number of characters to be trimmed from the beginning of a string based on
 * a set of characters to be removed.
 * 
 * @param s1 The parameter `s1` is a pointer to a constant character string that we want to trim.
 * @param set The `set` parameter is a string containing a set of characters that are considered to be
 * "trim" characters. These characters will be removed from the beginning and end of another string
 * (passed as `s1`) in a later function.
 * 
 * @return The function `ft_start` is returning an integer value which represents the number of
 * characters in the beginning of the string `s1` that match any character in the string `set`. This
 * value is used to determine the starting point for the trimming operation in the `ft_strtrim`
 * function.
 */
static int	ft_start(char const *s1, char const *set)
{
	size_t	ltrim;

	ltrim = 0;
	while (s1[ltrim] != '\0')
	{
		if (ft_strchr(set, s1[ltrim]) != 0)
			ltrim++;
		else
			break ;
	}
	return (ltrim);
}

static int	ft_end(char const *s1, char const *set)
{
	size_t	rtrim;

	rtrim = ft_strlen(s1);
	while (rtrim > 0)
	{
		if (ft_strchr(set, s1[rtrim]) != 0)
			rtrim--;
		else
			break ;
	}
	return (rtrim);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trimmed;

	if (s1 == 0 || set == 0)
		return (0);
	start = ft_start(s1, set);
	end = ft_end(s1, set) - start + 1;
	trimmed = ft_substr(s1, start, end);
	return ((char *) trimmed);
}

/* int main()
{
	char	s[30000] = "hola";
	char	*set;

	set = "la";
	printf("valor de strlen: %zu\n", ft_strlen(s));
	printf("trim: %s", ft_strtrim(s, set));
	return (0);
} */
