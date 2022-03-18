#include <stdio.h>
#include <stdlib.h>

float peso_ideal( char sexo, float altura) {
    float resultado;
      if ( sexo == 'm') {
      resultado = (62.1 * altura) - 44.7;
      } else {
      if (sexo == 'f') {
      resultado = (72.7 * altura) - 58;
      } else {
     printf("Caractere invalido\n");
    }
  }
      return resultado;
}//peso_ideal



   int main() {
      char sexo;
      float altura, resultado, valor_final;
      printf("Qual o seu sexo?\n");
      printf("Digite f para feminimo e m para masculino:");
      scanf("%c", &sexo );
      printf("Digite sua altura:");
      scanf("%f", &altura );
      valor_final = peso_ideal(sexo,altura);//chama a função
      printf("Seu peso ideal e: %2.f\n", valor_final );


      return 0;
}// main
