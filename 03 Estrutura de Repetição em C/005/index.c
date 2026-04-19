# include <stdio.h>


/*Estrutura de repetição do while (faça enquanto).*/


int main() {
  int x;

  do{
 printf("Digite um numero: ");
 scanf("%d", &x);
  }while(x<1 ||x>99);

  printf("O numero digitado foi: %d", x);
   






    return 0;
}
