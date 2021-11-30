/*
@file: aula12-6.case
@author: Joshua Barbosa
@date: 20 Nov 21
@brief: Exercício 6 da aula 12

Exercício 6 ) Faça um programa que multiplique as matrizes A e D abaixo gerando matriz AD
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  //Declara uma variável 3x3 para matriz;
  int matrizA[2][3] = {{3, 7, 10}, {1, 5, 0}};
  int matrizD[3][2] = {{1, 2}, {5, 6}, {2, 3}};
  int matrizAD[2][2] = {0, 0, 0, 0};
  //Declara variável para linha e coluna;
  int line, column, cell;

  //Multiplicação das matrizes A e D;
  for (line=0; line<2; line++){
      //Exibir a coluna da matriz
      for (column=0; column<2; column++){
          //Percorrer as células
          for (cell=0; cell<3; cell++){
              //Multiplicação das matrizes pelas células
              matrizAD[line][column] = matrizAD[line][column] + matrizA[line][cell] * matrizD[cell][column];
          }

      }
  }

  printf("Matriz AD:\n");
  //Exibir a linha da matriz
  for (line=0; line<2; line++){
      //Exibir a coluna da matriz
      for (column=0; column<2; column++){
          //Exibe o valor da matrizI na cordenada linha e coluna
          printf(" %d", matrizAD[line][column]);
      }
      //Pula linha
      printf("\n\n");
  }



  return 0;
}//main
