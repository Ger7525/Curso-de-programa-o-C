# include <stdio.h>


// Estrutura de seleção switch case.
// O switch case é uma estrutura de controle de fluxo que permite executar diferentes blocos de código com base no valor de uma expressão. Ele é frequentemente usado como uma alternativa ao uso de múltiplas instruções if-else quando se tem várias condições a serem verificadas.

int main()
{
    int cod;
    printf("Digite o codigo do mes (1-3): ");
    scanf("%d", &cod);

   
    switch (cod)
    {
    case 1:
       printf("janeiro\n");
    break;
    case 2:
       printf("fevereiro\n");
    break;
    case 3:
       printf("marco\n");
    break;
    default:
       printf("mes invalido\n");
    }









    return 0;
}