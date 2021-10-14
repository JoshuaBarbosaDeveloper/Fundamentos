/*
@file: aula05-3.case
@author: Joshua Barbosa
@date: 12 Out 21
@brief: Exercício 3 da aula 5

3) Tendo como entrada de dados o total vendido por um funcionário no mês,
calcule a sua comissão e o salário bruto no mês. Para isso, considere um
salário base de R$1.200,00 e comissão de 10% sobre o total vendido.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
  float totalVendido; //Declara a variável para o total de vendas
  float salarioTotal; //Declara a variável para o salário total

  printf("Qual o total vendido? "); //Exibe para usuário uma pergunta
  scanf("%f", &totalVendido); //Lê a entrada de dado para o ano atual

  salarioTotal = (totalVendido*0.10) + 1200; //Faz a conta da comissao de vendas com seu salario base

  printf("O seu salario desse mes eh de %.2f reais.\n", salarioTotal); //Exibe para o seu salario total
  return 0;
}//main
