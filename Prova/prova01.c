/*
@file: prova01.case
@author: Joshua Barbosa
@date: 03 Nov 21
@brief: Exercício 1 da prova de Fundamentos de Programação.

1) Você foi contratado pela Riot Games para elaborar partes do novo sistema do
 League of Legends.
Para isso exiba, uma única vez, um menu (5 pontos) com duas opções:

Seja bem vindo ao sistema League of Legends
a) Verifica nível (Tier)
b) Calculo do taxa de vitórias (winrate)
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
    //Declara uma variável para ser atribuido a escolha do usuário;
    char choice;
    //Declara uma variável para atribuir o MMR, o WINRATE, as VITORIAS e DERROTAS do usuário;
    float mmr, winrate, vitoria=0, derrota=0;

    //Exibe o menu apenas uma vez para o usuário;
    printf("Seja bem vindo ao sistema League of Legends!\n");
    printf("a) Verificar nivel (Tier);\n");
    printf("b) Calculo de taxa de vitorias (Winrate);\n");
    printf("O que deseja fazer? ");
    //Lê a escolha do usuário;
    scanf("%c", &choice);
    //Limpa o buffer para evitar possiveis erros com lixo;
    setbuf(stdin, NULL);

    //Caso a escolha seja igual a:
    switch (choice){
        //A ou a, realizará a seguinte tarefa:
        case 'a':
        case 'A':
            //Exibe a escolha do usuário
            printf("\nVoce escolheu Verificar Tier!\n\n");
            //Pergunta para o usuário qual seu mmr;
            printf("Digite a sua pontuacao (MMR): ");
            //Lê seu MMR;
            scanf("%f", &mmr);

            //Caso o MMR do jogador for menor que 1090:
            if (mmr < 1090 && mmr>= 0){
                //Exibe seu tier, de acordo com a condição do mmr.
                printf("\nVoce devera jogar na Tier Bronze!\n");
            //Caso o MMR do jogador estiver entre 1090 e 1409:
            } else if (mmr>=1090 && mmr<=1409){
                //Exibe seu tier, de acordo com a condição do mmr.
                printf("\nVoce devera jogar na Tier Prata!\n");
            //Caso o MMR do jogador estiver entre 1410 e 1719:
            } else if (mmr>=1410 && mmr<=1719){
                //Exibe seu tier, de acordo com a condição do mmr.
                printf("\nVoce devera jogar na Tier Ouro!\n");
            //Caso o MMR do jogador estiver entre 1720 e 2019:
            } else if (mmr>=1720 && mmr<=2019){
                //Exibe seu tier, de acordo com a condição do mmr.
                printf("\nVoce devera jogar na Tier Platina!\n");
            //Caso o MMR do jogador estiver entre 2020 e 2500:
            } else if (mmr>=2020 && mmr<=2500){
                //Exibe seu tier, de acordo com a condição do mmr.
                printf("\nVoce devera jogar na Tier Diamante!\n");
            //Caso o MMR do jogador for maior que 2500:
            } else if (mmr > 2500){
                //Exibe seu tier, de acordo com a condição do mmr.
                printf("\nVoce devera jogar na Tier Desafiante!\n");
            //Caso a entrada do usuário seja qualquer outra:
            } else {
                printf("Ops! Parece que voce inseriu uma entrada invalida.\n");
            } //Fim da estrutura de repetição

            //Sai da estrutura de repeticão Switch.
            break;

        //B ou b, realizará a seguinte tarefa:
        case 'b':
        case 'B':
            //Exibe a escolha do usuário;
            printf("\nVoce escolheu Calculo de Winrate!\n");
            printf("Utilize:\n V - Vitorias;\n D - Derrotas.\n\n");

            //Faça:
            do{
                //Exibir uma pergunta e ler a escolha
                printf("Digite o resultado da partida: ");
                scanf("%c", &choice);
                //Limpa o buffer para evitar possiveis erros com lixo;
                setbuf(stdin, NULL);
                //Caso a escolha for:
                switch (choice){
                    //Caso a escolha ser igual a VITÓRIA:
                    case 'v':
                    case 'V':
                        //Adciona uma vitória;
                        vitoria+= 1;
                        //Sai do switch;
                        break;
                    //Caso a escolha ser igual a DERROTA:
                    case 'd':
                    case 'D':
                        //Adciona uma derrota;
                        derrota+= 1;
                        //Sai do switch;
                        break;
                    //Caso o usuário quiser sair do programa:
                    case 'f':
                    case 'F':
                        //Mostra uma mensagem se despedindo;
                        printf("\n\nFinal do programa! Obrigato por utilizar nosso Software! :)\n\n");
                        //Finaliza o programa;
                        return 0;
                    //Caso seja uma opção invalida:
                    default:
                        //Mostra uma mensagem se despedindo;
                        printf("\nOps! Parece que voce inseriu uma entrada invalida.\n");
                        printf("\n\nFinal do programa! Obrigato por utilizar nosso Software! :)\n\n");
                        //Finaliza
                        return 0;
                }//Fim switch

                //Realiza o cálculo do winrate com a fórmula abaixo:
                winrate = ((vitoria/(vitoria+derrota))*100);

                //Mostra o WINRATE do usuário;
                printf("Seu Winrate eh de aproximadamente %2.f%%\n", winrate);

            } while(choice!='f' || choice!='F'); //Enquanto a escolha for diferente que F ou f;
            //Sai da estrutura de repetição switch;
            break;

        //Caso o usuário insira uma escolha errada!
        default:
            //Agradece ao usuário
            printf("Ops! Parece que voce inseriu uma entrada invalida.\n");
            //Sai do switch;
            break;

    } //Fim switch

    //Exibe uma mensagem relatando o fim do programa e agradecendo;
    printf("\n\nFinal do programa! Obrigato por utilizar nosso Software! :)\n\n");

  return 0;
}//main
