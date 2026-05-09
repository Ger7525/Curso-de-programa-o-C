# include <stdio.h>

/*Exercício: Imprima na tela todos os múltiplos de 7 entre 1 e 9999.*/

int main() {
                    int i;
                    printf("Multiplos de 7 entre 1 e 9999:\n");
                    for (i = 1; i <= 9999; i++) {
                        if (i % 7 == 0) {
                            printf("%d ", i);
                        }
                    }

    

    return 0;
}