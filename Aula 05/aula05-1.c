/*
@file: aula05-1.case
@author: Joshua Barbosa
@date: 12 Out 21
@brief: Exercício 1 da aula 5

1)  Faça um programa que receba a altura de uma pessoa e calcule e exiba seu
 peso ideal utilizando a seguinte:peso ideal = 72.7 x altura – 58
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
  float altura; //Declara a variável para altura
  float pesoIdeal; //Declara a variável para calcular o peso ideal
  printf("Qual a sua altura (em m)? "); //Exibe para usuário uma pergunta
  scanf("%f", &altura); //Lê a entrada de dado para a altura
  pesoIdeal = 72.7*altura-58; //Calcula o peso ideal e atribui o valor para a variável
  printf("O seu peso ideal eh de %.2f kg\n",pesoIdeal); //Exibe para o usuário seu peso ideal
  return 0;
}//main
