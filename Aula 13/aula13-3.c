/*
@file: aula13-3.case
@author: Joshua Barbosa
@date: 22 Nov 21
@brief: Exercício 3 da aula 13

3) Desenvolva um programa que armazene o nome e o telefone de 5 pessoas. Ao
digitar a posição desejada, o programa deve exibir o nome e telefone daquela
posição. O programa finaliza ao receber a entrada -1.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  //Declara um vetor para os nomes;
  char names[5][21];
  //Declara variável para telefone, linha e escolha;
  int telephone[5];
  int line, choice = 0;

  //Preenchendo os nomes do vetor;
  for (line = 0; line < 5; line++){
      //Pede para o usuário;
      printf("(%d/5) - Insira o nome: ", line+1);
      //Recebe o nome;
      fgets(names[line], 21, stdin);
      names[line][strcspn(names[line],"\n")] = '\0';
      //Limpa buff;
      setbuf(stdin, NULL);
      //Pede para o usuário
      printf("(%d/5) - Insira o telefone: ", line+1);
      //Recebe o salário e limpa o buffer;
      scanf("%d", &telephone[line]);
      setbuf(stdin, NULL);
      printf("\n");
  }

  //Mensagem boas vindas;
  printf("--- Bem Vindo ao Software da Lista Telefonica ---\n");
  printf("Atualmente temos 5 contatos salvos, qual contado deseja exibir? \n");

  //Garantir que a escolha esteja dentro dos paramentros disponiveis;
  while (choice >= -1 && choice <= 5) {
      //Le a escolha
      scanf("%d", &choice);
      setbuf(stdin, NULL);

      //Se nao estiver dentro
      if (choice < -1 || choice > 5){
          //Solicita uma nova escolha até que se adeque;
          do{
              printf("Por favor insira um contato disponivel!");
              scanf("%d", &choice);
              setbuf(stdin, NULL);
          } while (choice < -1 || choice > 5);
      }

      //Caso a escolha seja sair;
      if (choice == -1){
          break;
        }

      //Exibição das escolhas;
      printf("\nContato selecionado: %d\n", choice);
      printf("Nome: %s\n", names[choice-1]);
      printf("Telefone: %d\n\n", telephone[choice-1]);
      printf("Caso queira continuar a busca, digite um contato valido, se nao digite -1: ");

  }

  printf("\n\nObrigado por utilizar nosso software! \n");
  //Exibir lista dos nomes;

  return 0;
}//main
