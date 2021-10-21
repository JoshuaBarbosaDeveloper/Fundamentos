/*
@file: aula08-8.case
@author: Joshua Barbosa
@date: 20 Out 21
@brief: Exercício 8 da aula 8

8) Faça um menu que mostre 3 opções

Menu do programa:
1 - Teste 1
2 - Teste 2
3 – Sair do programa
Digite sua opção:

A primeira opção imprime o texto “Teste1” e mostra o menu novamente.
A segunda opção imprime “Teste2” e mostra o menu novamente.A terceira opção
finaliza o programa.Caso digite uma opção diferente, deve mostrar uma mensagem
 de erro e mostrar o menu novamente.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
  int escolha=0;  //Declara a variável para a escolha;

  while (escolha != 3){ //Enquanto a escolha for diferente que 3
      //Exibe esse menu para o usuário
      printf("Menu do Programa: \n");
      printf("1 - Teste 1\n");
      printf("2 - Teste 2\n");
      printf("3 - Sair do programa\n");
      printf("Digite sua opcao: ");
      scanf("%i", &escolha );
      setbuf(stdin, NULL); //Limpa o buffer


      switch (escolha){ //Caso escolha seja igual a..
          case 1: //1
            printf("Teste1\n\n"); //Mostra esse texto para o usuário
            break; //Finaliza o programa

          case 2: //2
            printf("Teste2\n\n"); //Mostra esse texto para o usuário
            break;//Finaliza o programa

          case 3: //3
            printf("\nObrigado por utilizar nosso software!\n"); //Mostra esse texto para o usuário
            break; //Finaliza o programa

          default: //Padrão
            printf("Opcao invalida! Tente novamente. \n\n"); //Mostra esse texto para o usuário


      } //Fim switch
       
  } //Fim while

  return 0;
}//main
