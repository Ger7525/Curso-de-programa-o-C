# include <stdio.h>

// Exercício 8: Como imprimir um triângulo de asteriscos com espaços à esquerda?



int main() {
                    int i, j, n;
                    printf("Digite o número de linhas do triângulo: ");
                    scanf("%d", &n);
                    for (i = 1; i <= n; i++) {
                        // Imprime os espaços à esquerda
                        for (j = 1; j <= n - i; j++) {
                            printf(" ");
                        }
                        // Imprime os asteriscos
                        for (j = 1; j <= i; j++) {
                            printf("*");
                        }
                        printf("\n");
                    }
    

    return 0;
}