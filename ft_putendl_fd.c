/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crramire <crramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:04:01 by Cristina          #+#    #+#             */
/*   Updated: 2023/04/11 11:21:26 by crramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function writes a string followed by a newline character to a specified file descriptor.
 * 
 * @param s A pointer to a string (char array) that needs to be printed to the file descriptor.
 * @param fd The parameter "fd" is an integer representing the file descriptor of the file where the
 * string "s" will be written. It is used to specify the output stream where the string will be
 * printed.
 * 
 * @return If the input string `s` is `NULL`, the function returns without doing anything. Otherwise,
 * the function prints the string `s` to the file descriptor `fd`, followed by a newline character.
 */
void	ft_putendl_fd(char *s, int fd)
{
	if (s == 0)
		return ;
	while (*s != '\0')
	{
		write(fd, s, 1);
		s++;
	}
	if (*s == '\0')
		write(fd, "\n", 1);
}
