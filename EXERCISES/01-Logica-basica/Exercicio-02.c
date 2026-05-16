/* Antecessor e sucessor

Leia um número inteiro e mostre:

antecessor
sucessor*/

#include<stdio.h>

int main(){
    //Criacao da variavel numero
    int numero;
    //Input do numero
    printf("Digite um numero: \n");
    scanf("%d", &numero);
    //Output do antecessor e sucessor
    printf("O antecessor do %d eh: %d\n", numero, numero - 1);
    printf("O sucessor do %d eh: %d\n", numero, numero + 1);
    return 0;
}