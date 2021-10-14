/*
@file: aula05-4.case
@author: Joshua Barbosa
@date: 12 Out 21
@brief: Exercício 4 da aula 5

4) Calcule a média aritmética de 4 números reais que o usuário digitar.
 Imprima a média na tela apenas com 2 casas decimais.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
  float num1; //Declara a variável para o primeiro numero
  float num2; //Declara a variável para o segundo numero
  float num3; //Declara a variável para o terceiro numero
  float num4; //Declara a variável para o quarto numero
  float media; //Declara a variável para a media

  printf("Qual o primeiro numero? \n"); //Exibe para usuário uma pergunta
  scanf("%f", &num1); //Lê a entrada de dado para o numero 1
  setbuf(stdin, NULL); //Apaga o buffer

  printf("Qual o segundo numero? \n"); //Exibe para usuário uma pergunta
  scanf("%f", &num2); //Lê a entrada de dado para o numero 2
  setbuf(stdin, NULL); //Apaga o buffer

  printf("Qual o terceiro numero? \n"); //Exibe para usuário uma pergunta
  scanf("%f", &num3); //Lê a entrada de dado para o numero 3
  setbuf(stdin, NULL); //Apaga o buffer

  printf("Qual o quarto numero? \n"); //Exibe para usuário uma pergunta
  scanf("%f", &num4); //Lê a entrada de dado para o numero 4
  setbuf(stdin, NULL); //Apaga o buffer

  media = (num1+num2+num3+num4)/4; //Faz a conta para saber a média

  printf("A media eh: %.2f\n", media); //Exibe a média aritmética dos numeros
  return 0;
}//main
