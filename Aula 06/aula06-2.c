/*
@file: aula06-1.case
@author: Joshua Barbosa
@date: 14 Out 21
@brief: Exercício 2 da aula 6

2) Faça um programa que receba um número e determine se ele é um número par
ou ímpar.Obs.: Utilize o operador % que retorna o resto da divisão)
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
  int numero; //Declara a variável para um numero qualquer;

  printf("Qual o numero? "); //Exibe para usuário uma pergunta
  scanf("%i", &numero); //Lê a entrada de dado para o numero

  if (numero%2 == 0){ //Caso o resto da divisao do numero por 2 ser igual a 0
    printf("O numero %i eh par! :)\n", numero); //Mostra essa mensagem para o usuário
  } else { //Caso não seja
    printf("O numero %i eh impar! :)\n", numero); //Essa mensagem será mostrada
  }

  return 0;
}//main
