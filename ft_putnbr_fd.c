/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cristina <Cristina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:13:35 by Cristina          #+#    #+#             */
/*   Updated: 2023/03/27 14:34:15 by Cristina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    char    c;

    c = (unsigned char)n;
    write (fd, &c, 1);
}

/* int main ()
{
    printf("%c", ft_putnbr_fd(4, 1));
    return (0);
} */