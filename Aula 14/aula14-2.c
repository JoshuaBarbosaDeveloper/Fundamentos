/**
 * @file aula16-2.c
 * @author Joshua Barbosa
 * @brief 2) Elabore uma função que receba por parâmetro o sexo (caractere) e a
    altura de uma pessoa (real), calcule e retorne seu peso ideal. Para isso,
    utilize as fórmulas a seguir.
    - Para homens: (72.7 * altura) - 58
    - Para mulheres: (62.1 * altura) - 44.7
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
* Retornar peso ideal
* \param height altura;
* \param sex sexo;
* \return bigger retornar maior numero;
*/

float idealWeight(float height, char sex){
    //Variavel para armazenar o resultado;
    int result = 0;

    //Comparação para M ou for
    if(sex == 'M' || sex == 'm'){
        //Realiza o calculo
        result = (72.7 * height) - 58;

    } else if (sex == 'F' || sex == 'f') {
        //Realiza o calculo
        result = (62.1 * height) - 44.7;

    }
    return result;
}

int main(){
    //Declara variável;
    float height;
    char sex;
    float result;

    //Perguntar e ler valores;
    printf("Qual seu sexo? Utilize M ou F:");
    scanf("%c", &sex);
    setbuf(stdin, NULL);
    printf("\nQual sua altura?");
    scanf("%f", &height);
    setbuf(stdin, NULL);

    //Chama a função e exibe;
    result = idealWeight(height, sex);
    printf("\nPeso ideal: %.2f kg!\n", result);


  return 0;
}//main
