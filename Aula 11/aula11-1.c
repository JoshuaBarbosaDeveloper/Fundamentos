/*
@file: aula011-1.case
@author: Joshua Barbosa
@date: 15 Nov 21
@brief: Exercício 1 da aula 11

1) Faça um programa que leia e armazene dois vetores de tamanho 5. Ao final o
 programa deve calcular e exibir o vetor soma;
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int vector1[5], vector2[5], vector_sum[5], counter; //Declara as variáveis para contadores e vetores;

  for (counter=0; counter<5; counter++){ //Enquanto contador for menor que 5

      printf("Valor %d do primeiro vetor: ", counter+1); //Exibe um texto
      scanf("%d", &vector1[counter] ); //Lê o valor para o vetor na posição do contador

      printf("Valor %i do segundo vetor: ", counter+1); //Exibe um texto
      scanf("%d", &vector2[counter] ); //Lê o valor para o vetor na posição do contador

      printf("\n" );

      //Atribui um valor para o vetor soma na posição counter
      vector_sum[counter] = vector1[counter] + vector2[counter];
  }

  printf("\n\nO resuldado da soma desses vetores: " ); //Exibe uma mensagem

  for (counter=0; counter<5; counter++){ //Enquanto contador for menor que 5

      printf("%d ", vector_sum[counter]);
  }
  printf("\n\n" );

  return 0;
}//main
