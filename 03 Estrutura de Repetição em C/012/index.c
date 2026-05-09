# include <stdio.h>


/*
Reproduzir
87. Exercício: Faça uma calculadora para as 4 operações matemáticas com switch case*/


int main() {
   float n1,n2,resultado;
   int op;
   printf("\t----Calculadora----\n");
   printf("\tDigite o primeiro valor :");
   scanf("%f", &n1);
   printf("\tDigite o segundo valor : ");
   scanf("%f", &n2);
   printf("\tEscolha a operacao desejada : \n");
   printf("\t1 - Soma, 2 - Subtracao, 3 - Multiplicacao, 4 - Divisao\n");
   printf("\tdigite a operacao desejada : ");
   scanf("%d", &op);
   switch(op){
             case 1:
             resultado = n1 + n2;
             printf("\tO resultado da operacao escolhida e : %.2f", resultado); 
             break;      ;
             case 2:
             resultado = n1 - n2;
             printf("\tO resultado da operacao escolhida e : %.2f", resultado);
             break;
             case 3:
             resultado = n1 * n2;
             printf("\tO resultado da operacao escolhida e : %.2f", resultado);
             break;
             case 4:
            resultado = n1 / n2;
            printf("\tO resultado da operacao escolhida e : %.2f", resultado);
             break;
             default:
             printf("\tOperacao invalida");                               
   }
                   

    return 0;
}