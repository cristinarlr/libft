/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crramire <crramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 09:44:25 by crramire          #+#    #+#             */
/*   Updated: 2023/03/02 12:27:18 by crramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string.h>
#include <stdio.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *ptr1;
	unsigned char *ptr2;
	
	ptr1 = (unsigned char *) src;
	ptr2 = (unsigned char *) dst;
	
	// ver seg. si son nulos alguna de las strings.
	if (!dst && !src)
		return (NULL);
	// si 
	if (len == 0 || ptr1 == ptr2)
	// si len es mayor que el array de dest
	if (len > ptr2)
	
	if (size_ptr1 <= size_ptr2)
		while(len --)
			*ptr1++ = *ptr2++;
		return (dst);
	return (0);
}


int main () 
{
   char dest[] = "oldstring";
   const char src[]  = "newlineas";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   memmove(dest, src, 9);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   return(0);
}

/* int	main()
{ 
	char source[] = "pipa\n";
	char destination[] = "gominolas\n";

	printf("%s", destination);
	ft_memmove(destination, source, 3)
		
	return (0);
} */