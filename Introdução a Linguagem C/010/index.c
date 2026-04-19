#include <stdio.h>
int main() {
 // Criando variáveis e lendo caracteres do teclado com a função fgetc
char c1;
printf("Digite um caractere: ");
c1 = fgetc(stdin); // Lê um caractere do teclado e armazena em c1
printf("Digite outro caractere: ");

printf("Voce digitou: '%c'\n", c1); // Exibe o caractere digitado
 
 
                   
    return 0;
}
