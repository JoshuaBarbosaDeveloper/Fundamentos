/*
@file: ex04.case
@author: Joshua Barbosa
@date: 25 Out 21
@brief: Exercício 4  da lista de exercícios

4) Faça um programa que receba 3 idades distintas e mostre: a idade da pessoa
mais velha; a idade da pessoa mais nova e a média das 3 idades . O programa
 deve considerar e informar o caso de 2 ou 3 pessoas terem a mesma idade.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){

  int idade1, idade2, idade3;  //Declara a variável para as idades;
  //setbuf(stdin, NULL); - Apagar o buffer

  printf("Insira as 3 idades: "); //Exibe uma pergunta para o usuário
  scanf("%i %i %i", &idade1, &idade2, &idade3); //Lê as idades inseridas pelo usuário

  if (idade1 == idade2 && idade1 == idade3){ //Caso todas idades forem iguais
      printf("As 3 pessoas tem as mesmas idades!\n"); //Exibe isso para o usuário
      return 0; //Retorna 0 para finalizar o programa
  } else if (idade1 == idade2 || idade2 == idade3 || idade1 == idade3 ) { //Caso apenas 2 idades forem iguais
      printf("Ha 2 pessoas com as mesmas idades!\n"); //Exibe isso para o usuário
      return 0; //Retorna 0 para finalizar o programa
  }

  if (idade1 > idade2 && idade1 > idade3){ //Caso a idade 1 for maior de todas
      printf("Pessoa mais velha: %i anos!\n", idade1); //Exibe isso para o usuário
  } else if (idade2 > idade3) { //Caso a idade 2 for a maior de todas
      printf("Pessoa mais velha: %i anos!\n", idade2); //Exibe isso para o usuário
  } else { //Caso a idade 3 for a maior de todas
      printf("Pessoa mais velha: %i anos!\n", idade3); //Exibe isso para o usuário
  }

  if (idade1 < idade2 && idade1 < idade3){ //Caso a idade 1 for a menor de todas
      printf("Pessoa mais nova: %i anos!\n", idade1); //Exibe isso para o usuário
  } else if (idade2 < idade3) { //Caso a idade 2 for a menor de todas
      printf("Pessoa mais nova: %i anos!\n", idade2); //Exibe isso para o usuário
  } else { //Caso a idade 3 for a menor de todas
      printf("Pessoa mais nova: %i anos!\n", idade3); //Exibe isso para o usuário
  }

  return 0;
}//main
