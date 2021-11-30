/*
@file: aula12-4.case
@author: Joshua Barbosa
@date: 20 Nov 21
@brief: Exercício 4 da aula 12

Exercício 4) Faça um programa que multiplique por 5 a matriz A  (preenchida a
partir do teclado) para gerar a matriz C.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  //Declara uma variável 3x3 para matriz;
  int matrizA[2][3] = {{3, 7, 10}, {1, 5, 0}};
  int matrizC[2][3];
  //Declara variável para linha e coluna;
  int line, column;

  //Multiplicar a Matriz A;
  for (line=0; line<2; line++){
      for (column=0; column<3; column++){
          //Realiza a multiplicação
          matrizC[line][column] = matrizA[line][column]*5;
      }
  }

  printf("Matriz C:\n");
  //Exibir a linha da matriz
  for (line=0; line<2; line++){
      //Exibir a coluna da matriz
      for (column=0; column<3; column++){
          //Exibe o valor da matrizI na cordenada linha e coluna
          printf(" %d", matrizC[line][column]);
      }
      //Pula linha
      printf("\n\n");
  }



  return 0;
}//main
