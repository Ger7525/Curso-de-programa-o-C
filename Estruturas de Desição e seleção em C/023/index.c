# include <stdio.h>
# include <stdlib.h>

/*
. Exercício: Como calcular a média aritmética e ponderada.*/



int main()
{
             float n[3], m_aritimetica, m_ponderada; 
             int opcao;    
                  
                    printf("\n\tExercicio de Media Aritimetica e ponderada /n");
                    printf("\n\tDigite a primeira nota: ");
                    scanf("%f", &n[0]);
                    getchar();
                    printf("\n\tDigite a segunda nota: ");
                    scanf("%f", &n[1]);
                    getchar();
                    printf("\n\tDigite a terceira nota: ");
                    scanf("%f", &n[2]);
                    printf("\n\tDigite 1 para media aritimetica ou 2 para media ponderada: ");
                    scanf("%d", &opcao);

                    switch(opcao){
                          case 1:
                                m_aritimetica = (n[0] + n[1] + n[2]) / 3;
                                printf("A media aritimetica e: %.2f", m_aritimetica);
                                break;
                          case 2:
                                m_ponderada = (n[0] * 2 + n[1] * 3 + n[2] * 5) / 10;
                                printf("A media ponderada e: %.2f", m_ponderada);
                                break;
                    }
                    if(m_aritimetica > 7 || m_ponderada > 7){
                          printf("\n\tAluno aprovado!");
                    } else {
                          printf("\n\tAluno reprovado!");
                    }

   
    
    
    
    
    
    
    
    return 0;
}
