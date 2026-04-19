# include <stdio.h>
# include <locale.h>

// Acentuação e a tabela ascii.
// O código abaixo é um exemplo de como usar a função setlocale para configurar a localidade do programa, permitindo o uso de acentuação e caracteres especiais da tabela ASCII. A função setlocale é parte da biblioteca <locale.h> e é usada para definir a localidade do programa, que afeta a forma como os caracteres são interpretados e exibidos.
// 1º = setlocale(LC_ALL, NULL); - padrão da linguagem C, sem acentuação.
//2º = setlocale(LC_ALL, "C"); - padrão do sistema operacional, com acentuação e caracteres especiais da tabela ASCII.
// 3º = setlocale(LC_ALL, "Portuguese"); - localidade específica para o idioma português, com acentuação e caracteres especiais da tabela ASCII.



int main() {
                   
 setlocale(LC_ALL, "portuguese");

     
printf("Cora��o\n");

    
    return 0;
}
