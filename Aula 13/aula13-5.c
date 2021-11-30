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
  char phrase[211], vowels[5][3] = {"Aa", "Ee", "Ii", "Oo", "Uu"};

  //Declara variável para linha e contador;
  int line, column, counter[5] = {0, 0, 0, 0, 0};
  printf("Insira uma frase: ");
  fgets(phrase, 211, stdin);
  phrase[strcspn(phrase,"\n")] = '\0';
  setbuf(stdin, NULL);
  printf("\n");

  //Percorrer Frase;
  for(line = 0; line < strlen(phrase); line++){
      //Percorrer indice do vetor vowels;
      for(int n_vogais = 0; n_vogais < 5; n_vogais++){
          //Percorrer as vogais;
          for(column = 0; column < strlen(vowels[n_vogais]); column++){
              //Comparar as vogais;
              if(vowels[n_vogais][column] == phrase[line]){
                  //Contador de vogais repetidas;
                 counter[n_vogais] ++;
              }
          }
      }
  }
  //Exibir as vogais repetidas;
  for (int i = 0; i < 5; i++){
      printf("Quantidade da vogal %s: %d\n", vowels[i], counter[i]);
  }

  printf("\n\nObrigado por utilizar nosso software! \n");

  return 0;
}//main
