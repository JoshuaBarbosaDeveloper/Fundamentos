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
  int cont = 1;  //Declara a variável para notas, contador e media;
  float media, nota;

  do {
      printf("Qual a primeira nota do aluno %i? ", cont);
      scanf("%f", &nota);
      media = nota;
      printf("Qual a segunda nota do aluno %i? ", cont);
      scanf("%f", &nota);
      media = (media+nota)/2.0;

      printf("A media do aluno %i eh de: %.2f\n\n", cont, media);
      cont++;

  } while (cont < 6);

  return 0;
}//main
