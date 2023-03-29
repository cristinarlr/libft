/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_new.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crramire <crramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 09:08:04 by crramire          #+#    #+#             */
/*   Updated: 2023/03/29 12:50:54 by crramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_countwords(char const *s, char c)
{
    size_t  i;
    size_t  count;
    size_t  len;

    i = 0;
    count = 0;
    len = ft_strlen(s);
    while(s[i] != '\0')
    {
        if((s[i + 1] == c || s[i + 1] == '\0') && (s[i] != c))
            count++;
        i++;
    }
    return(count);
}

static char *ft_extractword(char const *s, char c)
{
    size_t  i;
    size_t  count;
    size_t  len;
    char    *word;

    i = 0;
    while(s[i] == c)
        i++;
    len = 0;
    count = i;
    while(s[count] != '\0' && s[count] != c)
    {
        count++;
        len++;
    }
    //la función reserva espacio para cada word
    //word = ft_substr(s, i, len + 2);
    word = (char *)malloc(len + 1);
    if (word == 0)
        return (0);
    ft_strlcpy(word,(char *)&s[i], len + 1);
    return(word);
}

static  void *ft_addwordtoarray(char **d, char const *s, char c, size_t y)
{
    size_t i;
    size_t raw;
    char *word;

    i = 0;
    raw = 0;
    while(s[i] != '\0' && (raw < (y-1)))
    {
        //si la casilla actual es == c y la siguiente no es ni NULL ni c || o si estamos en s[0] y no es ni NULL ni c
        if((s[i] == c && s[i + 1] != '\0' 
            && s[i + 1] != c)
            || (i == 0 && s[i] != '\0' && s[i] != c))
        {
            // por qué necesita poner el address delante de s
            word = ft_extractword(&s[i], c);
            if (word == NULL)
                return (NULL);
            d[raw] = word;
            if (d[raw] == NULL)
                return (NULL);
            raw++;       
        }
        i++;
    }
    return(d);
}

static size_t ft_freearray(char **array)
{
    size_t  i;
    
    i = 0;
    if (array == NULL)
        return (0);
    while (array[i] != 0)
    {
        free(array[i]);
        i++;
    }
    free(array[i]);
    free(array);
    return (0);
}

char **ft_split(char const *s, char c)
{
    char    **array;
    size_t  y;
//reserva del primer array
    y = ft_countwords(s,c) + 1;
    array = (char **)malloc(y * sizeof(char*));
    if(array == NULL)
        return(NULL);
    if(ft_addwordtoarray(array, s, c, y) == 0)
    {
        ft_freearray(array);
        return(0);
    }
    array[y] = 0;
    return (array);
}

int	main ()
{
	char *s;
	int c;
    char **arr;

	s = "hola.tortilla.de.patatas";
	c = '.';
    arr = ft_split(s, c);
    int x = 0;
    while (arr[x])
    {
        printf("%s\n", arr[x]);
        x++;
    }
	return (0);
}