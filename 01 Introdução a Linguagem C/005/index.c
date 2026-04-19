#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char const *argv[])
{
   //Criando variáveis e lendo números inteiros do teclado com a função scanf

   int num1, num2, num3;
   printf("\tDigite o primeiro numero inteiro: ");
   scanf("%d", &num1);
   printf("\tDigite o segundo numero inteiro: ");
   scanf("%d", &num2);
   printf("\tDigite o terceiro numero inteiro: ");
   scanf("%d", &num3);
   printf("\n\tOs números digitados foram: %d, %d e %d\n", num1, num2, num3);




                    return 0;
}
