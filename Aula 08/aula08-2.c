/*
@file: aula08-2.case
@author: Joshua Barbosa
@date: 20 Out 21
@brief: Exercício 2 da aula 8

2) Faça um algoritmo que exiba todos números de 1 a 100.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
  int cont = 100; //Declara a variável para o contador;

  while (cont >= 1){ //Enquanto o contador for maior ou igual a 1
      printf("%i\n", cont); //Mostra o valor de cont para o usuario
      cont--; //Pós decremento;
  } //Fim while


  return 0;
}//main
