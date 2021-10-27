/*
@file: ex07.case
@author: Joshua Barbosa
@date: 25 Out 21
@brief: Exercício 7  da lista de exercícios

7) Considerando uma aplicação de renda fixa, faça um programa que receba o
 capital investido, a taxa (em %) e a quantidade de meses. O programa deverá
 retornar o montante final considerando o desconto do imposto de renda segundo
  regras abaixo:

22,5% - prazo inferior a 6 meses
20% - de 6 a 12 meses
17,5% - de 12 a 24 meses
15% - igual ou superior a 24 meses

Obs: O imposto é calculado apenas sobre o lucro da aplicação.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
    float capitalInvestido, taxa, meses, montanteFinal, lucro, total; //Declara as variáveis;

    //Exibe perguntas e leem as informações inseridads pelo usuário;
    printf("Qual o capital investido? ");
    scanf("%f", &capitalInvestido);
    printf("Qual a taxa em porcentagem? ");
    scanf("%f", &taxa);
    printf("Quantos meses? ");
    scanf("%f", &meses);

    //Calcula a montante final - M = C (1+i)t
    montanteFinal = capitalInvestido*(pow((1+(taxa/100)),meses));
    //Calcula o lucro
    lucro = montanteFinal - capitalInvestido;

    //Caso meses for menos que 6
    if (meses < 6) {
        //Irá calcular o total, aplicando essa taxa para o imposto
        total = montanteFinal - (lucro*0.225);

    } else if (meses >= 6 && meses <12){ //Caso meses for maior ou igual a 6 até 12
        //Irá calcular o total, aplicando essa taxa para o imposto
        total = montanteFinal - (lucro*0.20);

    } else if (meses >= 12 && meses <24){ //Caso meses for maior ou igual a 12 até 24
        //Irá calcular o total, aplicando essa taxa para o imposto
        total = montanteFinal - (lucro*0.175);

    } else if (meses >= 24){ ////Caso meses for maior ou igual que 24
        //Irá calcular o total, aplicando essa taxa para o imposto
        total = montanteFinal - (lucro*0.15);
    }

    printf("O montante final descontado com juros eh de: %.2f\n", total);

  return 0;
}//main
