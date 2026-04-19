#include <stdio.h>

int main() {
   
    //como fazer leituras de caracteres em c via teclado com a função scanf
    
	
	char nome[50];
   
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Ola, %s!\n", nome);
    
                    
    return 0;
}
