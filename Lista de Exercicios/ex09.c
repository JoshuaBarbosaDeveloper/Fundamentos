/*
@file: ex09.case
@author: Joshua Barbosa
@date: 26 Out 21
@brief: Exercício 9  da lista de exercícios

8) Faça um programa que receba o dia, mês e ano de uma data e informe se é uma
 data válida ou não
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
    int dia, mes, ano; //Declara as variáveis;

    //Exibe perguntas e leem as informações inseridads pelo usuário;
    printf("Insira a data (dd/mm/aa): ");
    scanf("%i/%i/%i", &dia, &mes, &ano);

    if (mes>12){
        printf("Essa eh uma data invalida!\n");
        return 0;
    }

    switch (mes){
        //Meses que tem 31 dias: janeiro, março, maio, julho, agosto, outubro e dezembro;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if(dia>31){
                printf("Essa eh uma data invalida!\n");
                return 0;
            }
            break;
        //Meses com 30 dias: abril, junho, setembro e novembro.
        case 4:
        case 6:
        case 9:
        case 11:
            if(dia>30){
                printf("Essa eh uma data invalida!\n");
                return 0;
            }
            break;
        case 2:
            if(ano%4 ==0) {
                if(dia>29){
                    printf("Essa eh uma data invalida!\n");
                    return 0;
                }
            } else if (dia>28){
                printf("Essa eh uma data invalida!\n");
                return 0;
            }
            break;
    }

    printf("Essa data eh valida!\n");
  return 0;
}//main
