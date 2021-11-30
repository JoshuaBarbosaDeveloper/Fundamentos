/*
@file: aula13-1.case
@author: Joshua Barbosa
@date: 22 Nov 21
@brief: Exercício 1 da aula 13

1) Crie um programa para armazenar 10 nomes  em um vetor e imprimir uma lista numerada
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  //Declara um vetor para os nomes;
  char names[10][21];
  //Declara variável para linha;
  int line;

  //Preenchendo os nomes do vetor;
  for (line = 0; line < 10; line++){
      //Pede para o usuário;
      printf("(%d/10) - Insira o nome: ", line+1);
      //Recebe o valor;
      fgets(names[line], 21, stdin);
      names[line][strcspn(names[line],"\n")] = '\0';
      setbuf(stdin, NULL);
  }

  //Exibir lista dos nomes;
  printf("\n\nNomes:\n");
  //Percorrer a linha;
  for (line=0; line<10; line++){
          //Exibe o nome
          printf("Nome [%d]: %s\n", line, names[line]);
      }

  return 0;
}//main
