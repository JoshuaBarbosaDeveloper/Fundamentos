/*
@file: ex08.case
@author: Joshua Barbosa
@date: 26 Out 21
@brief: Exercício 8  da lista de exercícios

8) Crie um programa que, ao receber três números, verifique se podem ser lados
 de um triângulo e nesse caso mostre se o triângulo é equilátero, isosceles ou
 escaleno. Caso seja um triângulo retângulo, o programa deve também informar.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
    float medida1, medida2, medida3, ab, c; //Declara as variáveis;

    //Exibe perguntas e leem as informações inseridads pelo usuário;
    printf("Considere:\nMedida 1 - Cateto adjacente\nMedida 2 - Cateto oposto\nMedida 2 - Hipotenusa\nQual as 3 medidas do triangulo? ");
    scanf("%f %f %f", &medida1, &medida2, &medida3);

    if (medida1 != medida2 && medida2 != medida3 && medida1 != medida3){
        printf("Esse eh um triangulo escaleno!\n");

    } else if (medida1 == medida2 && medida2 == medida3 ){
        printf("Esse eh um triangulo equilatero!\n");


    } else if (medida1 == medida2 || medida2 == medida3 || medida1 == medida3){
        printf("Esse eh um triangulo isosceles!\n");
    }

    ab = pow(medida1,2)+pow(medida2,2);
    c = pow(medida3,2);

    if(ab == c) {
        printf("Esse triangulo  eh retangulo!\n");
    } else {
        printf("Esse triangulo nao eh retangulo!\n");
    }

  return 0;
}//main
