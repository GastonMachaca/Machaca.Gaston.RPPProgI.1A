#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ordenarCaracteres(char palabra[]);

int main()
{
    char cadena[20];

    printf("Ingrese palabra a ordenar:");
    gets(cadena);

    ordenarCaracteres(cadena);

    printf("\n%s\n", cadena);

    return 0;
}

void ordenarCaracteres(char palabra[])
{
    char aux;

    for(int i = 0; i < (strlen(palabra)- 1); i++)
    {

      for(int j = i + 1; j < strlen(palabra); j++)
      {

         if(palabra[i] > palabra[j])
         {
             aux = palabra[j];
             palabra[j] = palabra[i];
             palabra[i] = aux;
         }

      }

    }

}
