/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crramire <crramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:58:18 by crramire          #+#    #+#             */
/*   Updated: 2023/04/11 10:14:11 by crramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function `ft_strjoin` concatenates two strings and returns a new string.
 * 
 * @param s1 A pointer to a constant string (char array) that represents the first string to be joined.
 * @param s2 The parameter `s2` is a pointer to a constant character string that will be concatenated
 * to `s1` in the `ft_strjoin` function.
 * 
 * @return The function `ft_strjoin` returns a pointer to a newly allocated string which is the result
 * of concatenating two input strings `s1` and `s2`. If either `s1` or `s2` is NULL, the function
 * returns NULL.
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ccatstr;
	size_t	ccatlen;
	size_t	i;
	size_t	j;

	if (s1 == 0 || s2 == 0)
		return (0);
	ccatlen = (ft_strlen(s1) + ft_strlen(s2));
	ccatstr = malloc(ccatlen + 1);
	if (ccatstr == 0)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		ccatstr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		ccatstr[i++] = s2[j++];
	}
	ccatstr[i] = '\0';
	return (ccatstr);
}

/* int main ()
{
	char	*s1;
	char	*s2;

	s1 = "tortilla";
	s2 = " de patatas";
	printf("ccat: %s\n", ft_strjoin(s1,s2));
    ft_strjoin("abc", "");
	return (0);
}	 */
