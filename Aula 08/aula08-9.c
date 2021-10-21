/*
@file: aula08-9.case
@author: Joshua Barbosa
@date: 20 Out 21
@brief: Exercício 9 da aula 8

9) Faça um programa que simule um jogo, onde o usuário deverá descobrir um
número aleatório escolhido pelo computador (de 1 a 100).O usuário poderá
realizar até 6 tentativas, o programa deverá retornar as mensagens “muito
alto”, “muito baixo” até o usuário acertar o número ou esgotar o número
máximo de tentativas
*/
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){
  int cont=1, numAleatorio, palpite;  //Declara a variável para o contador;

  srand(time(NULL));
  numAleatorio = 1+(rand()%100);

  while (cont <= 6){ //Enquanto a escolha for diferente que 3
      //Exibe esse menu para o usuário
      printf("Tentativa %i de 6 - Qual seu palpite? ", cont);
      scanf("%i", &palpite);

      if (palpite == numAleatorio){
          printf("Parabens! Voce ganhou.\n");
          break;
      } else if (palpite > numAleatorio) {
          printf("Muito alto!\n");
      } else {
          printf("Muito baixo!\n");
      }

      cont++;


  } //Fim while

  if (cont==7){
      printf("\nTentativas esgotadas! Fim de jogo.\n" );
  }

  return 0;
}//main
