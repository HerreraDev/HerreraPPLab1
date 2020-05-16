#ifndef SERVICIO_H_INCLUDED
#define SERVICIO_H_INCLUDED

typedef struct
{
    int id;
    char descripcion[25];
    float precio;

}eServicio;

#endif // SERVICIO_H_INCLUDED

void listarServicios(eServicio servicios[],int tamserv);

int cargarDescripcionServicios(char descripcion[], int idServicio, eServicio servicios[], int tamservicios);
