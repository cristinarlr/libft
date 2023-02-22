/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crramire <crramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:29:11 by crramire          #+#    #+#             */
/*   Updated: 2023/02/22 15:06:57 by crramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>

///SIN TERMINAR (CONTINUAR...)

void *ft_memset(void *b, int c, size_t len)
{
    int counter1
    int counter2
    char dest
    
    counter1 = 0;
    while (b[counter2]<=len)
    {
        dest[counter] = c;
        counter1++;
    }
    
}

// b > Es el destino. Un puntero al inicio del bloque de memoria que se desea llenar con un valor específico.
// c > El valor que se utilizará para llenar la región de memoria. Este valor se convierte en un valor sin signo (unsigned) antes de ser copiado en la memoria.
// len > El número de bytes que se llenarán con el valor "c".

La función memset() copia el valor c en cada byte de la región de memoria apuntada por dest durante n bytes. Por lo tanto, esta función es útil para inicializar variables o arrays a un valor específico.

Es importante tener en cuenta que la función memset() no comprueba límites, por lo que si n es mayor que el tamaño del bloque de memoria al que apunta dest, se producirá un comportamiento indefinido. También es importante tener en cuenta que el tipo de los argumentos dest y c son punteros genéricos y enteros, respectivamente, por lo que es importante asegurarse de que los tipos sean compatibles antes de utilizar la función.

int main () {
   char str[50];

   strcpy(str,"This is string.h library function");
   puts(str);

   memset(str,'$',7);
   puts(str);
   
   return(0);
}

// MEMSET(3)                BSD Library Functions Manual                MEMSET(3)

// NAME
//      memset -- fill a byte string with a byte value

// LIBRARY
//      Standard C Library (libc, -lc)

// SYNOPSIS
//      #include <string.h>

//      void *
//      memset(void *b, int c, size_t len);

// DESCRIPTION
//      The memset() function writes len bytes of value c (converted to an unsigned char) to the string b.

// RETURN VALUES
//      The memset() function returns its first argument.

// SEE ALSO
//      bzero(3), memset_pattern(3), memset_s.3, swab(3), wmemset(3)

// STANDARDS
//      The memset() function conforms to ISO/IEC 9899:1990 (``ISO C90'').