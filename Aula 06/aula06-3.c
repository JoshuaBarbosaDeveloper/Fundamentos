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
  float numA, numB, numC, x1, x2, delta; //Declara a variável para os termos necessários;

  //Pergunta para o usuários quais os termos A B c
  printf("Qual o numero A? ");
  scanf("%f", &numA);
  printf("Qual o numero B? ");
  scanf("%f", &numB);
  printf("Qual o numero C? ");
  scanf("%f", &numC);

  delta = numB*numB - 4*numA*numC; //Realiza o cálculo do delta da equação;

  x1 = (-numB + sqrt(delta)) /(2*numA); //Realiza o cálculo para obter o x1;
  x2 = (-numB - sqrt(delta)) /(2*numA); //Realiza o cálculo para obter o x2;

  if (delta < 0){ //Caso o o delta seja inferior a 0
    printf("Essa equacao nao possui raizes\n"); //Mostra essa mensagem para o usuário
  } else { //Caso não seja
    printf("\nx1: %.2f\n", x1); //Essa mensagem será mostrada
    printf("x2: %.2f\n", x2);
  }

  return 0;
}//main
