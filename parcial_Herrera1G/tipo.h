#ifndef TIPO_H_INCLUDED
#define TIPO_H_INCLUDED

typedef struct
{
    int id;
    char descripcion[20];

}eTipo;

#endif // TIPO_H_INCLUDED

void listarTipos(eTipo tipos[],int tamtipos);
int cargarDescripcionTipos(char descripcion[], int idTipos, eTipo tipos[], int tamtipos);
