/*Conversão de temperatura

Leia uma temperatura em Celsius e converta para Fahrenheit.

Fórmula:*/

#include<stdio.h>

int main(){
    //Definicao variavel
    float Celsius;

    printf("Qual a temperatura que voce gostaria de converter: \n");
    scanf("%f", &Celsius);

    printf("A conversao de %.2f graus fica: %.2f Fahrenheit\n", Celsius, ((9.0 / 5.0) * Celsius) + 32);
    return 0;
}