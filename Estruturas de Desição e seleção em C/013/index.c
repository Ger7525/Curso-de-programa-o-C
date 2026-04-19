# include <stdio.h>


//Estrutura de seleção switch case com caracteres.
//O programa lê um caractere do usuário e exibe uma mensagem correspondente com base no valor do caractere.

int main() {
                    char letra;
                    printf("Digite uma letra: ");
                    scanf(" %c", &letra);

                    switch (letra) {
                        case 'a':
                            printf("A letra e a\n");
                            break;
                        case 'e':
                            printf("A letra e e\n");
                            break;
                        case 'i':
                            printf("A letra e i\n");
                            break;
                        case 'o':
                            printf("A letra e o\n");
                            break;
                        case 'u':
                            printf("A letra e u\n");
                            break;
                        default:
                            printf("A letra nao e uma vogal\n");
                    }
   

   
   
   
   
   
   
   
   
   
   
   
   
    return 0;
}