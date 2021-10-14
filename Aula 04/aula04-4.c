/*
@file: aula04-4.case
@author: Joshua Barbosa
@date: 06 Out 21
@brief: Exercício 4 da aula 4

4)   Tendo a Altura da pessoa definida como uma constante, calcule seu peso ideal utilizando a seguinte fórmula:
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
 const float altura = 1.77; //Declara a constante altura em m;
 float pesoIdeal = 0; //Declara a variável para armazenar o peso ideal;

 pesoIdeal = (72.7*altura)-58; //Calcula o peso ideal;

 printf("O peso ideal seria de %.2f kg\n", pesoIdeal); //Exibe para o usuário o peso ideal;
 return 0;
}//main
