/*
@file: aula04-2.case
@author: Joshua Barbosa
@date: 06 Out 21
@brief: Exercício 2 da aula 4

2)  Uma conta de caderneta de poupança foi aberta com um depósito de R$ 500,00.
Imagine que esta conta é remunerada em 1% de juros ao mês. Qual será o valor da conta após três meses?
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
 float poupanca = 500; //Declara a variável para armazenar o valor da poupanca;
 float montante = 0; //Declara a variável para armazenar o valor da montante;
 float tempo = 3; //Declara a variável para o tempo em meses;

   montante =  poupanca * pow((1 + 0.01), tempo); //Fórmula para calcular juros composto, uma vez que o 0.25 corresponde a 3 meses em ano.
   printf("O valor total no final de 3 meses sera de %f reais.\n", montante); //Exibe para o usuário o resultado;
 return 0;
}//main
