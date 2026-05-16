/* Soma de dois números
Leia dois números inteiros e mostre a soma. */ 

#include <stdio.h>

int main(){
    // Definicao de variaveis
    int n1,n2;
    // Input dos numeros
    printf("Digite um numero: \n");
    scanf("%d", &n1);
    printf("Digite outro numero: \n");
    scanf("%d", &n2);
    // Output do resultado
    printf("O resultado da soma: %d + %d = %d", n1, n2, n1 + n2);
    return 0;
}