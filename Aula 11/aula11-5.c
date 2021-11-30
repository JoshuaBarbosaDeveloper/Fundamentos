/*
@file: aula011-5.case
@author: Joshua Barbosa
@date: 15 Nov 21
@brief: Exercício 5 da aula 11

5)Dado dois vetores, A (4 elementos) e B (5 elementos), faça um programa em C
 que imprima todos os elementos comuns aos dois vetores.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int vectorA[4], vectorB[5], counter, counter2, common_vector = 0; //Declara as variáveis para contadores e vetores;

  for (counter=0; counter<4; counter++){ //Enquanto contador for menor que 4

      printf("Valor %d do vetorA: ", counter+1); //Exibe um texto
      scanf("%d", &vectorA[counter]); //Lê o valor para o vetor A na posição do contador
  }

  printf("\n");

  for (counter=0; counter<5; counter++){ //Enquanto contador for menor que 4

      printf("Valor %d do vetorB: ", counter+1); //Exibe um texto
      scanf("%d", &vectorB[counter]); //Lê o valor para o vetor A na posição do contador
  }

  printf("Elementos comuns: ");

  for (counter=0; counter<5; counter++){ //Enquanto contador for menor que 5
      for(counter2=0; counter2<4; counter2++){ //Enquanto contador2 for menor que 4
          if(vectorA[counter2] == vectorB[counter]){ //Se o vetorA na posição counter2 for igual ao vetorB em counter
              printf("%d ", vectorA[counter2]); //Exibe o valor
          }
      }
  }

  printf("\n" );

  return 0;
}//main
