# include <stdio.h>

/* Exercício: Faça um programa para ler um número inteiro n e dizer se ele é primo*/

int main() {
    int valor, i, opicao, divisores = 0;
    do{
                    printf("Digite um numero inteiro: ");
                    scanf("%d", &valor);
    while(valor < 2){
                    printf("Valor invalido, digite um numero inteiro maior ou igual a 2: ");
                    scanf("%d", &valor);
            for ( i = 1; i <=valor; i++)
            if(valor % i == 0)
                                        divisores++;
                      
    }    
    if(divisores == 2){
                                                               printf("O numero %d e   primo",valor);
                                                         }                                                        else{
                                                           printf("O numero %d nao e primo", valor);
                                        
                    
    return 0;
}
