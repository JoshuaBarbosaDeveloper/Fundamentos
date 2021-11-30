/*
@file: aula12-2.case
@author: Joshua Barbosa
@date: 20 Nov 21
@brief: Exercício 2 da aula 12

2) Faça um algoritmo que leia uma matriz 3 por 3 (3x3) e retorna a soma dos
elementos da sua diagonal principal e da sua diagonal secundária;
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  //Declara uma variável 3x3 para matriz;
  int matriz[3][3];
  //Declara variável para linha e coluna;
  int line, column;
  //Declara variável para as diagonais;
  int mainDiagonal, secondaryDiagonal;


  //Preenchimento da matriz - linha;
  for (line=0; line<3; line++){
      //Preenchimento da matriz - coluna;
      for (column=0; column<3; column++){
          //Exibe uma pergunta;
          printf("Qual o valor na posicao da Matriz[%d][%d]? ", line, column);
          //Le o valor;
          scanf(" %d", &matriz[line][column]);
      }
      //Pula linha
      printf("\n\n");
  }

  //Realiza a soma das diagonais;
  mainDiagonal = matriz[0][0] + matriz[1][1] + matriz[2][2];
  secondaryDiagonal = matriz[0][2] + matriz[1][1] + matriz[2][0];

  printf("Matriz:\n");
  //Exibir a linha da matriz
  for (line=0; line<3; line++){
      //Exibir a coluna da matriz
      for (column=0; column<3; column++){
          //Exibe o valor da matrizI na cordenada linha e coluna
          printf(" %d", matriz[line][column]);
      }
      //Pula linha
      printf("\n\n");
  }
  //Exibição Soma;
  printf("Soma da Diagonal Principal: %d\n", mainDiagonal);
  printf("Soma da Diagonal Secundaria: %d\n", secondaryDiagonal);


  return 0;
}//main
