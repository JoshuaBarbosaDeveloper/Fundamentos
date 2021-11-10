/*
@file: aula010-7.case
@author: Joshua Barbosa
@date: 08 Nov 21
@brief: Exercício 7 da aula 10

7) Faça um programa que mostre n elementos da sequência de Fibonacci. O valor
de n é passado para o programa.O primeiro termo é 0, e o segundo termo é 1, os
 demais devem seguir a fórmula tn = tn-1 + tn-2
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int counter, number, term_one=0, term_two=1, term_three; //Declara a variável para o contador;

  printf("Quantos elementos deseja mostrar?: "); //Exibe uma pergunta para o usuário;
  scanf("%i", &number); //Recebe o número do usuário;

  printf("Elemento 1: 0\nElemento 2: 1\n");

  for (counter=3; counter<=number; counter++){ //Enquanto contador for maior que 1

      term_three = term_one + term_two; //Termo 3 = Termo 1 + Termo 2;
      printf("Elemento %i: %i\n", counter, term_three); //Exibe o termo 3;

      term_one = term_two; //Novo valor para o termo 1;
      term_two = term_three; //Novo valor para o termo 2;

  }

  return 0;
}//main
