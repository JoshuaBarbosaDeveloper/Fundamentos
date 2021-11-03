/*
@file: ex13.case
@author: Joshua Barbosa
@date: 02 Nov 21
@brief: Exercício 13  da lista de exercícios

13) Faça um programa que verifique se um número dado via teclado é primo.
Dica: para saber se um número n é primo, basta dividir por cada um dos números
entre 2 e raiz quadrada de n; se o resto for diferente de zero pra todos ele é primo.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
    int number, cont=2;

    printf("Programa verificador de numeros primos!\n\n");

    printf("Digite um numero: ");
    scanf("%d", &number);

    switch (number){
        case 1:
            printf("Esse numero nao eh primo!\n");
            return 0;
        case 2:
            printf("Esse numero eh primo!\n");
            return 0;
        default:
            do{
                if((int)number%cont==0){
                    printf("Esse numero nao eh primo!\n");
                    return 0;
                } else{
                    cont++;
                }

            } while(cont<sqrt(number));
            printf("Esse numero eh primo!\n");
    }

  return 0;
}//main
