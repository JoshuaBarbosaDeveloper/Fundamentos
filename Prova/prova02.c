/*
@file: prova02case
@author: Joshua Barbosa
@date: 08 Dez 21
@brief: Prova 02

Na tarde de ontem, 06 de dezembro, alguns servidores da Amazon (AWS) pararam de
 funcionar.Com isso, diversos serviços ficaram indisponíveis. Dentre eles, os
 servidores da Riot responsáveis pelos jogos League of Legends, Valorant e Wild
 Rift.


Você foi convocado em uma missão de emergência para ajudar a identificar os
locais das falhas e reestabelecer os serviços.

Para isso, faça um programa que armazene os dados de 5 cidades onde estão
localizados os servidores com problemas, cada cidade possui: nome
(20 caracteres), quantidade de servidores ativos(inteiro), quantidade de
servidores com problemas (inteiro) e quantidade total de servidores(inteiro).

Para isso, faça:

a) Faça um programa que receba os dados das 5 cidades: nome(strings), a
 quantidade de servidores ativos e a quantidade de servidores com falha
  ( salvos nas duas primeiras colunas de uma matriz de inteiros 5x3). Os
  valores não podem ser negativos, solicite novos valores enquanto o usuário
   digite valores inválidos.

b) Utilizando estruturas de repetição, calcule a quantidade total de servidores
 em cada cidade e salve na última coluna da matriz;

c) Exiba em formato de tabela (com colunas alinhas separadas por | ) os nomes,
 as 3 quantidades de servidores de todos as cidades.

d) Receba um nome de uma cidade e busque ela na lista, todos os dados de seus
 servidores (apenas 1 vez). Exiba uma mensagem informando também caso não
 encontre o nome buscado.

e) Exiba o nome da cidade e a porcentagem da cidade que tem o maior percentual
de servidores com problemas (duas casas decimais).

f) Utilizando estrutura de repetição, calcule e exiba o percentual total de
servidores ativos e de servidores com problemas.

g) Acrescente o texto "Defeated" ao final da string do nome todas as cidades
que têm o número de servidores com problemas maiores que os servidores ativos.
Em seguida exiba o nome de todas as cidades (alteradas ou não).
Ex: "São Paulo" -> "São Paulo Defeated"

Obs.:

Os itens devem ser executados sequencialmente (Não é um menu);
Para obtenção da nota máxima, faça cada item, de A a G, em uma função separada.
 Não utilize variáveis globais.
Sempre que possível, utilize estruturas de repetição;
Bônus do Professor:

Por estar se esforçando e cursando uma universidade em um ano de pandemia, você
 acumulou Influence Points (IP) com o professor. Com isso, você ganhou o bônus
  de escolher, obrigatoriamente, um dos itens de "C" a "G" para ser eliminado
  da questão. Indique o item eliminado com um comentário em seu código
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/**
* Retornar Total de Servidores
* \param activeS - Quantidade de servidores ativos;
* \param offS - Quantidade de servidores com problemas;

* \return serversResult - retornar a soma desses dois tipos de servidores;
*/
int serversTotal(int activeS, int offS){
    //Declarar variável para o resultado;
    int serversResult;
    //Somar servers;
    serversResult = activeS+offS;
    //Retornar resultado;
    return serversResult;
}

int main(){
    //Declarar variáveis;
    int servers[5][3], line, column;
    char city[5][20], cityRecieve[20], defeated[21]=" Defeated";
    float percentageOff[5];
    float bigger, serversOnOff;
    int lineBigger;
    float serversResultOn, serversResultOff, serverOn, serverOff, serverTotal;

    //Percorrer linha
    for (line = 0; line < 5; line++){
        //Pede para o usuário a cidade;
        printf("(%d/5) - Insira a cidade: ", line+1);
        //Recebe o valor;
        fgets(city[line], 20, stdin);
        city[line][strcspn(city[line],"\n")] = '\0';
        setbuf(stdin, NULL);
        //Caso o valor digitado seja negativo;
        do{
            //Receber servidores
            printf("Servidores ativos: ");
            scanf("%i", &servers[line][0]);
            setbuf(stdin, NULL);
            printf("Servidores com falhas: ");
            scanf("%i", &servers[line][1]);
            setbuf(stdin, NULL);
            printf("\n");
        } while (servers[line][0]<0 || servers[line][1]<0 );
    }

    //Percorrer linha;
    for (line=0; line<5; line++){
        //Chamar a função serversTotal;
        servers[line][2] = serversTotal(servers[line][0], servers[line][1]);
    }

    //Exibir indice da tabela;
    printf("              Cidade |            ServersOn |            ServesOff |                Total |\n");
    //Percorrer linha;
    for(line=0; line<5; line++){
        //Exibir cidade;
        printf("%20s | ", city[line]);
        //Percorrer coluna
        for(column=0; column<3; column++){
            //Exibir colunas;
            printf("%20d | ", servers[line][column]);
        }
        printf("\n");
    }

    printf("\n");

    //Percorrer linha;
    for( line=0; line<5; line++){
        //Cálculo porcentagem off;
        percentageOff[line] = servers[line][1] * 100.0 / servers[line][2];
    }

    //Percorrer linha;
    for( line=0; line<5; line++){
        //Comparação da porcentagem com o maior;
        if(percentageOff[line] > bigger){
            //Atribuição do novo maior;
            bigger = percentageOff[line];
            lineBigger = line;
        }
    }

    //Exibir;
    printf("Cidade com maior problema: %s\n", city[lineBigger]);
    printf("Porcentagem: %2.f%%\n", bigger);

    //Percorrer linha
    for (line=0; line<5; line++){
        //Contagem servidores online;
        serverOn = serverOn + servers[line][0];
        //Contagem servidores offline;
        serverOff = serverOff + servers[line][1];
        //Contagem servidores total;
        serverTotal = serverTotal + servers[line][2];
    }
    //Calculo porcentagem de servidores ligados;
    serversResultOn = serverOn * 100.0 / serverTotal;
    //Calculo porcentagem de servidores desligados;
    serversResultOff = serverOff * 100.0 / serverTotal;
    //Exibição
    printf("Servidores ligados: %2.f%%\n", serversResultOn);
    printf("Servidores desligados: %2.f%%\n", serversResultOff);

    //Percorrer linha;
    for ( line=0; line<5; line++){
        //Contagem de servidor online específico;
        serverOn = serverOn + servers[0][line];
        //Contagem de servidor offline específico;
        serverOff = serverOff + servers[1][line];

        //Comparação, caso os servidores offline sejam maiores do que os onlines;
        if(serverOff>serverOn){
            //Concatena a string defeated;
            strcat(city[line], defeated);
        }
    }

    //Exibição
    printf("\nCidades:\n");
    for (int line=0; line<5; line++){
        printf("%s \n", city[line]);
    }

    //Questão d) escolhida para ser eliminada.


  return 0;
}//main
