# include <stdio.h>

// somei dois numeros inteiros positivos e o resultado saiu negativo porque o resultado ultrapassou o limite do tipo inteiro, ou seja, ocorreu um estouro de inteiro (integer overflow).



int main(){
            int a, b, c;

            a = 272429306847; // 2 bilhões
            b = 1;
            c= a+b;
            printf("a=%d, b=%d, c=%d\n", a, b, c); // Isso pode imprimir um valor negativo devido ao estouro de inteiro
    










    return 0;
}