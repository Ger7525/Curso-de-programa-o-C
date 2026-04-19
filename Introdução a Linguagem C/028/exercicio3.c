# include <stdio.h>

// exercicio 3
// Trocar os valores de duas variáveis sem usar uma variável auxiliar.




int main() {
   int a = 10, b = 20;

    printf("Antes da troca: a = %d, b = %d\n", a, b);

    // Trocar os valores usando operações aritméticas
    a = a + b; // a agora é 30
    b = a - b; // b agora é 10
    a = a - b; // a agora é 20

    printf("Depois da troca: a = %d, b = %d\n", a, b);

    return 0;
}
