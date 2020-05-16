#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "trabajo.h"
#include "validacionesHerrera.h"


void inicializarTrabajos(eTrabajo trabajos[], int tamtrab)
{
    for(int i = 0; i < tamtrab; i++)
    {
        trabajos[i].isEmpty = 1;
    }
}

int buscarIndiceLibreTrabajo(eTrabajo lista[], int tamtrabajo)
{
    int indiceLibre = -1;
    for (int i =0 ; i< tamtrabajo; i++)
    {
        if (lista[i].isEmpty)
        {
            indiceLibre = i;
            break;
        }
    }
    return indiceLibre;
}

void altaTrabajo(int* id, eMoto motos[],int tammotos, eServicio servicios[], int tamserv,eColor colores[], int tamcolores, eTipo tipos[], int tamtipos, eTrabajo trabajos[], int tamtrabajo)
{
    int idMoto;
    int existe;
    int indice;
    eTrabajo auxTrabajo;

    int idx;
    idx = *id;

    auxTrabajo.id = idx;

    indice = buscarIndiceLibreTrabajo(trabajos,tamtrabajo);

    if(indice == -1)
    {
        printf("No hay lugar.\n");
        system("pause");
    }
    else
    {
        mostrarMotos(motos,tammotos,colores,tamcolores,tipos,tamtipos);
        printf("Ingrese id de la moto: \n");
        scanf("%d",&idMoto);

        existe = buscarMoto(idMoto,motos,tammotos);

        if(existe == -1)
        {
            printf("No hay moto con esa id\n");
            system("pause");
        }
        else
        {
            auxTrabajo.idMoto = idMoto;
            mostrarMoto(motos[indice],colores,tamcolores,tipos,tamtipos);

            listarServicios(servicios,tamserv);
            if(utn_getNumero(&auxTrabajo.idServicio,"Ingrese id del servicio\n","Error, numero  invalido.\n",20000,20004,3) == -1)
            {
                printf("No existe dicho servicio.\n");
            }
            else
            {
                printf("Ingrese fecha de ingreso: ");
                scanf("%d/%d/%d", &auxTrabajo.fecha.dia, &auxTrabajo.fecha.mes, &auxTrabajo.fecha.anio);

                trabajos[indice] = auxTrabajo;
                trabajos[indice].isEmpty = 0;
                (*id)++;
            }
        }
    }
}

void mostrarTrabajo(eTrabajo trabajo, eServicio servicios[],int tamserv)
{
    char descripcion[25];
    cargarDescripcionServicios(descripcion,trabajo.id,servicios,tamserv);
    printf("%d          %d      %10s          %d/%d/%d \n",trabajo.id,trabajo.idMoto,descripcion,trabajo.fecha.dia,trabajo.fecha.mes,trabajo.fecha.anio);
}

void mostrarTrabajos(eTrabajo trabajos[],int tamtrabajos, eServicio servicios[], int tamserv)
{
    int hayTrabajo = 0;
    printf("\n***** Listado Trabajos *****\n\n");
    printf("IdTrabajo      IdMoto      Servicio           Fecha\n");

    for (int i=0; i< tamtrabajos; i++)
    {
        if (trabajos[i].isEmpty == 0)
        {
            mostrarTrabajo(trabajos[i], servicios, tamserv);
            hayTrabajo = 1;
        }
    }
    if (hayTrabajo == 0)
    {
        printf("\nNo hay motos que listar \n");
    }
}

