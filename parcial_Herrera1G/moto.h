#include "tipo.h"
#include "color.h"

#ifndef MOTO_H_INCLUDED
#define MOTO_H_INCLUDED

typedef struct
{
    int id;
    char marca[20];
    int idTipo;
    int idColor;
    int cilindradas;
    int isEmpty;

}eMoto;


#endif // MOTO_H_INCLUDED

/** \brief realiza la carga de los datos de la biblioteca warehouse
 *
 * \param motos, array de las motos
 * \param tammoto, tamaño del array de motos
 * \return  void
 *
 */
void hardcodearMotos(eMoto motos[], int tammoto);

/** \brief hardcodea
 *
 * \param motos, array de las motos
 * \param tammoto, tamaño del array de motos
 * \return
 *
 */
void inicializarMotos(eMoto motos[], int tammoto);

/** \brief muestra la moto que le llega en la llamada
 *
 * \param moto, una sola entidad de motos
 * \param colores, array de colores
 * \param tamcolor, tamaño del array de colores
* \param tipos, array de colores
 * \param tamtipos, tamaño del array de tipos
 * \return void
 *
 */
void mostrarMoto(eMoto moto, eColor colores[],int tamcolor, eTipo tipos[], int tamtipos);

/** \brief
 *
 * \param motos, array de las motos
 * \param tammoto, tamaño del array de motos
 * \return
 *
 */
void mostrarMotos(eMoto motos[],int tammoto, eColor colores[],int tamcolor, eTipo tipos[], int tamtipos);

/** \brief devuelve el caracetr ingresado
 *
 * \return
 *
 */
char menu();

int altaMotos(int* proxId, eMoto lista[], int tammoto, eColor colores[], int tamcolor, eTipo tipos[], int tamtipos, int cilindradas[], int tamcilindrada);
int buscarIndiceLibre(eMoto lista[], int tammoto);

void elegirCilindrada(int cilindradas[], int tamcilindrada);

void bajaMoto(eMoto motos[],int tammotos, eColor colores[],int tamcolor, eTipo tipos[], int tamtipos);
int buscarMoto(int id, eMoto lista[], int tammoto);

void modificarMoto(eMoto motos[], int tammotos,eColor colores[],int tamcolor, int cilindradas[], int tamcilindrada, eTipo tipos[], int tamtipos);

void motosOrdenadas(eMoto motos[],int tammoto);


