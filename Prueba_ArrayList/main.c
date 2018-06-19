#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"
//#include "utn.h"


void printArrayListEmployee(ArrayList* lista)
{
  int i=0;
  for(i=0;i<lista->len(lista);i++)
  {
      Employee* pAux = lista->get(lista,i);
      printf("%d) ",i);
    // printEmployee(pAux);
  }
}

int main()
{
    char seguir='s';
    int opcion=0;
    int retorno=-1;

    ArrayList* pEmpleados;
    FILE *pEmpl;

 /*   if((pEmpleados=al_newArrayList())==NULL);
    {
        printf("No se pudo crear el ArrayList");
    }*/
    pEmpleados=al_newArrayList();
    if(pEmpleados==NULL)
     {
        printf("No se pudo crear el ArrayList");
    }

    while(seguir=='s')
    {
        printf("-------MENU PRINCIPAL --------\n\n");
        printf("Ingrese una opcion: \n\n");
        printf("1- Parser\n");
        printf("2- Listar empleados\n");
        printf("3- Agregar un empleado\n");
        printf("4- Eliminar un empleado\n");
        printf("5- Modificar un empleado\n");
        printf("6- Ordenar por nombre\n");
        printf("7- Listar empleados por rango:\n");
        printf("8- Guardar\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);
        ValidaMenu(opcion,1,9);
        switch(opcion)
        {
            case 1:
                retorno=parserEmployee(pEmpl,pEmpleados);
                if(retorno==1)
                {
                    printf("Carga exitosa: \n");
                }
                else
                {
                    printf("No se pudo cargar el archivo: \n");
                }
                system("pause");
                system("cls");
                break;
            case 2:


                system("cls");
                break;
            case 3:

                system("cls");
                break;
            case 4:

                system("cls");
               break;
            case 5:

                system("cls");
                break;
            case 6:

                system("cls");
                break;
            case 7:

                system("cls");
                break;
            case 8:

                system("cls");
                break;
            case 9:
                seguir = 'n';
                break;
        }
    }
    system("PAUSE");
    return 0;
}
