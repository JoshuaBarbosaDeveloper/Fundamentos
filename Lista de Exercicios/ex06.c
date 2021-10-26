/*
@file: ex06.case
@author: Joshua Barbosa
@date: 25 Out 21
@brief: Exercício 6  da lista de exercícios

5)  Um professor maluco da UTFPR avalia seus alunos da seguinte maneira:

3 provas (com peso 20 cada)
10 pontos para trabalhos menores durante o semestre
1 projeto de um jogo com peso 30

A média regular do aluno será dada pela soma das notas das 3 provas, nos
projetos menores e do projeto do game. O aluno que atingir a nota igual ou
superior a 60 estará aprovado, caso contrário, o aluno deverá realizar um exame
 onde a nota mínima necessária será dada pela fórmula:

NotaMinima = 120 – Média regular

O aluno aprovado via exame terá média final igual a 60 registrado no sistema.

Faça um programa que receba a nota das 3 provas, 1 nota dos projetos menores e
1 nota do projeto do game (todas as notas entre 0 e 100) e informe se o aluno
está aprovado ou terá que realizar o exame.
Em caso de exame o sistema deverá solicitar a nota do exame e informar se o
aluno está aprovado ou reprovado e qual sua nota final (com uma casa decimal).
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){

  float numerador, denominador;  //Declara a variável para o numerador e denominador;
  //setbuf(stdin, NULL); - Apagar o buffer

  printf("Insira a fracao (x/y): "); //Exibe uma pergunta para o usuário
  scanf("%f/%f", &numerador, &denominador); //Lê o denominador

  if ((int)numerador%(int)denominador == 0) {
      printf("%.2f/%.2f eh uma fracao aparente!\n", numerador, denominador);
  } else if (numerador < denominador) {
      printf("%.2f/%.2f eh uma fracao propria!\n", numerador, denominador);
  } else if (numerador > denominador) {
      printf("%.2f/%.2f eh uma fracao impropria!\n", numerador, denominador);
  }

  return 0;
}//main
