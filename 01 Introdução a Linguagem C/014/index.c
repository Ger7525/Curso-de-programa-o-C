#include <stdio.h>

int main() {
   
   // como retirar o buffer do teclado com a função getchar() ou scanf() para ler um caractere
   
    char c1, c2;
    printf("digite dois Caracteres:  ");
    scanf("%c",&c1);
    getchar();
    scanf("%c",&c2);
    printf("Os caracteres digitados foram: %c e %c", c1, c2);
    




    return 0;
}
