/*
@file: aula08-7.case
@author: Joshua Barbosa
@date: 20 Out 21
@brief: Exercício 7 da aula 8

7) Faça um programa que calcule o fatorial de um número a ser digitado.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
  int num, cont, resultado = 1;  //Declara a variável para o contador e o resultado da fatorial;

  printf("Deseja calcular o fatorial de qual numero? "); //Exibe para o usuario uma pergunta
  scanf("%i", &num); //Le o numero que o usuario quer realizar o calculo

  cont = num;
  while (cont > 1){ //Enquanto o numero digitado for maior que 0
     resultado *= cont; //Realiza o calculo

     cont--; //Pós decremento;
  } //Fim while

  printf("Resultado: %i! = %i\n", num, resultado); //Exibe o resultado

  return 0;
}//main
