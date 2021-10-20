/*
@file: aula07-1.case
@author: Joshua Barbosa
@date: 19 Out 21
@brief: Exercício 1 da aula 7

1) Crie um programa que forneça um menu com duas opções. Caso o usuário
digite 1, o programa solicitará um número e verificará se o valor é par ou
impar.  Caso o usuário digite 2, o programa solicitará uma idade e verificará
se pessoa é maior ou menor de idade.Veja o exemplo de menu abaixo:*/
#include <stdio.h>
#include <stdlib.h>

int main(){
  int escolha, idade; //Declara a variável para a escolha e a idade;
  float num; //Declara a variável para um numero qualquer;

  //Mostra para o usuário um menu
  printf("Menu do Programa: \n");
  printf("1 - Verificador Par/Impar \n");
  printf("2 - Verificador Maioridade \n");
  printf("Digite sua opcao: ");
  scanf("%i", &escolha); //Lê a escolha do usuário

  switch (escolha){ //Inicia a construção de para multiplas alternativas
    case 1: //Caso a opcao escolhida for igual a 1
      printf("Digite um numero para verificar: "); //Exibe uma mensagem para o usuario
      scanf("%f", &num); //Lê a entrada do usario para num

      if ((int)num%2 == 0){ //Caso o resto do numero divido por 2 for igual a 0
        printf("O numero %.2f eh par!\n", num ); //Exibe isso
      } else { //Caso não for
        printf("O numero %.2f eh impar!\n", num ); //Isso será mostrado
      }
      break; //Término

    case 2: //Caso a opcao escolhida for igual a 2
      printf("Digite a idade para verificar: "); //Exibe uma mensagem para o usuario
      scanf("%i", &idade); //Lê a entrada do usuario para idade

      if (idade >= 18){ //Caso a idade for maior ou igual à 18
        printf("Maior de idade!\n"); //Exibe Isso
      } else { //Se não for
        printf("Menor de idade!\n"); //Isso será mostrado
      }
      break; //Término

    default: //Caso não seja atendido a nenhum caso
      printf("Nao existe uma instrucao com essa escolha!\n");
      break; //Término

  } //Fim switch

  return 0;
}//main
