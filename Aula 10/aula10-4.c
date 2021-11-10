/*
@file: aula010-4.case
@author: Joshua Barbosa
@date: 08 Nov 21
@brief: Exercício 4 da aula 10

4) Crie um algoritmo que exiba todos os números pares entre 240 e 730 inclusive.*/
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){
  int counter; //Declara a variável para o contador;

  for (counter=240; counter<=730; counter++){ //Até que contador seja igual a 730
      if (counter%2==0){ //Se o resto da divisao por 2 do contador for igual a 0;
          printf("Number: %i\n", counter); //Mostre o contador
      }
  }

  return 0;
}//main
