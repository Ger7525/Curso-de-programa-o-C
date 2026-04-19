# include <stdio.h>


// Operador lógico ou (||) na linguagem C (Disjunção)
//Equivalente ao ou na linguagem portuguesa.
 /*                  tabela verdade
a<b                 c<d                 a<b || c<d
 v                   v                       v
 v                   f                       v
 f                   v                       v
 f                   f                       f
 
 */
int main(){
                    int a=1,b=2,c=3,d=4;
                    if(a>b || c>d){
                                        printf("verdadeiro\n");
                    }
                    else{
                                        printf("falso\n");
                    }









                    return 0;
}
