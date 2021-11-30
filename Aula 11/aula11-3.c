/*
@file: aula011-3.case
@author: Joshua Barbosa
@date: 15 Nov 21
@brief: Exercício 3 da aula 11

3) Leia um vetor A com 10 elementos inteiros correspondentes as idades de um
grupo de pessoas. Escreva um programa que conte e exiba a quantidade de pessoas
 que possuem idade superior a 35 anos.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int vectorA[10], counter, peoples_age = 0; //Declara as variáveis para contadores e vetores;

  for (counter=0; counter<10; counter++){ //Enquanto contador for menor que 10

      printf("Idade da pessoa %d: ", counter+1); //Exibe um texto
      scanf("%d", &vectorA[counter]); //Lê o valor para o vetor A na posição do contador

      if(vectorA[counter] > 35){ //Caso o valor do vetor A na posição counter for maior que 35

          peoples_age = peoples_age + 1; //Adciona o valor de 1 na variável peoples_age
      }
  }

  printf("\n" );
  printf("Ha %d pessoas com mais de 35 anos. ", peoples_age); //Exibe uma mensagem
  printf("\n" );

  return 0;
}//main
