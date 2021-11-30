/*
@file: aula011-6.case
@author: Joshua Barbosa
@date: 15 Nov 21
@brief: Exercício 6 da aula 11

6) Faça um programa que receba e armazene 20 números em um vetor. Em seguida
 exiba:Quantos números são iguais a 30;Quantos números são maior que a média;
 Quantos números são iguais à media;
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int vectorA[20], counter, sum_vector = 0, media = 0; //Declara as variáveis para contadores e vetores;
  int number_equal30 = 0, number_biggermedia = 0, number_equalmedia = 0;

  for (counter=0; counter<20; counter++){ //Enquanto contador for menor que 4

      printf("Valor %d do vetorA: ", counter+1); //Exibe um texto
      scanf("%d", &vectorA[counter]); //Lê o valor para o vetor A na posição do contador

      sum_vector = sum_vector + vectorA[counter]; //Soma os elementos do vetor

      if (vectorA[counter]==30){ //Se o vetorA[counter] for igual a 30
          number_equal30 = number_equal30 + 1; //Add mais 1 no contador
      }
  }

  media = (sum_vector/20); //Realiza a media

  for (counter=0; counter<20; counter++){ //Enquanto contador for menor que 4

      if (vectorA[counter]>media){ //Caso vetorA[counter] for maior que media
          number_biggermedia = number_biggermedia + 1; //Add mais 1 no contador
      }
      if (vectorA[counter]==media){ //Caso vetorA[counter] for igual a media
          number_equalmedia = number_equalmedia + 1; //Add mais 1 no contador
      }
  }

  //Exibe os resultados
  printf("Quantidade de numeros iguais a 30: %d\n", number_equal30);
  printf("Quantidade de numeros maiores que a media: %d\n", number_biggermedia);
  printf("Quantidade de numeros igual a media: %d\n", number_equalmedia);
  printf("\n" );

  return 0;
}//main
