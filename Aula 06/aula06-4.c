/*
@file: aula06-1.case
@author: Joshua Barbosa
@date: 14 Out 21
@brief: Exercício 4 da aula 6

4) Faça um programa que calcule o imposto de renda a ser pago tendo como entrada o salário de um empregado. O imposto deve
ser calculado da seguinte maneira:imposto =  salário x alíquota – parcela da dedução
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  float salario, imposto; //Declara a variável para o solario e o imposto;

  //Pergunta para o usuário e lê o valor de seu salario
  printf("Qual seu salario? ");
  scanf("%f", &salario);

  if(salario <= 1903.98){ //Caso o salario seja menor ou igual a 1903.98 reais, a linha de baixo será executada
    imposto = salario * 0 - 0; //Calcula o valor do imposto

  } else if (salario >= 1903.99 && salario <= 2826.65){ //Se não se adequar a condição de cima, verifica esse nova...
    imposto = salario * 0.075 - 142.80; //Sendo verdadeiro, essa linha executará calculando o valor do imposto

  } else if (salario >= 2826.66 && salario <= 3751.05){ //Se não se adequar a condição de cima, verifica esse nova...
    imposto = salario * 0.15 - 354,80; //Sendo verdadeiro, essa linha executará calculando o valor do imposto

  } else if (salario >= 3751.06 && salario <= 4664.68){ //Se não se adequar a condição de cima, verifica esse nova...
    imposto = salario * 0.225 - 636.13; //Sendo verdadeiro, essa linha executará calculando o valor do imposto

  } else if (salario > 4664.68){ //Se não se adequar a condição de cima, verifica esse nova...
    imposto = salario * 0.275 - 869.36; //Sendo verdadeiro, essa linha executará calculando o valor do imposto
  }

  printf("O valor do imposto eh de %.2f reais\n", imposto); //Mostra para o usuário o valor do imposto que tal deverá pagar

  return 0;
}//main
