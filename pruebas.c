#include <stdio.h>
#include <string.h>
int my_strcmp(const char *str1, const char *str2)
{
    int i = 0;
    //Recorremos ambos strings para comprobar si hay algun caracter diferente
    //entre ellos, si es así se termina el bucle y se devuelve el resultado
    while (str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i])
    {
        i++;
    }
    //Devolvemos resultado obtenido
    if (*str1 == *str2)
    {
        return 0;
    }
    else if (*str1 > *str2)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
char *my_strcat(char *dest, const char *src)
{
    char *tmp = dest;
    //Situarse al final del String dest para añadir src a continuación
    while (*tmp != '\0')
    {
        tmp++;
    }
    //Adicion de src
    while (*src != '\0')
    {
        *tmp++ = *src++;
    }
    *tmp = '\0';
    return dest;
}

char *my_strchr(const char *str, int c)
{
    char caracter = (char)c;
    char *tmp = str;
    while (*str++)
    {
        if (*str == caracter)
        {
            tmp = str;
            return tmp;
        }
    }
    return NULL;
}

char *my_strncpy(char *dest, const char *src, size_t n)
{
    for (int i = 0; i < n; i++)
    {
        dest[i] = src[i];
    }
    return src;
}

int main()
{
    int resultado = 0;
    //If s1 and s2 equal
    resultado = my_strcmp("abc", "abc");
    printf("resultado = %d\n", resultado);
    //if first char of s1 is large to s2
    resultado = my_strcmp("bca", "abc");
    printf("resultado = %d\n", resultado);
    //if first char of s1 is small to s2
    resultado = my_strcmp("abc", "bca");
    printf("resultado = %d\n", resultado);

    char dest[40] = "Hola soy";
    char src[] = "una persona";
    //Append src in dest
    my_strcat(dest, src);
    //print dest after appending src
    printf("%s\n\n", dest);
    printf("%s\n\n", src);

    my_strchr("hola que tal F", 'F');

    printf("\nmy_strchr(str, char) = %s\n\n", my_strchr("hola que F tal F", 'F'));
    printf("strchr(str, char) = %s\n", strchr("hola que F tal F", 'F'));
    int len = 3;
    char dest1[1024];
    char dest2[1024];
    dest[40] = "Hola soy";
    src[12] = "una persona";
    strcpy(dest1, dest);
    strcpy(dest2, dest);
    printf("strncpy(dest, src, %d) = %s\n", len, strncpy(dest1, src, len));
    printf("my_strncpy(dest, src, %d) = %s\n\n", len, my_strncpy(dest2, src, len));

    return 0;
}