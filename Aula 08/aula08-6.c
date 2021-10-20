/*
@file: aula08-6.case
@author: Joshua Barbosa
@date: 20 Out 21
@brief: Exercício 6 da aula 8

6) Faça um programa que receba um número real, calcule e exiba o quadrado dele.
 O programa deverá calcular o quadrado de vários números e finalizar quando for
  digitado um número negativo ou zero.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
  float num = 1, resultado; //Declara a variável para um numero qualquer;

  while (num > 0){ //Enquanto o numero digitado for maior que 0
     //Exibe para o usuario uma pergunta
     printf("Deseja calcular o quadrado de qual numero? *Caso nao queira, digite um numero menor ou igual a 0! ");
     scanf("%f", &num); //Le o numero que o usuario quer realizar o calculo

     if (num <= 0){ //Se o numero for 0 ou menos
         printf("\nObrigado por usar nosso software!\n"); //Exibe uma mensagem agradecendo
         break; //Finaliza o programa
     }

     resultado = num*num; //Realiza o calculo
     printf("%.2f^2 = %.2f\n", num, resultado); //Exibe o resultado

     num++; //Pós decremento;
  } //Fim while


  return 0;
}//main
