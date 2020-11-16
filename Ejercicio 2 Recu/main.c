#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char cadena_vocales[20];

    printf("Ingrese una palabra para quitarle las vocales: ");
    fflush(stdin);
    fgets(cadena_vocales, 20, stdin);
    cadena_vocales[strlen(cadena_vocales) - 1] = '\0';

    quitar_vocales(cadena_vocales);

    return 0;
}

void quitar_vocales(char cadena[])
{
    int j;
    int s;

    j = ' ';
    s = strlen(cadena);

    for(int i = 0; i < s; i++)
    {
        if(cadena[i] == 'a' || cadena[i] == 'e'|| cadena[i] == 'i' || cadena[i] == 'o' || cadena[i] == 'u')
        {
            cadena[i] = j;
        }
    }

    printf("Cadena sin vocales: %s\n\n", cadena);


}
