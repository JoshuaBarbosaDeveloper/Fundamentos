/*
@file: ex05.case
@author: Joshua Barbosa
@date: 25 Out 21
@brief: Exercício 5  da lista de exercícios

5) Faça um programa que receba 2 números referentes ao numerador e denominador
de uma fração e informe se é uma fração própria, imprópria, ou aparente
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){

  float numerador, denominador;  //Declara a variável para o numerador e denominador;
  //setbuf(stdin, NULL); - Apagar o buffer

  printf("Insira a fracao (x/y): "); //Exibe uma pergunta para o usuário
  scanf("%f/%f", &numerador, &denominador); //Lê o denominador

  if ((int)numerador%(int)denominador == 0) {
      printf("%.2f/%.2f eh uma fracao aparente!\n", numerador, denominador);
  } else if (numerador < denominador) {
      printf("%.2f/%.2f eh uma fracao propria!\n", numerador, denominador);
  } else if (numerador > denominador) {
      printf("%.2f/%.2f eh uma fracao impropria!\n", numerador, denominador);
  }

  return 0;
}//main
