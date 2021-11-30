/*
@file: aula12-3.case
@author: Joshua Barbosa
@date: 20 Nov 21
@brief: Exercício 3 da aula 12

3) Construa um programa que leia uma matriz de tamanho 5 x 5 e escreva o valor
 e a localização (linha, coluna) do maior valor encontrado na matriz.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  //Declara uma variável 5x5 para matriz;
  int matriz[5][5];
  //Declara variável para linha e coluna;
  int line, column;
  //Declara variável para as cordenadas e maior;
  int coordinateLine, coordinateColumn, bigger = 0, repeatCounter = 0;


  //Preenchimento da matriz - linha;
  for (line=0; line<5; line++){
      //Preenchimento da matriz - coluna;
      for (column=0; column<5; column++){
          //Exibe uma pergunta;
          printf("Qual o valor na posicao da Matriz[%d][%d]? ", line, column);
          //Le o valor;
          scanf(" %d", &matriz[line][column]);
      }
      //Pula linha
      printf("\n\n");
  }

  printf("Matriz:\n");
  //Exibir a linha da matriz
  for (line=0; line<5; line++){
      //Exibir a coluna da matriz
      for (column=0; column<5; column++){
          //Exibe o valor da matrizI na cordenada linha e coluna
          printf(" %d", matriz[line][column]);
      }
      //Pula linha
      printf("\n\n");
  }

  //Verificar o maior número;
  for (line=0; line<5; line++){
      //Exibir a coluna da matriz
      for (column=0; column<5; column++){
          //Caso o valor da matriz na cordenada linha e coluna for maior que bigger;
          if (matriz[line][column] > bigger){
              //Novo valor para a variavél do maior número;
              bigger = matriz[line][column];
              //Novo valor para  as variavéis das cordenadas;
              coordinateLine = line;
              coordinateColumn = column;
          //Contador para caso haja uma repetição
          } else if (matriz[line][column] == bigger) {
              repeatCounter = repeatCounter + 1;
          }
      }
  }

  printf("\n");
  printf("Maior valor: %d", bigger);
  printf("\nQnt de aparicao do maior valor: %d", repeatCounter);
  printf("\nPosicao na Matriz: [%d] [%d]", coordinateColumn, coordinateLine);


  return 0;
}//main
