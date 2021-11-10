/*
@file: aula010-2.case
@author: Joshua Barbosa
@date: 08 Nov 21
@brief: Exercício 2 da aula 10

2) Faça um algoritmo que exiba todos números de 100 a 1.
*/
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){
  int counter; //Declara a variável para o contador;

  for (counter=100; counter>=1; counter--){ //Até que contador seja igual a 1
      printf("Number: %i\n", counter); //Mostre o contador
  }

  return 0;
}//main
