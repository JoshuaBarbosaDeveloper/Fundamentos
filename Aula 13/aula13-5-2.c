/*
@file: aula13-5.case
@author: Joshua Barbosa
@date: 22 Nov 21
@brief: Exercício 5 da aula 13

5) Faça um programa que receba uma frase e depois exiba quantas vezes cada
vogal aparece. Ele deve contar considerando o tamanho da String.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  //Declara um vetor para frase e vogais;
  char phrase[211], vowelA[]={"aA"}, vowelE[]={"Ee"}, vowelI[]={"iI"}, vowelO[]={"Oo"}, vowelU[]={"Uu"};
  //Declara variável para linha e contador;
  int line, column, counterA=0, counterE=0, counterI=0, counterO=0, counterU=0;
  printf("Digite uma frase de ate 211 caracteres: ");
  fgets(phrase, 211, stdin);
  phrase[strcspn(phrase,"\n")] = '\0';
  setbuf(stdin, NULL);
  printf("\n");

  //Percorrer Frase;
  for(line = 0; line < strlen(phrase); line++){
      //Vogal;
      for(column = 0; column < strlen(vowelA); column++){
          if(vowelA[column] == phrase[line]){
             counterA ++;
          }
      }
      for(column = 0; column < strlen(vowelE); column++){
          if(vowelE[column] == phrase[line]){
             counterE ++;
          }
      }
      for(column = 0; column < strlen(vowelI); column++){
          if(vowelI[column] == phrase[line]){
             counterI ++;
          }
      }
      for(column = 0; column < strlen(vowelO); column++){
          if(vowelO[column] == phrase[line]){
             counterO ++;
          }
      }
      for(column = 0; column < strlen(vowelU); column++){
          if(vowelU[column] == phrase[line]){
             counterU ++;
          }
      }
  }

  printf("Quantidade da vogal A: %d\n", counterA);
  printf("Quantidade da vogal E: %d\n", counterE);
  printf("Quantidade da vogal I: %d\n", counterI);
  printf("Quantidade da vogal O: %d\n", counterO);
  printf("Quantidade da vogal U: %d\n", counterU);


  printf("\n\nObrigado por utilizar nosso software! \n");

  return 0;
}//main
