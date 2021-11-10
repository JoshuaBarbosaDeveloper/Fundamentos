/*
@file: aula010-8.case
@author: Joshua Barbosa
@date: 08 Nov 21
@brief: Exercício 8 da aula 10

8) Utilizando a estrutura do laço for aninhado, crie um programa que exiba a
tabuada de todos os números de 1 a 10.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int counter, number, counter_two; //Declara a variável para o contador;

  for (counter=1; counter<=10; counter++){ //Enquanto contador for menor que 10

      printf("Tabuada do %i:\n", counter); //Exibe um texto

      for (counter_two=1; counter_two<=10; counter_two++){ //Enquanto o contador 2 for menor que 10;

          printf("%i x %i = %i\n", counter, counter_two, counter*counter_two); //Exibe a multiplicação;

      }
      printf("\n");
  }

  return 0;
}//main
