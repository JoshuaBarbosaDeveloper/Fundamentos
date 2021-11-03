/*
@file: ex12.case
@author: Joshua Barbosa
@date: 02 Nov 21
@brief: Exercício 12  da lista de exercícios

12) Técnicos analisam a perda da massa do Xenônio-135 e descobriram que o tempo
 de meia vida desse radioisótopo é de 9h. Crie um algoritmo para receber a massa
  inicial em gramas e retorne o tempo necessário para que a massa deste material
   seja menor que 1 grama. Caso o tempo exceda 24h a resposta deve ser dada em
   dias (Ex.: 2 dias e 6 horas).
Obs.: O algoritmo deve calcular o tempo para várias massas, finalizando ao
receber uma massa igual a zero ou negativa.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
    float massa, tempo, cont, dias, horas ;

    printf("Programa para calculo de meia vida do radioisotopo Xenonio-135\n");
    printf("*Observacao: Para parar o programa, insira uma massa igual ou menor que 0!\n\n");

    do{
        printf("Massa para calcular: ");
        scanf("%f", &massa);

        if(massa<1){
            break;
        }

        cont = 0;

        while (massa > 0.999) {
            massa = massa/2;
            cont++;
        }

        tempo = cont*9;

        if (tempo>24){
            dias = (int)tempo/24;
            horas = (int)tempo%24;

            printf("Tempo necessario para que a massa deste material seja menor que 1 grama: %0.f dias e %0.2f horas.\n\n", dias, horas);

        } else {
            printf("Tempo necessario para que a massa deste material seja menor que 1 grama: %0.f horas \n\n", tempo);
        }


    } while(massa>0);

    printf("\n\nObrigado por utilizar nosso software!");

  return 0;
}//main
