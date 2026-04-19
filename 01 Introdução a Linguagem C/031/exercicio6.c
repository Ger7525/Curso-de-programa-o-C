# include <stdio.h>


// Exercício 6: Crie um programa em C que permita fazer a conversão cambial entre Reais e Dólares. Considere como taxa de câmbio US$1,0 = R$5,30. Leia um valor em Reais e mostre o correspondente em Dólares.



int main() {
   float reais, dolares;
   float taxa_cambio = 5.30;

   printf("Digite o valor em Reais: ");
   scanf("%f", &reais);

   dolares = reais/taxa_cambio;

   printf("\to valor de R$: %.2f e equivalente a US$: %.2f\n", reais , dolares);

    return 0;
}