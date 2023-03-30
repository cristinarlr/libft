/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cristina <Cristina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 10:37:25 by Cristina          #+#    #+#             */
/*   Updated: 2023/03/30 12:24:30 by Cristina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Write the string s to the file descriptor fd
 * 
 * @param s The string to be printed.
 * @param fd file descriptor
 * 
 * @return nothing.
 */
void	ft_putstr_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	while (*s != '\0')
	{
		write (fd, s, 1);
		s++;
	}
}
