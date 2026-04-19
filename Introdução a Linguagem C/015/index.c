#include <stdio.h>

// como descobrir o tamanho de memoria de um tipo de dado em C com o operador sizeof.


int main() {
                   
                char a;
                int b;
                float c;   
                   
                   
                   
                   
                    printf("O tamanho de um char e: %lu bytes\n", sizeof(char));
                    printf("O tamanho de um int e: %lu bytes\n", sizeof(int));
                    printf("O tamanho de um float e: %lu bytes\n", sizeof(float));
                    printf("O tamanho de um double e: %lu bytes\n", sizeof(double));

                    printf("O tamanho de um char e: %lu bytes\n", sizeof(a));
                    printf("O tamanho de um int e: %lu bytes\n", sizeof(b));
                    printf("O tamanho de um float e: %lu bytes\n", sizeof(c));






    return 0;
}