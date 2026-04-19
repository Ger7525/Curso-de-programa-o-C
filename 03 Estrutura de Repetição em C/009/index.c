# include <stdio.h>


//Exercício: Faça um programa para somar as notas de um aluno e calcular sua média. O programa deve solicitar ao usuário a quantidade de notas, ler as notas e exibir a média final.


int main() {
                    int quantidadeNotas;
                    float nota, soma = 0.0, media;

                    printf("Digite a quantidade de notas: ");
                    scanf("%d", &quantidadeNotas);

                    for (int i = 0; i < quantidadeNotas; i++) {
                        printf("Digite a nota %d: ", i + 1);
                        scanf("%f", &nota);
                        soma += nota;
                    }

                    media = soma / quantidadeNotas;

                    printf("A média final é: %.2f\n", media);

    return 0;
}