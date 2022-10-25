#include <stdio.h>

int main(){
    int zapatos;
    float precioPagar, total;

    printf("Numero de pares de zapatos a comprar: ");
    scanf("%d", &zapatos);

    if(zapatos <= 10){
        total = zapatos * 80;
        printf("El precio total es $%.2f", total);
    }
    else if(zapatos > 10 && zapatos <= 20){
        total = zapatos * 80;
        precioPagar = total - (total * 0.1);
        printf("Se aplico el 10 por ciento de descuento: \nValor original: %.2f\nTotal a pagar: %.2f\n", total, precioPagar);
    }
    else if(zapatos > 20 && zapatos < 30){
        total = zapatos * 80;
        precioPagar = total - (total * 0.2);
         printf("Se aplico el 20 por ciento de descuento: \nValor original: %.2f\nTotal a pagar: %.2f\n", total, precioPagar);
    }
    else {
        total = zapatos * 80;
        precioPagar = total - (total * 0.4);
         printf("Se aplico el 40 por ciento de descuento: \nValor original: %.2f\nTotal a pagar: %.2f\n", total, precioPagar);
    }
    

    return 0;
}