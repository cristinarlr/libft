/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crramire <crramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 09:44:41 by crramire          #+#    #+#             */
/*   Updated: 2023/03/09 13:35:47 by crramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t ft_strlcat(char * dst, const * src, size_t dstsize)
{
    size_t  source_size;
    size_t  dest_size;
    size_t  concat_size;
    int i;
    
    dest_size = ft_strlen(dst);
    source_size = ft_strlen(src);
    concat_size = dest_size + source_size;
    
    //si dstsize (buffer reservado) < dest_size
    if (dstsize <= dest_size)
    return (concat_size)

    //si dstsize (buffer reservado) > dest_size (la long de la cadena de destino)
    //concatena los valores hasta donde llegue y devuelve la size de la cadena concatenada
    i = 0;
    while (concat_size - 1 < 0 && src[i] != '\0')
    {
        dst[dest_size] = src[i];
        i++
    }
    dst[concat_size] = '\0';
    
    
    //if (concat_size>dstsize) dstsize es la que marca la cantidad de source que se copia, concatena lo que puede

    return (concat_size);
    //sí se agrega null character
    
}


int main() {
   
    char destino[10] = "Hola";
    char origen[] = " mundo!";
    size_t tamaño = sizeof(destino);

    size_t longitud = ft_strlcat(destino, origen, 4);
    
    printf("La cadena resultante es: %s\n", destino);
    printf("La longitud de la cadena resultante es: %zu\n", longitud);

    return 0;
}