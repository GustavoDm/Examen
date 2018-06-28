#include <stdio.h>
#include <stdlib.h>
#include "Empleado.h"
#include "ArrayList.h"

int file_parser(FILE *pFile, ArrayList *this)
{

    int retorno =-1;

    if(this != NULL)
    {


        Empleado* aux;
        char id[50];
        char nombre[50];
        char horasTrabajadas[50];
        FILE* fp;
        fp = fopen("data.csv","r");
        fscanf(fp,"%[^,],%[^,],%[^\n]\n",id,nombre,horasTrabajadas);

        do{
            fscanf(fp,"%[^,],%[^,],%[^\n]\n",id,nombre,horasTrabajadas);
            aux = Empleado_new();
            al_add(this,aux);

        }while(!feof(fp));

        retorno=0;
    }

    return retorno; // OK
}
