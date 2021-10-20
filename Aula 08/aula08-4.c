/*
@file: aula08-4.case
@author: Joshua Barbosa
@date: 20 Out 21
@brief: Exercício 4 da aula 8

4) Crie um algoritmo que exiba todos os números pares entre 240 e 730 inclusive.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
  int cont = 240; //Declara a variável para o contador;

  while (cont <= 730){ //Enquanto o contador for menor ou igual 730
      if (cont%2 == 0){ //Se o resto de cont/2 for igual a 0
          printf("%i\n", cont); //Mostra o valor de cont para o usuario
      }
      cont++; //Pós decremento;
  } //Fim while


  return 0;
}//main
