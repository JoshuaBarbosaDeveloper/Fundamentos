/*
@file: ex01.case
@author: Joshua Barbosa
@date: 21 Out 21
@brief: Exercício 1 da aula 9

1) Sabendo-se que 200 quilowatts de energia custa um quarto do salário mínimo,
 faça um programa que receba o valor do salário mínimo e a quantidade de
 quilowatts gasta por uma residência e mostre:
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
  float salario = 0, quilowatts=0, cadaQuilowatts, quilowattsGasto, comDesconto;  //Declara a variável para contador, valores e para os calculos;
  //Salario minimo: 1.192,40
  //1/4 Salario minimo: 298.1
  //setbuf(stdin, NULL); - Apagar o buffer

  printf("Qual o valor do salario minimo? "); //Exibe uma pergunta para o usuário
  scanf("%f", &salario); //Lê o salário

  printf("Qual a quantidade gasta de quilowatts? "); //Exibe uma pergunta para o usuário
  scanf("%f", &quilowatts); //Lê o quilowatts gasto

  cadaQuilowatts = (0.25*salario)/200; //Calcula o valor de cada quilowatts
  printf("\nValor em reais de cada quilowatts: %.2f\n", cadaQuilowatts); //Exibe para o usuário

  quilowattsGasto = cadaQuilowatts*quilowatts; //Calcula o valor de quilowatts gastos;
  printf("Valor em reais a ser pago pelos quilowatts gasto: %.2f\n", quilowattsGasto); //Exibe para o usuário

  comDesconto = quilowattsGasto - (quilowattsGasto*0.12); //Calcula o valor com desconto;
  printf("Valor a ser pago com um desconto de 12%: %.2f\n", comDesconto); //Exibe para o usuário




  return 0;
}//main
