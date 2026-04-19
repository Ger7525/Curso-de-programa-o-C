# include <stdio.h>
# include <stdlib.h>


// . Exercício: Leia um número e informe se ele é divisível por 2, por 3 e por 6. -


int main()
{
     int numero;
     printf("Digite um numero: ");
     scanf("%d", &numero);

     if (numero % 2 == 0)
     {
          printf("O numero e divisivel por 2.\n");
     }
     else
     {
          printf("O numero nao e divisivel por 2.\n");
     }

     if (numero % 3 == 0)
     {
          printf("O numero e divisivel por 3.\n");
     }
     else
     {
          printf("O numero nao e divisivel por 3.\n");
     }

     if (numero % 6 == 0)
     {
          printf("O numero e divisivel por 6.\n");
     }
     else
     {
          printf("O numero nao e divisivel por 6.\n");
     }

    return 0;
}












