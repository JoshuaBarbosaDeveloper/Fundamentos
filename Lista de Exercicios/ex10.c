/*
@file: ex10.case
@author: Joshua Barbosa
@date: 26 Out 21
@brief: Exercício 10  da lista de exercícios

10) Desenvolva um programa que receba um valor de 1 a 99 e exiba o valor por extenso
Ex:
Digite um Número: 74
Valor por extenso: setenta e quatro
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
    int num, dezena, unidade;

    do{
        printf("Digite um numero: ");
        scanf("%i", &num);
    } while (num<1 || num >99);

    printf("Valor por extenso: ");

    dezena = (num-(num%10))/10;
    unidade = num%10;

    switch (num){
        case 10:
            printf("dez\n");
            return 0;
        case 11:
            printf("onze\n");
            return 0;
        case 12:
            printf("doze\n");
            return 0;
        case 13:
            printf("treze\n");
            return 0;
        case 14:
            printf("quatorze\n");
            return 0;
        case 15:
            printf("quinze\n");
            return 0;
        case 16:
            printf("dezesseis\n");
            return 0;
        case 17:
            printf("dezessete\n");
            return 0;
        case 18:
            printf("dezoito\n");
            return 0;
        case 19:
            printf("dezenove\n");
            return 0;

    }

    switch (dezena) {
        case 2:
            printf("vinte ");
            break;
        case 3:
            printf("trinta ");
            break;
        case 4:
            printf("quarenta ");
            break;
        case 5:
            printf("cinquenta ");
            break;
        case 6:
            printf("sessenta ");
            break;
        case 7:
            printf("setenta ");
            break;
        case 8:
            printf("oitenta ");
            break;
        case 9:
            printf("noventa ");
            break;

    }

    switch (unidade) {
        case 1:
            printf("um\n");
            break;
        case 2:
            printf("dois\n");
            break;
        case 3:
            printf("tres\n");
            break;
        case 4:
            printf("quatro\n");
            break;
        case 5:
            printf("cinco\n");
            break;
        case 6:
            printf("seis\n");
            break;
        case 7:
            printf("sete\n");
            break;
        case 8:
            printf("oito\n");
            break;
        case 9:
            printf("nove\n");
            break;
        case 10:
            printf("dez\n");
            break;

    }

    printf("\n");

  return 0;
}//main
