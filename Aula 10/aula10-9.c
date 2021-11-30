/*
@file: aula010-9.case
@author: Joshua Barbosa
@date: 09 Nov 21
@brief: Exercício 9 da aula 10

9) Desenvolva um programa que receba um numero tamanho e exiba um quadrado de
tamanho tamanho utilizando o carácter  #
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int counter, counter_two, size; //Declara a variável para o contador;

  printf("Digite o tamanho: ");
  scanf("%i", &size);

  printf("\n");

  for (counter=1; counter<=size; counter++){ //Enquanto contador for menor que size

      printf("# "); //Exibe #;

      for (counter_two=1; counter_two<size; counter_two++){ //Enquanto o contador 2 for menor que size;

          printf("# "); //Exibe #;

      }
      printf("\n");
  }

  printf("\n");

  return 0;
}//main
