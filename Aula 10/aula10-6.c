/*
@file: aula010-6.case
@author: Joshua Barbosa
@date: 08 Nov 21
@brief: Exercício 6 da aula 10

6) Faça um programa que receba 10 números e calcule o quadrado desse número
(um de cada vez).
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int counter, number, result; //Declara a variável para o contador;

  for (counter=1; counter<=10; counter++){ //Enquanto contador for maior que 1
      printf("(%i/10) - Numero para calcular o quadrado: ", counter); //Exibe uma pergunta para o usuário;
      scanf("%i", &number); //Recebe o número do usuário;

      result = lround(pow(5,2)); //Realiza o cálculo do quadrado

      printf("Quadrado do numero: %i\n", result); //Exibe a raiz quadrada para o usuário;
  }

  return 0;
}//main
