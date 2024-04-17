#include <stdio.h>
#include <time.h>
#include <stdlib.h>


struct compu 
{
    int velocidad;//entre 1 y 3 GHz
    int anio;//entre 2015 y 2023
    int cantidad;//entre 1 y 8
    char *tipo_cpu; //valores del arreglo tipos
}typedef compu;

void cargarDatos(compu pcComponentes[],char tipos[]);
void listarCompus(compu pcComponetes[]);

int main()
{
    srand(time(NULL));
    char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    compu pcComponentes[5];

    cargarDatos(pcComponentes,tipos);
    listarCompus(pcComponentes);
   

    

    return 0;
}

void cargarDatos(compu pcComponentes[], char tipos[])
{
    int tipo;
    for (int i = 0; i < 5; i++)
    {
        pcComponentes[i].velocidad =  1 + rand() % 4 ;
        pcComponentes[i].anio = 2015 + rand() % 10;
        pcComponentes[i].cantidad = 1 + rand() % 9;
        tipo =  rand() % 6;
        pcComponentes[i].tipo_cpu = tipos[tipo];
    }   
}

void listarCompus(compu pcComponetes[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("----COMPUTADORA---- %d ",i+1);
        printf("\nLa velocidad de la compu es: %d",pcComponetes[i].velocidad);
        printf("\nEl anio de la compu es %d", pcComponetes[i].anio);
        printf("\nLa cantidad de nucleos es: %d", pcComponetes[i].cantidad);
        printf("\nEl tipo de procesador es: %s ", pcComponetes[i].tipo_cpu); //CONSULTA
    }
    
}