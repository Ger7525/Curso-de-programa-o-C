# include <stdio.h>

/*Exercício: Repita a leitura de uma senha até que seja válida.*/

int main() {
    int senha = 1234; // senha correta
    int tentativa;
        do{
            printf("Digite a senha: ");
            scanf("%d", &tentativa);
            if (tentativa != senha) {
                printf("Senha incorreta. Tente novamente.\n");
            }
        }while(tentativa != senha);
    printf("Senha correta! Acesso concedido.\n");
                  
                    

    return 0;
}
