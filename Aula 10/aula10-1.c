/*
@file: aula010-1.case
@author: Joshua Barbosa
@date: 08 Nov 21
@brief: Exercício 1 da aula 10

1) Faça um algoritmo que exiba todos números de 1 a 100.
*/
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){
  int counter; //Declara a variável para o contador;

  for (counter=1; counter<=100; counter++){ //Até que contador seja igual a 100
      printf("Number: %i\n", counter); //Mostre o contador
  }

  return 0;
}//main
