# include <stdio.h>

// Exercício 5: Uma empresa contrata um encanador a R$ 45,00 por dia. Faça um programa que solicite o número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga, sabendo que são descontados 8% para imposto de renda.



int main() {
     int dias_trabalhados;
     float valor_dia = 45.0;
     float salario_bruto, salario_liquido, imposto;

    printf("Digite o número de dias trabalhados: ");
    scanf("%d", &dias_trabalhados);

    salario_bruto = dias_trabalhados * valor_dia;
    imposto = salario_bruto * 0.08;
    salario_liquido = salario_bruto - imposto;


    printf("Salário bruto: R$ %.2f\n", salario_bruto);
    printf("Imposto de renda: R$ %.2f\n", imposto);
    printf("Salário líquido: R$ %.2f\n", salario_liquido);

    return 0;
}