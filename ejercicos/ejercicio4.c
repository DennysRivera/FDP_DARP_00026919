#include <stdio.h>

int main(){

    float num, resul = 0;
    printf("Ingrese los grados Celsius: ");
    scanf("%f",&num);

    // Operacion

    resul = (num * (9.0/5.0)) +32;

    printf("Los grados Fahrenheit son: %f ",resul);
    return 0;
}