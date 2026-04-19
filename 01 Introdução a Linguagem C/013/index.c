#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// como ler dois caracteres e limpar o buffer de entrada.


int main() {
    char c1, c2;
    printf("Digite dois caracteres: ");
    scanf("%c %c",&c1, &c2);
    // Limpar o buffer de entrada
    printf("Os caracteres digitados foram: %c e %c\n", c1, c2);
    printf(" numeros da tabela ASCII: %d e %d\n", c1, c2);
    

    return 0;
}