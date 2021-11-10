/*
@file: aula010-5.case
@author: Joshua Barbosa
@date: 08 Nov 21
@brief: Exercício 5 da aula 10

5) Faça um programa que calcule o fatorial de um número a ser digitado.
*/
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){
  int counter, number; //Declara a variável para o contador;

  printf("Numero para calcular fatorial: "); //Exibe uma pergunta para o usuário;
  scanf("%i", &number); //Recebe o número do usuário;

  for (counter=number-1; counter>1; counter--){ //Enquanto contador for maior que 1
      number *= counter; //Numero = numero * contador
  }

  printf("\nFatorial: %i\n", number); //Exibe o fatorial

  return 0;
}//main
