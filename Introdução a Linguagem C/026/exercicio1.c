# include <stdio.h>
# include <stdlib.h>
# include <locale.h>


// Exercicio 1 - Escreva um programa em C que solicite ao usuário seu nome, sexo, idade, peso e altura. Em seguida, o programa deve exibir as informações fornecidas pelo usuário.


int main(){

char nome[50], sexo;
int idade;
float peso, altura;

printf("\tDigite seu nome: ");
scanf("%s", &nome);
getchar();
printf("\tDigite seu sexo (M/F): ");
scanf("%c", &sexo);
getchar();
printf("\tDigite sua idade: ");
scanf("%d", &idade);
getchar();
printf("\tDigite seu peso (kg): ");
scanf("%f", &peso);
getchar();
printf("\tDigite sua altura (m): ");
scanf("%f", &altura);

printf("\nNome: %s\n", nome);
printf("Sexo: %c\n", sexo);
printf("Idade: %d\n", idade);
printf("Peso: %.2f kg\n", peso);
printf("Altura: %.2f m\n", altura);




                    return 0;
}