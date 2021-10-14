/*
@file: aula03-2.case
@author: Joshua Barbosa
@date: 06 Out 21
@brief: Exercício 2 da aula 3

2)  Declare duas variáveis inteiras A e B e atribua valores diferentes.
Em seguida, efetue a troca dos valores de forma que, a variável A passe a possuir o valor da variável B,
 e que a variável B passe a possuir o valor da variável A. Apresente os valores iniciais e finais de A e B.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
 float numA = 10; //Declara a variável numA;
 float numB = 230; //Declara a variável numB;
 float num = 0; //Declara uma variável para auxiliar na troca dos valores;
 char caracter; //Declara um caracter;


   printf("\nValor atual:\nNumero A: %f\nNumero B: %f\n", numA, numB); //Exibe para o usuário os valores das variáveis A e B
   printf("\nPressione uma tecla para efetuar a troca de valores dessas variaveis!");

   caracter=getchar(); //Captura um caractere


   num = numA; //Atribui o valor de numA para o num;
   numA = numB; //Atribui o valor de numB para o numA;
   numB = num; //Atribui o valor de numA para o numB;
   printf("\nNovos valores:\nNumero A: %f\nNumero B: %f\n", numA, numB); //Exibe para o usuário os novos valores das variáveis A e B


 return 0;
}//main
