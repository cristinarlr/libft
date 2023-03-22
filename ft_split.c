/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crramire <crramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 15:41:18 by crramire          #+#    #+#             */
/*   Updated: 2023/03/22 16:24:46 by crramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_ntimesc(char const *s, char c)
{
	size_t	count;
	
	count = 0;
	while (!s)	
	{
		if (ft_strchr(s, c) != 0)
			count ++;
		else
			return (0);
	}
	printf("count: %zu", count);
	return (count);
}

char *ft_mediumptr()
{
	return (0);
}

char **ft_split(char const *s, char c)
{
	size_t	slen;
	size_t	y;

	slen = ft_strlen(s);
	y = ft_ntimesc(s,c) + 2;

	return ((char *) array);
}

int	main ()
{
	char *s;
	char *c;

	s = "tortila.de.patatas";
	c = ".";
	printf("%s", ft_split(s,'c'));
	return (0);
}
