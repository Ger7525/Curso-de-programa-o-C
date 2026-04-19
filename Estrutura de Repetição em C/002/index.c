# include <stdio.h>

/*Estrutura de repetição for decrescente*/

int main() {
  int i,x;
  printf("Digite um numero: ");
  scanf("%d", &x);

  for (i = x; i >= 0; i--) {
    printf("%d\n", i);
  }

    return 0;
}