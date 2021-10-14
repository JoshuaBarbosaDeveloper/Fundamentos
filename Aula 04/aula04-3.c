/*
@file: aula04-3.case
@author: Joshua Barbosa
@date: 06 Out 21
@brief: Exercício 3 da aula 4

3)   Faça um programa com 2 variáveis, A e B, onde A  terá o valor 40 e B terá o valor -1.
 Imprima o valor de  A+B, A-B, AxB e A/B. Em seguida, faça B  incrementar de uma unidade
 e repita as 4 operações.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
 int a = 40; //Declara a variável A
 int b = -1; //Declara a variável B
 int calculo = 0; //Declara a variável para realizar os cálculos

 printf("Operacoes com valores normais:\n"); //Exibe para o usuário uma mensagem
 calculo = a+b; //Realiza um calculo
 printf("%d\n", calculo); //Mostra o resultado do cálculo realizado
 calculo = a-b; //Realiza um calculo
 printf("%d\n", calculo); //Mostra o resultado do cálculo realizado
 calculo = a*b; //Realiza um calculo
 printf("%d\n", calculo); //Mostra o resultado do cálculo realizado
 calculo = a/b; //Realiza um calculo
 printf("%d\n", calculo); //Mostra o resultado do cálculo realizado

 printf("Operacoes com B incrementado uma unidade:\n"); //Exibe para o usuário uma mensagem
 b++; //Adciona um valor de b na variável b;
 calculo = a+b; //Realiza um calculo
 printf("%d\n", calculo); //Mostra o resultado do cálculo realizado
 calculo = a-b; //Realiza um calculo
 printf("%d\n", calculo); //Mostra o resultado do cálculo realizado
 calculo = a*b; //Realiza um calculo
 printf("%d\n", calculo); //Mostra o resultado do cálculo realizado
 calculo = a/(float)b; //É necessário utilizar indeterminação
 printf("%d\n", calculo);//Mostra o resultado do cálculo realizado

 return 0;
}//main
