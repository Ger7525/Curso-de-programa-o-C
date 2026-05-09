# include <stdio.h>


/*Exercício: Leia um valor N e apresente o quadrado de cada valor par de 1 até N.*/

int main() {
    int n,i;
    printf("Digite um valor inteiro: ");
    scanf("%d", &n);

    for(i=2; i<=n; i+=2){
        printf("%d ", i*i);
    }
                   

    return 0;
}