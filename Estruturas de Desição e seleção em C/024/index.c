# include <stdio.h>

/* Exercício: Dados três valores verifique se formam um triângulo.
equilátero são os três lados iguais 
escaleno são os três lados diferentes
isósceles são dois lados iguais */



int main(){
     int a, b, c;
     printf("Digite os tres lados do triangulo: ");
     scanf("%d %d %d", &a, &b, &c);
                    if (a == b && b == c) {
                    printf("O triangulo e equilatero.\n");
                    } else if (a != b && b != c && a != c) {
                    printf("O triangulo e escaleno.\n");
                    } else {
                    printf("O triangulo e isosceles.\n");
                    }
  

     return 0;
}