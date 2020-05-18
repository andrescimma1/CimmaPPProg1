#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int id;
    char procesador[20];
    char marca[20];
    int precio;
}eNotebook;

void ordenarPorMarcayPrecio(eNotebook arrayNotebooks[], int tam);

int main()
{
    int i;

    eNotebook arrayNotebooks[5] = {
                                   {1, "Intel", "HP", 45000},
                                   {4, "AMD", "Asus", 51000},
                                   {7, "Intel", "Acer", 48000},
                                   {5, "Intel", "Lenovo", 61000},
                                   {2, "AMD", "Razer", 69000}
                                  };


    ordenarPorMarcayPrecio(arrayNotebooks, 5);

    for(i=0; i<5; i++)
    {
        printf("%d   %7s      %7s       %d\n", arrayNotebooks[i].id,
                                                arrayNotebooks[i].procesador,
                                                arrayNotebooks[i].marca,
                                                arrayNotebooks[i].precio);
    }

    return 0;
}



void ordenarPorMarcayPrecio(eNotebook arrayNotebooks[], int tam)
{
    int i, j;
    int auxID;
    char auxProcesador[20];
    char auxMarca[20];
    int auxPrecio;

    for(i=0; i<tam; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if(strcmp(arrayNotebooks[i].marca, arrayNotebooks[j].marca) > 0)
            {
                strcpy(auxMarca, arrayNotebooks[j].marca);
                strcpy(arrayNotebooks[j].marca, arrayNotebooks[i].marca);
                strcpy(arrayNotebooks[i].marca, auxMarca);
                auxID = arrayNotebooks[j].id;
                arrayNotebooks[j].id = arrayNotebooks[i].id;
                arrayNotebooks[i].id = auxID;
                strcpy(auxProcesador, arrayNotebooks[j].procesador);
                strcpy(arrayNotebooks[j].procesador, arrayNotebooks[i].procesador);
                strcpy(arrayNotebooks[i].procesador, auxProcesador);
                auxPrecio = arrayNotebooks[j].precio;
                arrayNotebooks[j].precio = arrayNotebooks[i].precio;
                arrayNotebooks[i].precio = auxPrecio;
            }
            else if(strcmp(arrayNotebooks[i].marca, arrayNotebooks[j].marca) == 0)
            {
                if(arrayNotebooks[i].precio > arrayNotebooks[j].precio)
                {
                    strcpy(auxMarca, arrayNotebooks[j].marca);
                    strcpy(arrayNotebooks[j].marca, arrayNotebooks[i].marca);
                    strcpy(arrayNotebooks[i].marca, auxMarca);
                    auxID = arrayNotebooks[j].id;
                    arrayNotebooks[j].id = arrayNotebooks[i].id;
                    arrayNotebooks[i].id = auxID;
                    strcpy(auxProcesador, arrayNotebooks[j].procesador);
                    strcpy(arrayNotebooks[j].procesador, arrayNotebooks[i].procesador);
                    strcpy(arrayNotebooks[i].procesador, auxProcesador);
                    auxPrecio = arrayNotebooks[j].precio;
                    arrayNotebooks[j].precio = arrayNotebooks[i].precio;
                    arrayNotebooks[i].precio = auxPrecio;
                }
                else if(arrayNotebooks[i].precio < arrayNotebooks[j].precio)
                {
                    strcpy(auxMarca, arrayNotebooks[i].marca);
                    strcpy(arrayNotebooks[i].marca, arrayNotebooks[j].marca);
                    strcpy(arrayNotebooks[j].marca, auxMarca);
                    auxID = arrayNotebooks[i].id;
                    arrayNotebooks[i].id = arrayNotebooks[j].id;
                    arrayNotebooks[j].id = auxID;
                    strcpy(auxProcesador, arrayNotebooks[i].procesador);
                    strcpy(arrayNotebooks[i].procesador, arrayNotebooks[j].procesador);
                    strcpy(arrayNotebooks[j].procesador, auxProcesador);
                    auxPrecio = arrayNotebooks[i].precio;
                    arrayNotebooks[i].precio = arrayNotebooks[j].precio;
                    arrayNotebooks[j].precio = auxPrecio;
                }
            }
        }
    }
}
