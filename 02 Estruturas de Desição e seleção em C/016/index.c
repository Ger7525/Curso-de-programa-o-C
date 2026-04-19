# include <stdio.h>

//  Exercício: Leia um número e informe se ele é divisível por 2, por 3 ou por 5.
//  Dica: Use o operador de módulo (%) para verificar a divisibilidade.


int main() {
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("O número é divisível por 2.\n");
    }
    if (num % 3 == 0) {
        printf("O número é divisível por 3.\n");
    }
    if (num % 5 == 0) {
        printf("O número é divisível por 5.\n");
    }

    return 0;
}