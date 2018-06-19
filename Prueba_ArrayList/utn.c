#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<conio.h>
#include <string.h>
#include "utn.h"

void ValidaMenu(int opcion,int limite_inferior,int limite_superior)
{
     if(opcion <limite_inferior || opcion >limite_superior)

        printf("Debe elegir una opcion entre %d y %d: \n",limite_inferior,limite_superior);

}
int PedirEntero(char mensaje[])
{
    int auxiliar;

    do
    {
    printf("%s",mensaje);
    fflush(stdin);
    }while(scanf("%d",&auxiliar)==0);
    return auxiliar;
}
