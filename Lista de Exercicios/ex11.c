/*
@file: ex11.case
@author: Joshua Barbosa
@date: 01 Nov 21
@brief: Exercício 11  da lista de exercícios

11) Desenvolva um algoritmo que receba vários números no intervalo fechado de 1
a 1000. Ao receber um valor fora da faixa, o programa deverá exibir a soma dos
números pares e o produto dos números ímpares e finalizar.
Obs: O valor fora da faixa utilizado para sair não deverá entrar na conta da
soma nem do produto.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
    float num, soma, produto = 1;

    do{
        printf("Digite um numero: ");
        scanf("%f", &num);

        while (num>0 && num<1001){

            if ((int)num%2==0) {
                soma = num + soma;
                break;
            } else {
                produto = produto * num;
                break;
            }

        }

    } while(num>0 && num<1001);

    if (produto == 1){
        produto = 0;
    }

    printf("Soma dos numeros pares: %2.f\n", soma);
    printf("Produto dos numeros impares: %2.f\n", produto);

  return 0;
}//main
