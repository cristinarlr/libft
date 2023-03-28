/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crramire <crramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 15:41:18 by crramire          #+#    #+#             */
/*   Updated: 2023/03/28 14:12:26 by crramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countwords(char const *s, char c)
{
	size_t	count;
	size_t	i;
	
	i = 0;
	count = 0;
	while (*s != '\0')	
	{
		if (ft_strchr(s, c) != 0)
		{
			count++;
			s++;
		}
		else
			s++;
	}
	printf("count: %zu\n", count);
	return (count);
}

static char *ft_insertwordinarray(char const *s, char c)
{
	size_t 	i;
	size_t	j;
	size_t 	len;
	char	*word;

	i = 0;
	j = 0 + i;
	len = ft_strlen(s);
	while (i < len)
	{
		if (ft_strchr(s, c) == 0)
			i++;
		if (ft_strchr(s, c) == 0)
			return ((char *) s);
	}
	word = ft_substr(s, j, len - i);
	printf("word: %s\n", word);
	return (word);
}

char **ft_split(char const *s, char c)
{
	size_t	slen;
	size_t	y;
	char **array;

	slen = ft_strlen(s);
	y = ft_countwords(s,c) + 2;
	printf("y: %zu\n", y);
	array = (char **)ft_calloc(y, sizeof(char *));
	array = (char **)malloc(y * sizeof(char *));
	array[y] = "\0";
	array [y - 1] = ft_insertwordinarray(s, c);
	return ((char **) array);
}

int	main ()
{
	char *s;
	int c;

	s = "tortilla.de.papas";
	c = '.';
	printf("nº words str + null: %d", ft_countwords(s,'c'));
	return (0);
}
