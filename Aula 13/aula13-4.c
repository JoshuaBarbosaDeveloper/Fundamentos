/*
@file: aula13-4.case
@author: Joshua Barbosa
@date: 22 Nov 21
@brief: Exercício 4 da aula 13

4) Faça um programa que receba um nome, ele deve perguntar novamente caso o
 nome tenha tamanho inferior a 5 caracteres. Ao receber um nome com 5 caracteres
  ou mais o programa exibe o nome e finaliza.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  //Declara um vetor para nome;
  char name[21];
  //Declara variável para linha e tamanho;
  int line, size;

  //Solicitar o nome enquanto não tiver mais que 4 caracteres
  do{
      printf("Digite um nome com mais de 5 caracteres: ");
      fgets(name, 21, stdin);
      name[strcspn(name,"\n")] = '\0';
      setbuf(stdin, NULL);
      //Salvar a quantidade de caracter;
      size = strlen(name);

  } while (size < 5); //Fim while;

  
  //Exibir
  printf("\nNome inserido: %s\n", name);
  printf("Qnt de caracteres %d\n", size);
  printf("\n\nObrigado por utilizar nosso software! \n");

  return 0;
}//main
