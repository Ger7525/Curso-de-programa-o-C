# include <stdio.h>
# include <stdlib.h>

/*Exercício: Leia um inteiro e diga se corresponde a um mês válido no calendário*/



int main()
{
   int opcao;

   printf("Digite um inteiro de 1 a 12 para verificar sua  corresponde a um mes valido no calendario: ");
   scanf("%d", &opcao);

   switch(opcao){
                    case 1:
                        printf("Janeiro");
                        break;
                    case 2:
                        printf("Fevereiro");
                        break;
                    case 3:
                        printf("Março");
                        break;
                    case 4:
                        printf("Abril");
                        break;
                    case 5:
                        printf("Maio");
                        break;
                    case 6:
                        printf("Junho");
                        break;
                    case 7:
                        printf("Julho");
                        break;
                    case 8:
                        printf("Agosto");
                        break;
                    case 9:
                        printf("Setembro");
                        break;
                    case 10:
                        printf("Outubro");
                        break;
                    case 11:
                        printf("Novembro");
                        break;
                    case 12:
                        printf("Dezembro");
                        break;
                    default:
                        printf("Mês invalido!");
   }



    return 0;
}