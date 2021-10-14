/*
@file: aula06-1.case
@author: Joshua Barbosa
@date: 14 Out 21
@brief: Exercício 2 da aula 6

3) Faça um programa que receba os coeficientes a, b e c de uma equação do
segundo grau e retorne as raízes da equação (se existirem).Para isso, lembre-se
 da fórmula de Báskara:
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  float salario, imposto; //Declara a variável para o solario e o imposto;

  //Pergunta para o usuário e lê o valor de seu salario
  printf("Qual seu salario? ");
  scanf("%f", &salario);

  if(salario <= 1903.98){
    imposto = salario * 0 - 0;

  } else if (salario >= 1903.99 && salario <= 2826.65){
    imposto = salario * 0.075 - 142.80;

  } else if (salario >= 2826.66 && salario <= 3751.05){
    imposto = salario * 0.15 - 354,80;

  } else if (salario >= 3751.06 && salario <= 4664.68){
    imposto = salario * 0.225 - 636.13;

  } else if (salario > 4664.68){
    imposto = salario * 0.275 - 869.36;
  }

  printf("O valor do imposto eh de %.2f reais\n6", imposto);

  return 0;
}//main
