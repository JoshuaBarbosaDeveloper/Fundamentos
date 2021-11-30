/*
@file: aula13-6.case
@author: Joshua Barbosa
@date: 22 Nov 21
@brief: Exercício 6 da aula 13

6) Faça um programa que receba um nome e um sobrenome. Ele deve construir uma
nova string no formato americano (Sobrenome, Nome)Exemplo: Silva, José
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  //Declara um vetor para nome, sobrenome, formato americano e virgula;
  char name[21], surname[21], americanFormat[211], comma[21]=", ";

  //Le o nome;
  printf("Insira Nome: ");
  fgets(name, 21, stdin);
  name[strcspn(name,"\n")] = '\0';
  setbuf(stdin, NULL);
  //Le sobrenome;
  printf("Insira Sobrenome: ");
  fgets(surname, 21, stdin);
  surname[strcspn(surname,"\n")] = '\0';
  setbuf(stdin, NULL);

  //Concatenando o sobrenome com a vírgula;
  strcpy(americanFormat, strcat(surname, comma));
  //Concatenando o sobrenome com o nome;
  strcpy(americanFormat, strcat(surname, name));
  //Exibir
  printf("\nFormato americano: %s\n", americanFormat);


  return 0;
}//main
