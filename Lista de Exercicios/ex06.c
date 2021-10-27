/*
@file: ex06.case
@author: Joshua Barbosa
@date: 25 Out 21
@brief: Exercício 6  da lista de exercícios

5)  Um professor maluco da UTFPR avalia seus alunos da seguinte maneira:

3 provas (com peso 20 cada)
10 pontos para trabalhos menores durante o semestre
1 projeto de um jogo com peso 30

A média regular do aluno será dada pela soma das notas das 3 provas, nos
projetos menores e do projeto do game. O aluno que atingir a nota igual ou
superior a 60 estará aprovado, caso contrário, o aluno deverá realizar um exame
 onde a nota mínima necessária será dada pela fórmula:

NotaMinima = 120 – Média regular

O aluno aprovado via exame terá média final igual a 60 registrado no sistema.

Faça um programa que receba a nota das 3 provas, 1 nota dos projetos menores e
1 nota do projeto do game (todas as notas entre 0 e 100) e informe se o aluno
está aprovado ou terá que realizar o exame.
Em caso de exame o sistema deverá solicitar a nota do exame e informar se o
aluno está aprovado ou reprovado e qual sua nota final (com uma casa decimal).
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){

  float prova1, prova2, prova3, trabalho, projeto, media, exame, notaminima;  //Declara as variáveis para provas, trabalho, exame e para a media;
  //setbuf(stdin, NULL); - Apagar o buffer

  printf("Insira a nota da prova 1: "); //Exibe uma pergunta para o usuário
  scanf("%f", &prova1); //Lê as prova

     do{ //Ira pedir novas notas
         printf("Voce inseriu a nota da prova 1 errada! Tente novamente: "); //Exibe uma pergunta para o usuário
         scanf("%f", &prova1); //Lê as provas

     } while(prova1>100 || prova1<0); //Até que se encaixe


  printf("Insira a nota da prova 2: "); //Exibe uma pergunta para o usuário
  scanf("%f", &prova2); //Lê as prova

     do{ //Ira pedir novas notas
         printf("Voce inseriu a nota da prova 2 errada! Tente novamente: "); //Exibe uma pergunta para o usuário
         scanf("%f", &prova2); //Lê as provas

     } while(prova2>100 || prova2<0); //Até que se encaixe

  printf("Insira a nota da prova 3: "); //Exibe uma pergunta para o usuário
  scanf("%f", &prova3); //Lê as prova

     do{ //Ira pedir novas notas
         printf("Voce inseriu a nota da prova 3 errada! Tente novamente: "); //Exibe uma pergunta para o usuário
         scanf("%f", &prova3); //Lê as provas

     } while(prova3>100 || prova3<0); //Até que se encaixe

  printf("Insira a nota total dos trabalhos menores: "); //Exibe uma pergunta para o usuário
  scanf("%f", &trabalho); //Lê o trabalho

     do{ //Ira pedir novas notas
         printf("Voce inseriu a nota dos trabalhos errada! Tente novamente: "); //Exibe uma pergunta para o usuário
         scanf("%f", &trabalho); //Lê as provas

     } while(trabalho>100 || trabalho<0); //Até que se encaixe

  printf("Insira a nota do projeto do jogo: "); //Exibe uma pergunta para o usuário
  scanf("%f", &projeto); //Lê o trabalho

     do{ //Ira pedir novas notas
         printf("Voce inseriu a nota do projeto errada! Tente novamente: "); //Exibe uma pergunta para o usuário
         scanf("%f", &projeto); //Lê as provas

     } while(projeto>100 || projeto<0); //Até que se encaixe

  media = (((prova1 + prova2 + prova3)*20)+(trabalho*10)+(projeto*30))/100;//Realiza o calculo da media ponderada

  if (media >= 60){ //Caso a media for maior/igual que 60
      printf("Parabens! Voce foi aprovado com uma media de %2.f! :)", media); //Exibe para o usuario a aprovação
  } else { //Se for menor
      //Exibe para o usuario a necessidade da realizacao do exame
      printf("Infelizmente voce nao atingiu a nota suficiente... Realize o exame e nos informe usa nota: ");
      //Le a nota do exame
      scanf("%f", &exame);

      notaminima = (120-media); //Faz o calculo para a notaminima

      if(exame >= notaminima){ //Caso a nota do exame for maior/igual
          printf("Parabens! Agora sim voce foi aprovado! :)");//Exibe que ele foi aprovado
      } else { //Se nao
          printf("Que pena! Voce reprovou... :("); //Reprovado
      }

  }

  return 0;
}//main
