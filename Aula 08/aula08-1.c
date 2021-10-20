/*
@file: aula08-1.case
@author: Joshua Barbosa
@date: 19 Out 21
@brief: Exercício 1 da aula 8

1) Faça um algoritmo que exiba todos números de 1 a 100.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
  int cont = 0; //Declara a variável para o contador;

  while (cont <= 100){ //Enquanto o contador for menor ou igual a 100
      printf("%i\n", cont); //Mostra o valor de cont para o usuario
      cont++; //Pós incremento;
  } //Fim while


  return 0;
}//main
