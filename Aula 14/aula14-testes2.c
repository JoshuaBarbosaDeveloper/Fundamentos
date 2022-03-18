/*
@file: ex3a14.c
@author: Sefora Davanso
@date: 27/11/21
@brief:ex3a14
3) Escreva um procedimento que recebe por parâmetro as 3 notas de um
aluno e uma letra. Se a letra for A, o procedimento calcula a média
aritmética das notas do aluno, se for P, a sua média ponderada (pesos: 5, 3
e 2) e se for S, a soma das notas. O valor calculado também deve ser
retornado e exibido na função main.
*/

#include <stdio.h>
#include <stdlib.h>


float peso_fem( float altura) {
    float peso_ideal;
     peso_ideal = (62.1 * altura) - 44.7;
     return peso_ideal;
}//peso_fem

float peso_mas(float altura) {
    float peso_ideal;
     peso_ideal = (72.7 * altura) - 58;
     return peso_ideal;
}//peso_mas

   int main() {
      char sexo;
      float peso_ideal, valor_final, altura;

      printf("Qual o seu sexo?\n");
      printf("Digite f para feminimo e m para masculino:");
      scanf("%c", &sexo );
      printf("Digite sua altura:");
      scanf("%f", &altura );

      if ( sexo == 'm') {
      valor_final = peso_mas(altura);//Chama a função
      } else {
       if (sexo == 'f') {
       valor_final = peso_fem(altura);//Chama a função
       } else {
         printf("Caractere invalido\n");
        }
    }

    printf("peso ideal: %2.f", valor_final);



      return 0;
}// main
