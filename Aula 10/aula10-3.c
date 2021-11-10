/*
@file: aula010-3.case
@author: Joshua Barbosa
@date: 08 Nov 21
@brief: Exercício 3 da aula 10

3) Crie um algoritmo que exiba todos os números múltiplos de 5 no intervalo de 1 a 500.
*/
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){
  int counter; //Declara a variável para o contador;

  for (counter=1; counter<=500; counter++){ //Até que contador seja igual a 500
      if (counter%5==0){ //Se o resto da divisao por 5 do contador for igual a 0;
          printf("Number: %i\n", counter); //Mostre o contador
      }
  }

  return 0;
}//main
