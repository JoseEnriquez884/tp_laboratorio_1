#include "operaciones matematicas.h"

int SumarNumero(int primerNumero, int segundoNumero)
{
    int resultado;

    resultado=primerNumero+segundoNumero;

    return resultado;
}

int RestarNumero(int primerNumero, int segundoNumero)
{
    int resultado;

    resultado=primerNumero-segundoNumero;

    return resultado;
}

float DividirNumeros(int primerNumero, int segundoNumero)
{
    float resultado;

    resultado=primerNumero/segundoNumero;

    if(segundoNumero==0)
    {
        printf("No es posible dividir por 0");
    }

    return resultado;
}

int MultiplicarNumeros(int primerNumero, int segundoNumero)
{
    int resultado;

    resultado=primerNumero*segundoNumero;

    return resultado;
}

