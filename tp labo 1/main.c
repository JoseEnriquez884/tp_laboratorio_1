#include <stdio.h>
#include <stdlib.h>
#include "operaciones matematicas.h"

int main()
{
    int opcion;
    float primerNumero;
    float segundoNumero;
    float sumaDeNumeros;
    float restaDeNumeros;
    float multiplicacionDeNumeros;
    float divisionDeNumeros;
    long int factorialDePrimerNumero;
    long int factorialDeSegundoNumero;

    do
    {
        printf("1- Ingresar primer operando\n2- Ingresar segundo operando\n3- Calcular todas las operaciones\n4- Informar resultados\n5- Salir.\n");
        printf("ingrese una opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
            case 1:
                printf("ingreso primer operando A= ");
                scanf("%f", &primerNumero);
                break;
            case 2:
                printf("ingreso segundo operando B= ");
                scanf("%f", &segundoNumero);
                break;
            case 3:
                sumaDeNumeros=SumarNumero(primerNumero, segundoNumero);
                restaDeNumeros=RestarNumero(primerNumero, segundoNumero);
                multiplicacionDeNumeros=MultiplicarNumeros(primerNumero, segundoNumero);
                factorialDePrimerNumero=CalcularFactorial(primerNumero);
                factorialDeSegundoNumero=CalcularFactorial(segundoNumero);

                printf("\nSe calcularon todas las operaciones\n");

                if(segundoNumero!=0)
                {
                    divisionDeNumeros=DividirNumeros(primerNumero, segundoNumero);
                }
                break;
            case 4:
                printf("\nEl resultado de %.2f+%.2f es: %.2f\n",primerNumero, segundoNumero, sumaDeNumeros);
                printf("El resultado de %.2f- %.2f es: %.2f\n",primerNumero, segundoNumero, restaDeNumeros);
                if(segundoNumero!=0)
                {
                    printf("El resultado de %.2f/%.2f es: %.2f\n",primerNumero, segundoNumero, divisionDeNumeros);
                }else
                {
                    printf("no es posible dividir por 0\n");
                }
                printf("El resultado de %.2f*%.2f es: %.2f\n",primerNumero, segundoNumero, multiplicacionDeNumeros);
                printf("El factorial de %.2f es: %ld y el factorial de %.2f es: %ld\n\n", primerNumero, factorialDePrimerNumero, segundoNumero, factorialDeSegundoNumero);
                break;
        }
    }while(opcion!=5);
    return 0;
}
