# include <stdio.h>


//Exercício: Contando números positivos e negativos.



int main(){
                    int n, positivos = 0, negativos = 0;
                    printf("Digite um numero inteiro (0 para sair): ");
                    while (1) {// Loop infinito, será interrompido quando o usuário digitar 0
                        scanf("%d", &n);// Lê um número inteiro do usuário
                        if (n == 0) {// Se o número for 0, sai do loop
                            break;
                        } else if (n > 0) {
                            positivos++;
                        } else {
                            negativos++;
                        }
                        printf("Digite um numero inteiro (0 para sair): ");// Solicita outro número ao usuário
                    }
                    printf("Quantidade de numeros positivos: %d\n", positivos);
                    printf("Quantidade de numeros negativos: %d\n", negativos);



                    return 0;
}