/*
@file: aula12-5.case
@author: Joshua Barbosa
@date: 20 Nov 21
@brief: Exercício 5 da aula 12

Exercício 5) Faça um programa que some as matrizes A e B, gerando C
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  //Declara uma variável 3x3 para matriz;
  int matrizA[2][3] = {{3, 7, 10}, {1, 5, 0}};
  int matrizB[2][3] = {{2, 3, 4}, {6, 0, 2}};
  int matrizC[2][3];
  //Declara variável para linha e coluna;
  int line, column;

  //Soma das matrizes A e B;
  for (line=0; line<2; line++){
      for (column=0; column<3; column++){
          //Realiza a soma das matrizes
          matrizC[line][column] = matrizA[line][column] + matrizB[line][column];
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
