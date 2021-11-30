/*
@file: aula011-4.case
@author: Joshua Barbosa
@date: 15 Nov 21
@brief: Exercício 4 da aula 11

4) Crie e inicialize um vetor de inteiros de tamanho 8. Faça a soma dos seus
elementos, e apresente o resultado.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int vectorA[8], counter, sum_vector = 0; //Declara as variáveis para contadores e vetores;

  for (counter=0; counter<8; counter++){ //Enquanto contador for menor que 8

      printf("Valor %d do vetor: ", counter+1); //Exibe um texto
      scanf("%d", &vectorA[counter]); //Lê o valor para o vetor A na posição do contador

      sum_vector = sum_vector + vectorA[counter]; //Realiza a soma
  }

  printf("Soma: %d", sum_vector); //Exibe o valor do vetor sum_vector
  printf("\n" );

  return 0;
}//main
