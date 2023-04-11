/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crramire <crramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 14:21:36 by Cristina          #+#    #+#             */
/*   Updated: 2023/04/11 10:12:15 by crramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function `ft_substr` returns a substring of a given string starting from a specified index and
 * with a specified length.
 * 
 * @param s The input string from which the substring will be extracted.
 * @param start The starting index from where the substring should be extracted from the input string.
 * @param len The parameter `len` is the maximum length of the substring to be extracted from the input
 * string `s`. If the length of `s` is less than `len`, then the entire string starting from the
 * `start` index will be extracted. If `len` is greater than the remaining length
 * 
 * @return The function `ft_substr` is returning a pointer to a newly allocated substring of the input
 * string `s`. The substring starts at the index `start` and has a length of `len`. If `s` is null, the
 * function returns null. If `start` is greater than the length of `s`, the function returns a pointer
 * to an empty string. If `len` is greater
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*subs;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (s == 0)
		return (0);
	if (start > s_len)
		return (ft_strdup(""));
	if (len > (s_len - start))
			len = s_len - start;
	subs = malloc(sizeof(char) * (len + 1));
	if (subs == 0)
		return (0);
	i = 0;
	while (s[start] != '\0' && len > 0)
	{
		subs[i++] = s[start++];
		len--;
	}
	subs[i] = '\0';
	return (subs);
}

/* int main ()
{
	char *s;

	s = "hola pollito de seta";
	printf("subs: %s\n", ft_substr(s, 5, 7));
	printf("subs: %s\n", ft_substr(s, 50, 7));
	printf("subs: %s\n", ft_substr(s, 10, 50));
	printf("subs: %s\n", ft_substr(s, 5, 0));
		return (0);
} */
