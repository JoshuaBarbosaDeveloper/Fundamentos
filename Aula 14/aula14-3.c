/*
@file: aula14-3.case
@author: Joshua Barbosa
@date: 26 Nov 21
@brief: Exercício 3 da aula 14

3) Escreva um procedimento que recebe por parâmetro as 3 notas de um aluno e
uma letra. Se a letra for A, o procedimento calcula a média aritmética das notas
 do aluno, se for P, a sua média ponderada (pesos: 5, 3 e 2) e se for S, a soma
  das notas. O valor calculado também deve ser retornado e exibido na função
   main.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* Retornar médias ou soma;
* \param note[0] primeira nota;
* \param note[1] segunda nota;
* \param note[2] terceira nota;
* \return choice escolha do usuario;;
*/

float school(float note1, float note2, float note3, char choice){

    //Comparação
    switch (choice){
        case 'A':
        case 'a':
            //Realiza e retorna a média aritmética;
            result = (note1+note2+note3)/3;
            return result;

        case 'P':
        case 'p':
            //Realiza e retorna a média ponderada;
            return ((note1*5)+(note2*3)+(note3*2))/10;

        case 'S':
        case 's':
            //Realiza e retorna a soma;
            return (note1+note2+note3);

        default:
            return 0;
    }
}

int main(){
    //Declara variavel;
    float notes[3] = {0, 0, 0}, result;
    char choice;

    printf("Insira as 3 notas: \n");
    //Ler os valores inseridos;
    for (int i = 0; i<3; i++){
        scanf("%f", &notes[i]);
        setbuf(stdin, NULL);
    }

    printf("A - MEDIA ARITMETICA;\n");
    printf("P - MEDIA PONDERADA;\n");
    printf("S - SOMA;\n ");
    //Pergunta e lê valores;
    printf("\nQual sua opcao? ");
    scanf("%c", &choice);
    setbuf(stdin, NULL);

    //Chama a função e exibe;
    result = school(notes[0], notes[1], notes[2], choice);
    printf("\nResultado: %.2f\n", result);


  return 0;
}//main
