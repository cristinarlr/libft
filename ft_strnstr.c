/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cristina <Cristina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 23:57:13 by Cristina          #+#    #+#             */
/*   Updated: 2023/03/16 00:20:34 by Cristina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    // unsigned char *hay;
    // unsigned char *ndl;

    // hay = (unsigned char) haystack;
    // ndl = (unsigned char) needle;
    while (len > 0)
        if (*haystack != *needle)
        {
            haystack++;
            needle++;
        }
        while (*haystack == *needle && )
    return (0);
} */

int main ()
{
    const char *hay;
    const char *needle;
    size_t     n;

    n = 25;
    hay = "soy un";
    needle = "soy un gran pajar de palabras";

    printf("%s\n", strnstr(hay, needle, n));
    return (0);
}