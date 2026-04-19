# include <stdio.h>


/* Estrutura de repetição for com incremento diferente de 1.*/

int main()
{
    int i,x;
    printf("Digite um numero inteiro: ");
    scanf("%d", &x);

    for(i=x;i<=10;i+=1){
        printf("%d \n", i);
    }
    for(i=x;i>=0;i-=1){
        printf("\t%d\n ", i);
    }

    return 0;
}
