# include <stdio.h>

//Exercício: Como encontrar o maior e o menor entre três números.


int main() {
   int n1,n2,n3,maior,menor;

   printf("\n\tDigite o primeiro numero:  ");
   scanf("%d", &n1);
   getchar();
   printf("\n\tDigite o segundo numero:  ");
   scanf("%d", &n2);
   getchar();
   printf("\n\tDigite o terceiro numero:  ");
   scanf("%d", &n3);
                    if (n1 > n2 && n1 > n3) {
                    maior = n1;
                    } else if (n2 > n1 && n2 > n3) {//se n2 for maior que n1 e n3, entao n2 é o maior
                    maior = n2;
                    } else {
                    maior = n3;
                    }
                    if (n1 < n2 && n1 < n3) {//se n1 for menor que n2 e n3, entao n1 é o menor
                    menor = n1;         
                    } else if (n2 < n1 && n2 < n3) {//se n2 for menor que n1 e n3, entao n2 é o menor
                    menor = n2;
                    } else {
                    menor = n3;
                    }
                    printf("\n\tO maior numero e: %d", maior);
                    printf("\n\tO menor numero e: %d", menor);
    return 0;
}