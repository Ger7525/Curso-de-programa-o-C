# include <stdio.h>

// Qual é o tamanho de memoria de um float?
// o tipo float não tem nenhum operador de extensão, ou seja, ele é um tipo de dado primitivo que ocupa um espaço fixo na memória. O tamanho de um float é geralmente de 4 bytes (32 bits) em muitas implementações de C, mas isso pode variar dependendo do sistema e do compilador utilizado.

int main() {
   float nota = 9.5;
  long
   double nota3 = 9.5;



                    printf("\n\to Tamanho de memoria de um double: %d bytes\n", sizeof(nota3));
                    printf("\n\to Tamanho de memoria de um float: %d bytes\n", sizeof(nota));
                    printf("\n\to Tamanho de memoria de um long: %d bytes\n", sizeof(long));
                 
   
   
   
   
   
   
   
   
   
   
    return 0;
}