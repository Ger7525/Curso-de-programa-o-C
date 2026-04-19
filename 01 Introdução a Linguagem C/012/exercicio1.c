#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//Exercicio faça um programa que leia sexo, idade e altura.

int main() {
    char sexo;
    int idade;
    float altura;
    printf("Digite o sexo (M/F): ");
    scanf("%c", &sexo);
    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Digite a altura: ");
    scanf("%f", &altura);
    printf ("Sexo: %c\n", sexo);
    printf ("Idade: %d anos\n", idade);
    printf ("Altura: %.2f\n", altura);

    return 0;
}