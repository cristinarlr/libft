#include <string.h>
#include <stdio.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *ptr_src = (unsigned char *) src;
    unsigned char *ptr_dst = (unsigned char *) dst;
    
    // Verificar si ambos punteros son nulos.
    if (!dst && !src)
        return NULL;
    
    // Si el len es 0 o si el puntero de src y dest apuntan a mismo sitio.
    if (len == 0 || ptr_src == ptr_dst)
        return dst;
    
    // Si src es menor que el array de dest hay que rellenar al revés.
    if (ptr_src < ptr_dst)
    {
        while (len--)
            *(ptr_dst + len) = *(ptr_src + len);
    }
    // Si src es mayor que el array de dest (si el address de src>dest).
    else
    {
        while (len--)
            *ptr_dst++ = *ptr_src++;
    }
    return dst;
}

int main()
{ 
    char source[] = "pipa\n";
    char destination[] = "gominolas\n";

    printf("%s", destination);
    ft_memmove(destination, source, 3);
    printf("%s", destination);
        
    return 0;
}
