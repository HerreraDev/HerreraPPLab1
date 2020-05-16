#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tipo.h"
#include "color.h"
#include "servicio.h"
#include "moto.h"
#include "trabajo.h"

#define TAMMOTOS 10
#define TAMTIPOS 4
#define TAMCOLOR 5
#define TAMSERVICIO 4
#define TAMCILINDRADA 5
#define TAMHARDCODEO 1
#define TAMTRABAJOS 10






int main()
{
    eTipo tipos[TAMTIPOS] =
    {
        {1000,"Enduro"},
        {1001,"Chopera"},
        {1002,"Scooter"},
        {1003,"Ciclomotor"}
    };

    eColor colores[TAMCOLOR] =
    {
        {10000,"Gris"},
        {10001,"Negro"},
        {10002,"Blanco"},
        {10003,"Azul"},
        {10004,"Rojo"}
    };
    eServicio servicios[TAMSERVICIO] =
    {
        {20000,"Limpieza",250},
        {20001,"Ajuste",300},
        {20002,"Balanceo",17},
        {20003,"Cadena",190},
    };

    int cilindrada[TAMCILINDRADA] = {50,125,500,600,750};

    int seguir = 's';
    int proxIdMoto = 10;
    int proxIdTrab = 20;
    //int flagPrimeraEntrada = 0;
    eMoto motos[TAMMOTOS];
    eTrabajo trabajos[TAMTRABAJOS];
    inicializarMotos(motos,TAMMOTOS);
    inicializarTrabajos(trabajos,TAMTRABAJOS);
    hardcodearMotos(motos,TAMHARDCODEO);


    do
    {
        switch(menu())
        {
        case 'a':
            altaMotos(&proxIdMoto,motos,TAMMOTOS,colores,TAMCOLOR,tipos,TAMTIPOS,cilindrada,TAMCILINDRADA);
            break;
        case 'b':
            modificarMoto(motos, TAMMOTOS,colores,TAMCOLOR,cilindrada,TAMCILINDRADA,tipos,TAMTIPOS);

            break;
        case 'c':

            bajaMoto(motos,TAMMOTOS,colores,TAMCOLOR,tipos,TAMTIPOS);

            break;
        case 'd':
            motosOrdenadas(motos,TAMMOTOS);
            mostrarMotos(motos,TAMMOTOS,colores,TAMCOLOR,tipos,TAMTIPOS);
            break;
        case 'e':
            listarTipos(tipos,TAMTIPOS);
            break;
        case 'f':
            listarColores(colores,TAMCOLOR);
            break;
        case 'g':
            listarServicios(servicios,TAMSERVICIO);
            break;
        case 'h':
            altaTrabajo(&proxIdTrab,motos,TAMMOTOS,servicios,TAMSERVICIO,colores,TAMCOLOR,tipos,TAMTIPOS,trabajos,TAMTRABAJOS);
            break;
        case 'i':
            mostrarTrabajos(trabajos,TAMTRABAJOS,servicios,TAMSERVICIO);
            break;
        case 'x':
            seguir = 'n';
            break;

        }

        system("pause");
    }
    while ( seguir == 's');
    return 0;
}




