#include <stdio.h>
#include <stdlib.h>

//la documentacion se hace en el .h

int main()
{
    int opcion;



    do
    {
        printf("1- Ingresar primer operando\n2- Ingresar segundo operando\n3- Calcular todas las operaciones\n4- Informar resultados\n5- Salir.\n");
        printf("ingrese una opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
            case 1:
                printf("ingreso primer operando\n\n");
                break;
            case 2:
                printf("ingreso segundo operando\n\n");
                break;
            case 3:
                printf("calculo todas las operaciones\n\n");
                break;
            case 4:
                printf("muestro los resultados\n\n");
                break;
        }
    }while(opcion!=5);
    return 0;
}
