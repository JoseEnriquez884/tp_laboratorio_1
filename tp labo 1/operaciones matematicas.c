#include "operaciones matematicas.h"

float SumarNumero(float primerNumero, float segundoNumero)
{
    float resultado;

    resultado=primerNumero+segundoNumero;

    return resultado;
}

float RestarNumero(float primerNumero, float segundoNumero)
{
    float resultado;

    resultado=primerNumero-segundoNumero;

    return resultado;
}

float DividirNumeros(float primerNumero, float segundoNumero)
{
    float resultado;

    resultado=primerNumero/segundoNumero;

    return resultado;
}

float MultiplicarNumeros(float primerNumero, float segundoNumero)
{
    float resultado;

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

