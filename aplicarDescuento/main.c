#include <stdio.h>
#include <stdlib.h>

float aplicarDescuento(float precio);

int main()
{
    float precio;
    precio = 100000;

    precio = aplicarDescuento(precio);

    printf("%.2f", precio);

    return 0;
}

float aplicarDescuento(float precio)
{
    float descuento;

    descuento = (precio * 5) / 100;

    precio = precio - descuento;

    return precio;
}
