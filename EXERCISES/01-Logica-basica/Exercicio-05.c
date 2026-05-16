/*5. Área de um retângulo

Leia:
base
altura

Calcule a área.
Fórmula:
A=b⋅h*/

#include<stdio.h>

int main(){
    // criacao das variaveis
    int base, altura;
    //input da base e altura
    printf("Digite a Base do retangulo: \n");
    scanf("%d", &base);
    printf("Digite a altura do retangulo: \n");
    scanf("%d", &altura);
    // Calculo da area do retangulo
    printf("A area do retangulo eh de: %d", base * altura);
    return 0;
}