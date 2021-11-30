/*
@file: aula12-1.case
@author: Joshua Barbosa
@date: 20 Nov 21
@brief: Exercício 1 da aula 12

1) Crie uma matriz identidade com dimensões 5 x 5;
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  //Declara uma variável para matriz;
  int matrizI[5][5] = {{1, 0, 0, 0, 0}, {0, 1, 0, 0, 0}, {0, 0, 1, 0, 0}, {0, 0, 0, 1, 0}, { 0, 0, 0, 0, 1}};
  //Declara variável para linha e coluna;
  int line, column;

  //Exibir a linha da matriz
  for (line=0; line<5; line++){
      //Exibir a coluna da matriz
      for (column=0; column<5; column++){
          //Exibe o valor da matrizI na cordenada linha e coluna
          printf(" %d", matrizI[line][column]);
      }
      //Pula linha
      printf("\n\n");

  }
  return 0;
}//main
