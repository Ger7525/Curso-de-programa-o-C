# include <stdio.h>


/* Operador unsigned (número sem sinal).
%u - Especifica que o número é um inteiro sem sinal (unsigned int).
%hu - para floating-point numbers (números de ponto flutuante).
%lu - para double (números de ponto flutuante de precisão dupla).



*/ 

int main() {
                    int a = 10;
                    printf("O valor de a e: %d\n", a); // Imprime o valor de a usando %d para inteiros

                     unsigned int b = 20;
                    printf("O valor de b e: %u\n", b); // Imprime o valor de b usando %u para inteiros sem sinal

                     float c = 3.14f;
                    printf("O valor de c e: %f\n", c); // Imprime o valor de c usando %f para números de ponto flutuante

                   
    return 0;
}