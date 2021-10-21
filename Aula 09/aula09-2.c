/*
@file: aula09-1.case
@author: Joshua Barbosa
@date: 21 Out 21
@brief: Exercício 1 da aula 9

2) Faça um programa que receba valores enquanto eles estiverem no intervalo
 de 500 a 1000. Ao receber um valor fora da faixa, o programa deverá parar de
  solicitar valores, exibir quantos valores válidos foram digitados e finalizar.
*/
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){
  int cont = 0, valor=501;  //Declara a variável para contador e valores;

  do { //Faça
      printf("Digite um valor: "); //Mostrar esse texto para o usuário
      scanf("%i", &valor); //Receber o valor
      cont++;

  } while (valor > 500 && valor < 1000 ); //Enquanto o contador for menor que 6

  printf("Foram digitados %i valores validos! Obrigado por utilizar nosso software.\n", cont-1); //Mostrar esse texto para o usuário

  return 0;
}//main
