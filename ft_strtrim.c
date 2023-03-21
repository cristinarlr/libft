/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crramire <crramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:57:22 by crramire          #+#    #+#             */
/*   Updated: 2023/03/21 15:11:18 by crramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	strlen;
	
	i = 0;
	j = 0;
	strlen = ft_strlen(s1);
	if (*s1 == 0)
		return (0);
	while (*s1 != '\0' || strlen > 0)
	{
		printf("dentro de bucle 1");
		while (*set != '\0')
		{
			printf("dentro de subbucle 1.1");
			if (s1[i] != set[j])
				j++;
			if (s1[i] == set[j])
				i++;
			j = 0;
            set++;
  		}
		j = 0;
		while (*set != '\0')
		{
			printf("dentro de subbucle 1.2");
			if (s1[strlen-1] != set[j])
				j++;
			if (s1[strlen-1] == set[j])
				strlen--;
			j = 0;
		}
		return (ft_substr(s1, i, (strlen - i)));
	}
	return (0);
}

int main()
{
	char	*s;
	char	*set;

	s = "aaatortillaaal";
	set = "la";
	printf("trim: %s", ft_strtrim(s,set));
	return (0);
}
