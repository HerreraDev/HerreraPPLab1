#include "fecha.h"
#include "color.h"
#include "tipo.h"
#include "servicio.h"
#include "moto.h"

#ifndef TRABAJO_H_INCLUDED
#define TRABAJO_H_INCLUDED

typedef struct
{
    int id;
    int idMoto;
    int idServicio;
    eFecha fecha;
    int isEmpty;


}eTrabajo;

#endif // TRABAJO_H_INCLUDED

void inicializarTrabajos(eTrabajo trabajos[], int tamtrab);
int buscarIndiceLibreTrabajo(eTrabajo lista[], int tamtrabajo);

void altaTrabajo(int* id, eMoto motos[],int tammotos, eServicio servicios[], int tamserv,eColor colores[], int tamcolores, eTipo tipos[], int tamtipos, eTrabajo trabajos[], int tamtrabajo);

void mostrarTrabajo(eTrabajo trabajo, eServicio servicios[],int tamserv);
void mostrarTrabajos(eTrabajo trabajos[],int tamtrabajos, eServicio servicios[], int tamserv);
