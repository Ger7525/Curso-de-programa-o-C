# include <stdio.h>


// Exerciccio 4
// Escreva um programa que leia um valor de despesa de restaurante, o valor da gorjeta (em porcentagem) e o número de pessoas para dividir a conta. Imprima o valor que cada um deve pagar. Assuma que a conta será dividida igualmente entre as pessoas.



int main() {
                    float despesa, gorjeta;
                    int pessoas;
                    printf("\tDigite o valor da despesa do restaurante: ");
                    scanf("%f", &despesa);
                    getchar(); // Limpar o buffer de entrada
                    printf("\tDigite o valor da gorjeta (em porcentagem): ");
                    scanf("%f", &gorjeta);
                    getchar(); // Limpar o buffer de entrada
                    printf("\tDigite o número de pessoas para dividir a conta: ");
                    scanf("%d", &pessoas);

                    gorjeta = (gorjeta/100) * despesa; // Calcula o valor da gorjeta
                    despesa = despesa / pessoas; // Calcula o valor da despesa por pessoa

                    printf("\tCada pessoa deve pagar: %.2f\n", despesa);
                    printf(" \tValor da gorjeta: %.2f\n", gorjeta);
   






    return 0;
}
