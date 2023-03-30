/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cristina <Cristina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 14:35:34 by crramire          #+#    #+#             */
/*   Updated: 2023/03/31 00:51:01 by Cristina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_freearray(char **array)
{
	size_t	raw;

	raw = 0;
	while (array[raw])
	{
		free(array[raw]);
		raw++;
	}
	free(array);
	return (0);
}

static int	ft_countwords(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{	
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			count++;
			i++;
		}
		else
			i++;
	}
	return (count);
}

static char	*ft_alocateword(int j, char *word, char **array)
{
	word = (char *)ft_calloc(j + 1, sizeof(char));
	if (!word)
		ft_freearray(array);
	return (word);
}

static char	**ft_addwords(char const *s, char c, int y, char **array)
{
	int		i;
	int		j;
	int		raw;
	char	*word;

	i = 0;
	j = 0;
	raw = 0;
	while (i < (int)(ft_strlen(s) + 1))
	{
		if (s[i] != c && s[i] != '\0')
			j++;
		else
		{
			while (raw < y && j > 0)
			{
				word = ft_alocateword(j, word, array);
				ft_strlcpy(word, &s[i - j], j + 1);
				array[raw++] = word;
				j = 0;
			}
		}
		i++;
	}
	return (array);
}

char	**ft_split(char const *s, char c)
{
	size_t	y;
	char	**array;

	if (!s)
		return (0);
	y = ft_countwords(s, c) + 1;
	array = (char **)ft_calloc(y, sizeof(char *));
	if (!array)
		return (0);
	ft_addwords(s, c, y, array);
	if (!array)
	{
		ft_freearray(array);
		return (0);
	}
	return (array);
}

/* int main()
{
    const char *s;
    char       c;
    char       **array;
    int        x;

    s = "..i.cant...believe..this..split.fantasy..";
    c = '.';
    array = ft_split(s, c);
    x= 0;
    while(array[x])
    {
        printf("%s\n", array[x]);
        x++;
    }
    return(0);
} */
