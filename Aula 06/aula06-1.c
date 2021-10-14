/*
@file: aula06-1.case
@author: Joshua Barbosa
@date: 14 Out 21
@brief: Exercício 1 da aula 6

1) Faça um programa que receba como entrada a nota de um aluno. O programa
 deve exibir “aprovado” caso a nota seja igual ou superior a 6, ou exibir
  “reprovado” caso contrário.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
  float nota; //Declara a variável para a nota do aluno

  printf("Qual a sua nota? "); //Exibe para usuário uma pergunta
  scanf("%f", &nota); //Lê a entrada de dado para a nota do aluno

  if (nota >= 6.0){ //Caso a nota for maior ou igual a 6
    printf("Voce foi aprovado! :)\n"); //Mostra essa mensagem para o usuário
  } else { //Caso não seja
    printf("Poxa... Voce reprovou :(\n"); //Essa mensagem será mostrada
  }

  return 0;
}//main
