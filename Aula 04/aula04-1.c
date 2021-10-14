/*
@file: aula04-1.case
@author: Joshua Barbosa
@date: 06 Out 21
@brief: Exercício 1 da aula 4

1)  Escreva um programa para determinar a quantidade de litros de combustível gastos em uma
viagem por um automóvel que faz 12 km/litro. Para isso, sabe-se que o tempo gasto na viagem
 é de 35 min e a velocidade média do automóvel é 80 km/h.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
 float tempoGastoMinutos = 35; //Declara a variável para armazenar o tempo da viagem em minutos;
 float tempoGastoHoras = 0; //Declara a variável para armazenar o tempo da viagem em horas;
 float vmCarro = 80; //Declara e define a velocidade média do automovel em km/h
 float kmPercorrido = 0; //Declara a variável para armazenar o gastos de uma viagem;
 float tanque = 12; //Declara e define quanto o automovel gasta de combustivel em km/l;
 float gastoViagem = 0; //Declara a variável para armazenar o gastos de uma viagem;

   tempoGastoHoras= tempoGastoMinutos/60; //Define o valor de tempoViagem, sendo 35 minutos/60, para saber o equivalente desse tempo em horas;
   kmPercorrido = tempoGastoHoras*vmCarro; // Define quantos km o carro percorreu, multiplicando o tempo de viagem com a distância;
   gastoViagem = kmPercorrido/tanque; //Define o quanto o carro gastou de combustivel;

   printf("\nNessa viagem, esse carro gastou %.2f litros por km.\n", gastoViagem); //Exibe para o usuário o resultado;
 return 0;
}//main
