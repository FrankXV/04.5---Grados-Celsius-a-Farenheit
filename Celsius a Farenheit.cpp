/* Convertir grados celsisu a farenheit */

#include <iostream>
#include <stdio.h>

int main() {
    float Temperatura, Conversion = 0, c1 = 1.8, c2 = 32;

    printf("Digite la temeperatura en Celsius a convertir en Farenheit: \n");
    scanf("%f", &Temperatura);

    Conversion = (Temperatura * c1) + c2;

    printf("Resultado de la conversion: %.2f grados farenheit  \n", Conversion);






}
