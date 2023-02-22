/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crramire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:07:50 by crramire          #+#    #+#             */
/*   Updated: 2023/02/22 12:05:26 by crramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <ctype.h>
#include <stdio.h>*/

int	ft_isprint (int c)
{
	if (c >= 40 && c <= 176)
		return (1);
	return (0);
}

/*
int	main (void)
{
	char c;

	c = 'Q';
	printf("Result when a printable %c is passed to isprint(): %d", c, ft_isprint(c));
	printf("\n");
	c = '\n';
	printf("Result when a printable %c is passed to isprint(): %d", c, ft_isprint(c));
	
	printf("\n");
	
	c = 'Q';
	printf("Result when a printable %c is passed to isprint(): %d", c, isprint(c));
	printf("\n");
	c = '\n';
	printf("Result when a printable %c is passed to isprint(): %d", c, isprint(c));
	
	return(0);
}*/
