/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crramire <crramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 09:45:50 by crramire          #+#    #+#             */
/*   Updated: 2023/02/28 09:45:50 by crramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') 
	|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

// int main (void)
// {
//     ft_isalnum('a');
//     return (0);
// }


/* int	main ()
{
    char i;
	
	i = '0';
    while (i <= '9')
    {
        printf("%d", ft_isalnum(i));
        i++;
    }
	return(0);
} */

