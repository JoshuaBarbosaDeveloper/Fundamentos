/**
 * @file aula16-1.c
 * @author Joshua Barbosa
 * @brief 1) Faça um algoritmo que implemente uma função que receba 3 números
          inteiros e retorne o maior valor;
 * @version 0.1
 * @date 2022-03-23
 *
 * @copyright Copyright (c) 2022
 *
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
    //Variavel auxiliar para armazenar o maior numero;
    int bigger = number1;

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

    printf("Insira 3 numeros: \n");

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
