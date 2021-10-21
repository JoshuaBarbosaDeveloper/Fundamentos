/*
@file: aula09-1.case
@author: Joshua Barbosa
@date: 21 Out 21
@brief: Exercício 1 da aula 9

1) Faça um programa que calcule a média para 5 alunos, sendo que cada aluno
tem 2 notas (reais). O programa somente deverá aceitar notas no intervalo
fechado de 0 a 10, solicitando nova digitação quando necessário.
*/
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){
  int cont = 1;  //Declara a variável para contador;
  float media, nota; //Declara a variável para notas e media;

  do { //Faça
      printf("Qual a primeira nota do aluno %i? ", cont); //Mostrar esse texto para o usuário
      scanf("%f", &nota); //Receber a nota
      media = nota; //Atribuir o valor da nota na média
      printf("Qual a segunda nota do aluno %i? ", cont); //Mostrar esse texto para o usuário
      scanf("%f", &nota); //Receber a nota
      media = (media+nota)/2.0;  //Atribuir o valor da nota com a antiga e dividir por 2
      printf("A media do aluno %i eh de: %.2f\n\n", cont, media); //Mostrar a média para o usuário
      cont++; //Novo valor para cont

  } while (cont < 6); //Enquanto o contador for menor que 6

  return 0;
}//main
