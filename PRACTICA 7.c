//Alejandro Paqui//
#include <stdio.h>
#include <stdlib.h>
/*Escribe un programa que pida un n�mero al usuario y muestre el d�a
de la semana al que equivale. Si se introduce un n�mero fuera del rango v�lido (1-7),
se debe mostrar un mensaje de error.*/

int main()
{
    int dia;
    printf("Introduce un n�mero en el rango 1-7");
    scanf("%d",&dia);

    switch(dia){
    case(1):
        printf("Lunes");
        break;
    case(2):
        printf("Martes");
        break;
    case(3):
        printf("Mi�rcoles");
        break;
    case(4):
        printf("Jueves");
        break;
    case(5):
        printf("Viernes");
        break;
    case(6):
        printf("Sabado");
        break;
    case(7):
        printf("Domingo");
        break;
    default:
        printf("Error. Dia no valido");
        break;
    }

}
