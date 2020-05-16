#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "servicio.h"


void listarServicios(eServicio servicios[],int tamserv)
{
    printf("\n***** Listado Servicios *****\n\n");
    printf("   Id   Descripcion de Servicios Precio\n");

    for (int i=0; i< tamserv; i++)
    {

        printf("%d         %10s         %.2f\n",servicios[i].id,servicios[i].descripcion,servicios[i].precio);
    }
    printf("\n\n");
}


int cargarDescripcionServicios(char descripcion[], int idServicio, eServicio servicios[], int tamservicios)
{
    int todoOk=0;
    for (int i =0; i< tamservicios; i++)
    {
        if (servicios[i].id == idServicio)
        {
            strcpy(descripcion, servicios[i].descripcion);
            todoOk =1;
        }
    }
    return todoOk;
}

