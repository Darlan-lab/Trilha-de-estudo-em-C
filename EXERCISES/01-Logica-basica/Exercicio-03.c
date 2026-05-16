/*3. Média simples

Leia 3 notas e calcule a média*/

#include <stdio.h>

int main(){
    // Criacao variaveis notas
    float nota1,nota2,nota3;
    // Input das notas
    printf("Digite 3 notas: \n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    // Calculo da media das 3 notas   
    printf("A media das notas %.2f, %.2f, %.2f, eh de: %.2f", nota1, nota2, nota3, (nota1 + nota2 + nota3) / 3);
    return 0;
}