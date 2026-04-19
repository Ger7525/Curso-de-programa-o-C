# include <stdio.h>

//Operador lógico e (&&) na linguagem C (Conjunção).
/*
                    tabela verdade
a<b                   c<d                a<b && c<d         
 v                     v                     v
 v                     f                     f
 f                     v                     f
 f                     f                     f


*/


int main(){
int a,b,c,d;
a = 1;
b = 2;
c = 3;

if(a<b && c<d){
      printf("verdadeiro\n");
}
else{
      printf("Falso");
}

if(a>b && c<d){
      printf("verdadeiro\n");
}
else{
      printf("Falso");
}







                    return 0;
}



