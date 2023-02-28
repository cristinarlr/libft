/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InP_ft_memmove.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crramire <crramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 09:44:25 by crramire          #+#    #+#             */
/*   Updated: 2023/02/28 09:44:28 by crramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string.h>
#include <stdio.h>

/*
void *memmove(void *dst, const void *src, size_t len)
{


}*/

int	main()
{
	char dst[] = "hola que tal";
	const char src[] = "pipo";


	printf("test normal\n");
	printf("Before memmove dst = %s, src = %s\n", dst, src);
	memmove(dst, src, 3);
	printf("After memmove dst = %s, src = %s\n\n", dst, src);

// a partir de aquí creo que da errores pq quedan guardadas las src y dst del script anterior

	printf("metemos un t-size más grande que la src pero más peq que dst\n");
	printf("Before memmove dst = %s, src = %s\n", dst, src);
	memmove(dst, src, 8);
	printf("After memmove dst = %s, src = %si\n\n", dst, src);


	printf("metemos un t-size del size de la src y null\n");
	printf("Before memmove dst = %s, src = %s\n", dst, src);
	memmove(dst, src, 5);
	printf("After memmove dst = %s, src = %s\n\n", dst, src);

// este caso da error, lo pongo en commentarios para programar

	/*char dst1[] = "short";
	const char src1[] = "source is too long";

	printf("metemos un t-size mayor que lo que soporta el destino\n");
	printf("Before mmove dst = %s, src = %s\n", dst1, src1);
	memmove(dst1, src1, 8);
	printf("Before mmove dst1 = %s, src1 = %s\n", dst1, src1);*/

	
	return (0);
}
