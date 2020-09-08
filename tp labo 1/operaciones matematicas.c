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

    if(segundoNumero!=0)
    {
        resultado=(float)primerNumero/segundoNumero;
    }else
    {
        printf("no es posible dividir por 0");
    }

    return resultado;
}

int MultiplicarNumeros(int primerNumero, int segundoNumero)
{
    int resultado;

    resultado=primerNumero*segundoNumero;

    return resultado;
}

long int CalcularFactorial(int numeroIngresado)
{
    int resultado;

    if(numeroIngresado!=0)
    {
        resultado=numeroIngresado*CalcularFactorial(numeroIngresado-1);
    }else
    {
       resultado=1;
    }

    return resultado;
}

