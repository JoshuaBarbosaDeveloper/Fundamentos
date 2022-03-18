/*
@file: aula14-1.case
@author: Joshua Barbosa
@date: 26 Nov 21
@brief: Exercício 1 da aula 14

1) Faça um algoritmo que implemente uma função que receba 3 números inteiros e
 retorne o maior valor;
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
* Retornar maior valor
* \param number[0] primeiro numero a ser comparado;
* \param number[2] segundo numero a ser comparado;
* \param number[3] terceiro numero a ser comparado;
* \return bigger retornar maior numero; 
*/

int checkerBigger(int number1, int number2, int number3){
    //Variavel para armazenar o maior numero;
    int bigger = 0;

    //Comparação para achar o maior número;
    if(bigger < number1){
        bigger = number1;
    }
    if(bigger < number2){
        bigger = number2;
    }
    if(bigger < number3){
        bigger = number3;
    }

    return bigger;
}

int main(){
    //Declara 3 variáveis do tipo inteiro;
    int numbers[3] = {0, 0, 0}, big;

    printf("Insira 3 numero: \n");

    //Ler o valor inserido
    for (int i = 0; i<3; i++){
        scanf("%d", &numbers[i]);
        setbuf(stdin, NULL);
    }

    //Chama a função e exibe;
    big = checkerBigger(numbers[0], numbers[1], numbers[2]);
    printf("Maior numero: %d\n", big);



  return 0;
}//main
