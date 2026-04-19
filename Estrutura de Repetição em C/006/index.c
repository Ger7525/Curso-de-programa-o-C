# include <stdio.h>


/*.  Exercicio: Leia um número e calcule e imprima na tela sua tabuada.*/

int main()
{
    int num, i;

    printf("Digite um numero para calcular a tabuada: ");
    scanf("%d", &num);

    for(i=1; i<=10; i++)
    {
        printf("%d x %d = %d\n", num, i, num*i);
    }
    
    
    
    
    
    return 0;
}