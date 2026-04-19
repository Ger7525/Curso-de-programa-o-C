# include <stdio.h>
# include <stdlib.h>

// Decisão aninhada na linguagem C



int main (int argc, char *argv[]) {
    
  if(5<10) {
    printf("5 é menor que 10\n");
                    if(10<15) {
                      printf("10 é menor que 15\n");
                    }
                    else {
                      printf("10 não é menor que 15\n");
                    }
                }
 else {   printf("5 não é menor que 10\n");
 }                   








    return 0;
}
