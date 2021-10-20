/*
@file: aula07-3.case
@author: Joshua Barbosa
@date: 19 Out 21
@brief: Exercício 3 da aula 7

3) Altere o exercício anterior para receber os 3 valores no mesmo scanf.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
  char escolha; //Declara a variável para a escolha;
  float num1, num2, resultado; //Declara a variável para dois numeros quaisqueres e para resultado;

  //Mostra para o usuário uma mensagem
  printf("Digite a conta a ser realizada: ");
  scanf("%f %c %f", &num1, &escolha, &num2); //Lê a escolha do usuário

  switch (escolha){ //Inicia a construção de para multiplas alternativas
    case '+': //Caso a opcao escolhida for igual a 1
      resultado = num1 + num2; //Realiza a soma dos 2 numeros

      printf("O resultado da adicao de %2.f + %2.f = %f\n", num1, num2, resultado); //Exibe o resultado para o usuario

      break; //Término

    case '-': //Caso a opcao escolhida for igual a 210
      resultado = num1 - num2; //Realiza a subtracao dos 2 numeros

      printf("O resultado da subtracao de %2.f - %2.f = %f\n", num1, num2, resultado); //Exibe o resultado para o usuario

      break; //Término

    case '*': //Caso a opcao escolhida for igual a 3
      resultado = num1 * num2; //Realiza a multiplicacao dos 2 numeros

      printf("O resultado da multiplicacao de %2.f * %2.f = %f\n", num1, num2, resultado); //Exibe o resultado para o usuario

      break; //Término

    case '/': //Caso a opcao escolhida for igual a 4
      resultado = num1 / num2; //Realiza a divisao dos 2 numeros

      printf("O resultado da divisao de %2.f / %2.f = %f\n", num1, num2, resultado); //Exibe o resultado para o usuario

      break; //Término

    default: //Caso não seja atendido a nenhum caso
      printf("Nao existe uma instrucao com essa escolha!\n");
      break; //Término

  } //Fim switch

  return 0;
}//main
