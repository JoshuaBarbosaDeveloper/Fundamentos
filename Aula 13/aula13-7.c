/*
@file: aula13-7.case
@author: Joshua Barbosa
@date: 22 Nov 21
@brief: Exercício 7 da aula 13

7) Escreva um programa que receba uma sigla de um estado da região Sul ou
Sudeste e exiba o nome completo do estado correspondente.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  //Declara um vetor para sigla dos estados, nome dos estados e sigla recebida;
  char acronymsStates[7][21] = {"PR", "RS", "SC", "ES", "MG", "RJ", "SP"};
  char nameStates[7][21] = {"Parana", "Rio Grande do Sul", "Santa Catarina", "Espirito Santo", "Minas Gerais", "Rio de Janeiro", "Sao Paulo"};
  char acronymsRecieve[21];
  //Variavel para percorrer linha;
  int line;

  //Le a silg;
  printf("Insira uma sigla de um estado da regiao Sul/Sudeste: ");
  fgets(acronymsRecieve, 21, stdin);
  acronymsRecieve[strcspn(acronymsRecieve,"\n")] = '\0';
  setbuf(stdin, NULL);

  //Percorrer a string das siglas e nomes;
  for(line=0; line<7; line++){
      //Comparação das strings;
      if(strcasecmp(acronymsRecieve, acronymsStates[line]) == 0){
          //Exibe o estado e finaliza o programa;
          printf("\nEstado: %s\n\n", nameStates[line]);
          return 0;
      }
  }

  //Caso não tenha encontrado nenhuma sigla;
  printf("\nVoce digitou uma sigla errada ou que nao pertence a um estado dessa regiao. Programa Finalizado!\n\n");

  return 0;
}//main
