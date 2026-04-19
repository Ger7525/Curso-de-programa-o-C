# include <stdio.h>
# include <stdlib.h>

/*

 Exercício: Calcular o índice de massa corporal (IMC).
*/


int main()
{
        char nome[50];
        float peso, altura, imc;
                    
                     
                    
                    printf(" Digite seu nome :");
                    scanf("%s", nome);
                    getchar(); // Limpar o buffer do teclado
                    printf(" Digite seu peso :");
                    scanf("%f", &peso);
                    getchar(); // Limpar o buffer do teclado
                    printf(" Digite sua altura :");
                    scanf("%f", &altura);

                    imc = peso / (altura * altura);

                    if(imc < 18.5)
                    {
                        printf(" %s, seu IMC e %.2f e voce esta abaixo do peso ideal.\n", nome, imc);
                    }
                    else if(imc >= 18.5 && imc < 24.9)
                    {
                        printf(" %s, seu IMC e %.2f e voce esta com o peso ideal.\n", nome, imc);
                    }
                    else if(imc >= 25 && imc < 29.9)
                    {
                        printf(" %s, seu IMC e %.2f e voce esta com sobrepeso.\n", nome, imc);
                    }
                    else if(imc >= 30 && imc < 34.9)
                    {
                        printf(" %s, seu IMC e %.2f e voce esta com obesidade grau I.\n", nome, imc);
                    }
                    else if(imc >= 35 && imc < 39.9)
                    {
                        printf(" %s, seu IMC e %.2f e voce esta com obesidade grau II.\n", nome, imc);
                    }       
                    
                    
                    
                  
    
    return 0;
}
