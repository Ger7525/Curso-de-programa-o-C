#include <stdio.h>

/*Exercício: Faça um programa que some os números ímpares de 1 a 1000.*/


int main() {
    int soma = 0;
    for (int i = 1; i <= 1000; i++) {
        if (i % 2 != 0) {
            soma += i;
        }
    }
    printf("A soma dos números ímpares de 1 a 1000 é: %d\n", soma);

    return 0;
}