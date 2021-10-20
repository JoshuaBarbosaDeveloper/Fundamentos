/*
@file: aula08-3.case
@author: Joshua Barbosa
@date: 20 Out 21
@brief: Exercício 3 da aula 8

3) Crie um algoritmo que exiba todos os números múltiplos de 3 no intervalo
 de 1 a 322.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
  int cont = 1; //Declara a variável para o contador;

  while (cont < 322){ //Enquanto o contador for menor que 322
      if (cont%3 == 0){ //Se o resto de cont/3 for igual a 0
          printf("%i\n", cont); //Mostra o valor de cont para o usuario
      }
      cont++; //Pós decremento;
  } //Fim while


  return 0;
}//main
