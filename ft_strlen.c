/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crramire <crramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:18:36 by crramire          #+#    #+#             */
/*   Updated: 2023/02/22 14:51:43 by crramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int ft_strlen(const char *s)
{
	int counter;

	counter = 0;
	while (s[counter] != '\0')
		counter++;
	return (counter);
}

// int main()
// {
//     char a[20]="Program";
//     char b[20]={'P','r','o','g','r','a','m','\0'};

//     // using the %zu format specifier to print size_t
//     printf("Length of string a = %zu \n",strlen(a));
//     printf("Length of string b = %zu \n",strlen(b));
//     printf("Length of string a = %d \n",ft_strlen(a));
//     printf("Length of string b = %d \n",ft_strlen(b));

//     return 0;
// }