/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crramire <crramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:18:36 by crramire          #+#    #+#             */
/*   Updated: 2023/04/11 09:30:36 by crramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function calculates the length of a string by iterating through it until it reaches the null
 * terminator.
 * 
 * @param s The parameter `s` is a pointer to a constant character (string) that the function
 * `ft_strlen` will calculate the length of.
 * 
 * @return The function `ft_strlen` returns the length of the string `s` passed as argument, excluding
 * the terminating null byte. The return type is `size_t`, which is an unsigned integer type defined in
 * the standard library header `<stddef.h>`.
 */
size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/* int main()
{
    char a[20]="Program";
    char b[20]={'P','r','o','g','r','a','m','\0'};

    // using the %zu format specifier to print size_t
    printf("Length of string a = %zu \n",strlen(a));
    printf("Length of string b = %zu \n",strlen(b));
    printf("Length of string a = %d \n",ft_strlen(a));
    printf("Length of string b = %d \n",ft_strlen(b));

    return 0;
} */