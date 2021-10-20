/*
@file: aula07-2.case
@author: Joshua Barbosa
@date: 19 Out 21
@brief: Exercício 2 da aula 7

2) Crie uma calculadora usando a instrução switch, que pergunte qual das
operações básicas quer fazer (+, -, * e /), em seguida peça os dois números
e mostre o resultado da operação matemática entre eles.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
  char escolha; //Declara a variável para a escolha;
  float num1, num2, resultado; //Declara a variável para dois numeros quaisqueres e para resultado;

  //Mostra para o usuário um menu
  printf("Menu do Programa Calculadora: \n");
  printf("+ - Adicao \n");
  printf("- - Subtracao \n");
  printf("* - Multiplicacao \n");
  printf("/ - Divisao \n");
  printf("Digite sua opcao: ");
  scanf("%c", &escolha); //Lê a escolha do usuário

  switch (escolha){ //Inicia a construção de para multiplas alternativas
    case '+': //Caso a opcao escolhida for igual a 1
      printf("Digite o primeiro numero: "); //Exibe uma mensagem para o usuario
      scanf("%f", &num1); //Lê a entrada do usario para num
      printf("Digite o segundo numero: "); //Exibe uma mensagem para o usuario
      scanf("%f", &num2); //Lê a entrada do usario para num

      resultado = num1 + num2; //Realiza a soma dos 2 numeros

      printf("O resultado da adicao de %2.f + %2.f = %f\n", num1, num2, resultado); //Exibe o resultado para o usuario

      break; //Término

    case '-': //Caso a opcao escolhida for igual a 2
      printf("Digite o primeiro numero: "); //Exibe uma mensagem para o usuario
      scanf("%f", &num1); //Lê a entrada do usario para num
      printf("Digite o segundo numero: "); //Exibe uma mensagem para o usuario
      scanf("%f", &num2); //Lê a entrada do usario para num

      resultado = num1 - num2; //Realiza a subtracao dos 2 numeros

      printf("O resultado da subtracao de %2.f - %2.f = %f\n", num1, num2, resultado); //Exibe o resultado para o usuario

      break; //Término

    case '*': //Caso a opcao escolhida for igual a 3
      printf("Digite o primeiro numero: "); //Exibe uma mensagem para o usuario
      scanf("%f", &num1); //Lê a entrada do usario para num
      printf("Digite o segundo numero: "); //Exibe uma mensagem para o usuario
      scanf("%f", &num2); //Lê a entrada do usario para num

      resultado = num1 * num2; //Realiza a multiplicacao dos 2 numeros

      printf("O resultado da multiplicacao de %2.f * %2.f = %f\n", num1, num2, resultado); //Exibe o resultado para o usuario

      break; //Término

    case '/': //Caso a opcao escolhida for igual a 4
      printf("Digite o primeiro numero: "); //Exibe uma mensagem para o usuario
      scanf("%f", &num1); //Lê a entrada do usario para num
      printf("Digite o segundo numero: "); //Exibe uma mensagem para o usuario
      scanf("%f", &num2); //Lê a entrada do usario para num

      resultado = num1 / num2; //Realiza a divisao dos 2 numeros

      printf("O resultado da divisao de %2.f / %2.f = %f\n", num1, num2, resultado); //Exibe o resultado para o usuario

      break; //Término

    default: //Caso não seja atendido a nenhum caso
      printf("Nao existe uma instrucao com essa escolha!\n");
      break; //Término

  } //Fim switch

  return 0;
}//main
