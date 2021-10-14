 /*
@file: aula03.case
@author: Muriel Godoi
@date: 06 Out 21
@brief: Exercício 1 da aula 3

1) Elabore um programa que exiba o seu nome na primeira linha e o seu e-mail segunda.
 Em seguida, exiba uma mensagem solicitando para o usuário pressionar uma tecla.
 Quando o usuário pressionar, exiba em uma nova linha o nome do seu amigo e, em outra, o e-mail dele.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
  char nome[] = "Joshua Zamberlam Barbosa\n";
  char email[] = "joshuazamberlambarbosa@gmail.com\n";
  char nome2[] = "Gustavo da Silva Santos\n";
  char email2[] = "gusgocegamer@gmail.com\n";
  char caracter;
    printf("Nome: %s \nEmail: %s\n", nome, email);
    printf("Para ver mais informacoes, pressione uma tecla!");
    caracter=getchar();
    printf("\nNome: %s \nEmail: %s\n", nome2, email2);
  return 0;
}//main
