/*
@file: ex02.case
@author: Joshua Barbosa
@date: 25 Out 21
@brief: Exercício 2 da lista de exercícios

2) Fazer um programa para ler as coordenadas x e y de dois pontos e calcular a
distância entre os dois pontos no plano, através da seguinte fórmula:


*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){

  float x1,x2, y1, y2, d;  //Declara a variável para x, y e a distancia;
  //setbuf(stdin, NULL); - Apagar o buffer

  printf("Qual o ponto A? (Insira valores para x1 e x2) "); //Exibe uma pergunta para o usuário
  scanf("%f %f", &x1, &x2); //Lê a cordenada x1 e x2

  printf("Qual o ponto B? (Insira valores para y1 e y2) "); //Exibe uma pergunta para o usuário
  scanf("%f %f", &y1, &y2); //Lê a cordenada y1 e y2

  d = sqrt(pow((x2 - x1),2)+pow((y2 - y1),2));

  printf("A distancia entre esses dois pontos eh de: %f\n", d);




  return 0;
}//main
