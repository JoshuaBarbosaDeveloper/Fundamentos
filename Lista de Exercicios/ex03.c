/*
@file: ex03.case
@author: Joshua Barbosa
@date: 25 Out 21
@brief: Exercício 3  da lista de exercícios

3) Faça um programa que tenha como entrada: o número de horas, minutos e
 segundos atuais, informe quantos segundos faltam para chegar terminar o dia.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){

  int hr, min, sec;  //Declara a variável para horas, minutos e segundos;
  //setbuf(stdin, NULL); - Apagar o buffer

  printf("Qual o tempo de agora?(horas:minutos:segundos) - "); //Exibe uma pergunta para o usuário
  scanf("%i:%i:%i", &hr, &min, &sec); //Lê as horas, minutos e segundos

  printf("Faltam %i:%i:%i para acabar o dia.", 23-hr, 59-min, 59-sec); //Exibe para o usuário o quanto falta para acabar o dia

  return 0;
}//main
