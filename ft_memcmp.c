/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crramire <crramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 23:19:34 by Cristina          #+#    #+#             */
/*   Updated: 2023/04/11 09:57:24 by crramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function compares two memory areas and returns the difference between the first differing byte.
 * 
 * @param s1 A pointer to the first memory location to be compared.
 * @param s2 The parameter `s2` is a pointer to the first element of the second array (or block of
 * memory) to be compared in the `ft_memcmp` function.
 * @param n The parameter "n" in the function "ft_memcmp" represents the number of bytes to be compared
 * between the two memory areas pointed to by "s1" and "s2".
 * 
 * @return If the function successfully compares the first n bytes of the memory areas pointed to by s1
 * and s2, it returns an integer less than, equal to, or greater than zero, depending on whether the
 * first differing byte is less than, equal to, or greater than zero. If the function reaches the end
 * of the memory areas without finding a difference, it returns zero.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	while (n > 0)
	{
		if (*str1 != *str2)
			return ((*str1 - *str2));
		str1++;
		str2++;
		n--;
	}
	return (0);
}
/* int main ()
{
    const void *str1;
    const void *str2;
    size_t     n;

    n = 6;
    str1 = "hola.\200mundo";
    str2 = "hola.\0ispajo";
    printf("str1: %s\n", (char *) str1);
    printf("str2: %s\n", (char *) str2);
    printf("%d", ft_memcmp(str1, str2, n));
    return (0);
} */
