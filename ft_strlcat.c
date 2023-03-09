/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cristina <Cristina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 09:44:41 by crramire          #+#    #+#             */
/*   Updated: 2023/03/09 17:17:45 by Cristina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t	source_size;
    size_t	dest_size;
    size_t	concat_size;
    int	i;
    
    source_size = ft_strlen(src);
    dest_size = ft_strlen(dst);
    concat_size = dest_size + source_size;

    //si dstsize >
    //si dstsize (buffer reservado) < dest_size
    if (dstsize <= dest_size)
    return (concat_size);
    //si dstsize (buffer reservado) > dest_size (la long de la cadena de destino)
    //concatena los valores hasta donde llegue y devuelve la size de la cadena concatenada
    else
    {
        i = 0;
        while (concat_size < 0 && src[i] != '\0')
        {
         dst[dest_size] = src[i];
         i++;
         dest_size--;
         concat_size--;
        }
        dst[concat_size] = '\0';
        //sí se agrega null character
    }
    return (concat_size);    
}

int main() {
   
  /*   char destino[] = "Hola";
    char origen[] = " mundo!";
    size_t tamaño = sizeof(destino);

    size_t longitud = strlcat(destino, origen, tamaño);
    
    printf("Origen len: %lu\n", strlen(origen));
    printf("Destino len: %lu\n", strlen(destino));
    printf("La cadena resultante es: %s\n", destino);
    printf("La longitud de la cadena resultante es: %zu\n", longitud); */

    char destino[11] = "a";
    char origen[] = "lorem";
    size_t tamaño = sizeof(destino);

    size_t longitud = ft_strlcat(destino, origen, 15);
    
    printf("Origen len: %lu\n", strlen(origen));
    printf("Destino len: %lu\n", strlen(destino));
    printf("La cadena resultante es: %s\n", destino);
    printf("La longitud de la cadena resultante es: %zu\n", longitud);
    return 0;
}
