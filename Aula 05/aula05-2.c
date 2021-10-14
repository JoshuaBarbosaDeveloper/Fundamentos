/*
@file: aula05-2.case
@author: Joshua Barbosa
@date: 12 Out 21
@brief: Exercício 2 da aula 5

1)  Faça um programa que calcule e mostre a idade de uma pessoa a partir do
 ano em que a pessoa nasceu e do ano atual. Os valores serão digitados pelo
 usuário.Obs.:Considere que ela já fez aniversário neste ano.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
  int anoAtual; //Declara a variável para o ano que estamos
  int anoNascimento; //Declara a variável para o nascimento
  int idade; //Declara a variável para a idade
  printf("Em que ano estamos? "); //Exibe para usuário uma pergunta
  scanf("%i", &anoAtual); //Lê a entrada de dado para o ano atual
  setbuf(stdin, NULL); //Apaga o buffer
  printf("Qual ano voce nasceu? "); //Exibe para usuário uma pergunta
  scanf("%i", &anoNascimento); //Lê a entrada de dado para o nascimento
  setbuf(stdin, NULL); //Apaga o buffer
  idade = anoAtual-anoNascimento; //Calcula a idade
  printf("Legal! Voce tem %i anos!\n",idade); //Exibe para o usuário sua idade
  return 0;
}//main
