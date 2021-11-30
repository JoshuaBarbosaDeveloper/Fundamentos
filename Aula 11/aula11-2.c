/*
@file: aula011-2.case
@author: Joshua Barbosa
@date: 15 Nov 21
@brief: Exercício 2 da aula 11

2) Crie um algoritmo que receba 10 números e os armazene em um vetor A. Em
seguida, gere o vetor B onde cada elemento é o quadrado do valor da mesma
 posição no vetor A
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int vectorA[10], vectorB[10], counter; //Declara as variáveis para contadores e vetores;

  for (counter=0; counter<10; counter++){ //Enquanto contador for menor que 10

      printf("Valor %d do vetorA: ", counter+1); //Exibe um texto
      scanf("%d", &vectorA[counter]); //Lê o valor para o vetor A na posição do contador

      //Atribui o valor para o vetorb[counter] com o quadrado do valor do vetorA[counter]
      vectorB[counter] = vectorA[counter]*vectorA[counter];
  }

  printf("\n" );

  printf("Vetor B: " ); //Exibe uma mensagem

  for (counter=0; counter<10; counter++){ //Enquanto contador for menor que 10

      printf("%d ", vectorB[counter]); //Exibe o vetor B
  }
  printf("\n" );

  return 0;
}//main
