/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crramire <crramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 15:11:14 by crramire          #+#    #+#             */
/*   Updated: 2023/02/28 14:18:15 by crramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdio.h>
#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    ft_memset(s, 0, n)
}

int main() 
{ 
    char strft[50];
    strcpy(strft,"Esta es string.h library function");
    puts(strft);
    ft_bzero(strft,3);
    puts(strft);
    return(0);
}