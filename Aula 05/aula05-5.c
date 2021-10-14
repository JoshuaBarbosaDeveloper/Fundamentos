/*
@file: aula05-5.case
@author: Joshua Barbosa
@date: 12 Out 21
@brief: Exercício 5 da aula 5

5) Sabendo que a função sqrt(valor), que está na biblioteca math.h retorna
a raiz quadrada do valor, calcule a raiz quadrada de um número que o usuário
 digitar.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  float num; //Declara a variável de um numero;
  float raiz; //Declara a variável para obter a raiz quadrara;

  printf("Qual o numero para obter sua raiz quadrada? \n"); //Exibe para usuário uma pergunta;
  scanf("%f", &num); //Lê a entrada de dado para um numero qualquer;

  raiz = sqrt(num); //Utiliza a função sqrt para obter a raiz quadrada

  printf("A raiz quadrada do numero %.2f eh: %.2f\n", num, raiz); //Exibe a a raiz quadrada para o usuario
  return 0;
}//main
