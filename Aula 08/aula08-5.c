/*
@file: aula08-5.case
@author: Joshua Barbosa
@date: 20 Out 21
@brief: Exercício 5 da aula 8

5) Faça um programa que receba um número real, calcule e exiba o quadrado dele.
 O programa deverá repetir esse procedimento para 10 números, um de cada vez.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
  int cont = 0; //Declara a variável para o contador;
  float num, resultado; //Declara a variável para um numero qualquer;

  while (cont <= 10){ //Enquanto o contador for menor ou igual 10
     printf("(%i/10) - Deseja calcular o quadrado de qual numero? ", cont); //Exibe para o usuario uma pergunta
     scanf("%f", &num); //Le o numero que o usuario quer realizar o calculo
     resultado = num*num; //Realiza o calculo
     printf("%.2f^2 = %.2f\n", num, resultado); //Exibe o resultado

     cont++; //Pós decremento;
  } //Fim while


  return 0;
}//main
