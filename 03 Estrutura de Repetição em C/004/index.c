# include <stdio.h>


/*Estrutura de repetição while (enquanto).*/

int main() {
   int x;
   printf("Digite um numero inteiro: ");
   scanf("%d", &x);

   while(x<1 ||x>99) {
      printf("Numero invalido. Digite um numero inteiro entre 1 e 99: ");
      scanf("%d", &x);
   }
   
   
   
   printf("Número válido: %d\n", x);
   
   
                    
    return 0;
}
