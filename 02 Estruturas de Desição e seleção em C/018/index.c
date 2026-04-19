# include <stdio.h>
# include <stdlib.h>


/*Parar
64. Exercício: Conversão cambial de Real para Dólar ou de Dólar para Real.*/

int main()
{
   float valor, real,dolar;
   int opicao;

   printf("\t Escolha 1 se quiser converter de de Dolar para Real ou 2 se quiser converter de Real para Dolar: ");
   scanf("%d", &opicao);

   printf("\t Digite o valor que voce deseja converter: ");
   scanf("%f", &valor);

   switch(opicao){
      case 1:
         real = valor * 4.99;
         printf(" a conversao de U$: %.2f Dolares e R$:  %.2f Reais", valor, real);
         break;
      case 2:
         dolar = valor / 4.99;
         printf(" a conversao de R$: %.2f Reais e U$:  %.2f Dolares", valor, dolar);
         break;
      default:
         printf(" Opcao invalida!");
   }
   
   
    
    
                    return 0;
}
