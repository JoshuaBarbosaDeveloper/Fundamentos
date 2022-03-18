/*
@file: aula14-5.case
@author: Joshua Barbosa
@date: 26 Nov 21
@brief: Exercício 5 da aula 14

 5) Crie uma função que receba o valor de um inteiro positivo N, calcule e
 retorne o fatorial desse número.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
* Retornar fatorial
* \param number numero para calcular a fatorial;

* \return retornar fatorial;
*/

char calculator(int number){
    //Declarar variável;
    int factorialResult;

    //Percorrer o numero;
    for (factorialResult = 1; number > 1; number = number-1){
        //Calcular fatorial
        factorialResult = factorialResult * number;
    }

    return factorialResult;

}

int main(){
    //Declara variável para o numero e fatorial;
    int number = 0;
    char factorial;

    //Recebe o numero até que atenda o requisito;
    do{
        printf("Insira um numero positivo: ");
        scanf("%d", &number);

    } while (number<1);

    //Chama a função e exibe;
    factorial = calculator(number);
    printf("\nFatorial desse numero: %d\n", factorial);


  return 0;
}//main
