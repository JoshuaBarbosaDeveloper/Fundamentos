/*
@file: aula13-2.case
@author: Joshua Barbosa
@date: 22 Nov 21
@brief: Exercício 2 da aula 13

2) Faça um programa que armazene o nome e salário de 5 empregados. Em seguida
 calcule um aumento de 8% nos salários e exiba a nova folha de pagamentos.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  //Declara um vetor para os nomes;
  char names[5][21];
  //Declara variável para linha e salario;
  float wage[5];
  int line;

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
      printf("(%d/5) - Insira a remuneracao: ", line+1);
      //Recebe o salário e limpa o buffer;
      scanf("%f", &wage[line]);
      setbuf(stdin, NULL);
      printf("\n");

  }

  //Atualizar a folha de pagamento
  for(line = 0; line <5; line++){
      //Aumento de 8%;
      wage[line] = wage[line] + (wage[line]*0.08);
  }

  //Exibir lista dos nomes;
  printf("\nFolha de pagamento atualizada:\n");
  //Percorrer a linha;
  for (line=0; line<5; line++){
          //Exibe o nome
          printf("Empregado: %s\n", names[line]);
          printf("Salario: %.2f reais\n\n", wage[line]);
      }

  return 0;
}//main
