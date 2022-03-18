/*
@file: aula14-4.case
@author: Joshua Barbosa
@date: 26 Nov 21
@brief: Exercício 4 da aula 14

4) Faça uma função que receba a média final de um aluno por parâmetro e retorne
 o seu conceito, conforme a tabela abaixo:
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
* Retornar conceito
* \param note nota a ser comparada;

* \return retornar conceito;
*/

char calculator(float note){

    //Comparação da nota
    if (note > 9 && note <= 10){
        return 'A';

    } else if (note > 7 && note <= 9){
        return 'B';

    } else if (note > 5 && note <= 7){
        return 'C';

    } else if (note >= 0 && note <= 5){
        return 'D';

    } else {
        return '?';
    }
}

int main(){
    //Declara variável para nota e conceito;
    float note = 0;
    char concept;

    //Ler os valores inseridos;
    printf("Insira a nota: \n");
    scanf("%f", &note);

    //Chama a função e exibe;
    concept = calculator(note);
    printf("\nConceito: %c\n", concept);


  return 0;
}//main
