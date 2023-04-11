/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crramire <crramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 00:03:07 by Cristina          #+#    #+#             */
/*   Updated: 2023/04/11 10:08:55 by crramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function `ft_calloc` allocates memory for an array of elements and initializes the memory to
 * zero.
 * 
 * @param count The number of elements to allocate memory for.
 * @param size The size parameter in the ft_calloc function is the size in bytes of each element to be
 * allocated.
 * 
 * @return The function `ft_calloc` is returning a pointer to a block of memory that has been allocated
 * and initialized to zero. If the allocation fails, it returns a null pointer.
 */
void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == 0)
		return (0);
	ft_bzero (ptr, count * size);
	return (ptr);
}

/* int main()
{
    return (0);
} */
