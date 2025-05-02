#include <stdio.h>

int main() {

    //Bem vindo ao desafio lógica Super Trunfo com tema cidades!

    // Conforme enunciado do desafio nível mestre, não será reimplementado o cadastro.
    // Com isso, utilizaremos cartas pré-cadastradas.
    // Utilizaremos como código do estado, a sigla de duas letras.
    // Será suprimido o código da carta para esse desafio.

    // Carta 1

    char codigo_estado_1[3] = "SP";
    char nome_cidade_1[20] = "São Paulo";
    unsigned long int populacao_1 = 12325000;
    float area_1 = 1521.11;
    float pib_1 = 699.28;
    int pts_turisticos_1 = 50;

    //Carta 2

    char codigo_estado_2[3] = "RJ";
    char nome_cidade_2[20] = "Rio de Janeiro";
    unsigned long int populacao_2 = 6748000;
    float area_2 = 1200.25;
    float pib_2 = 300.5;
    int pts_turisticos_2 = 30;

    // Cálculo da densidade populacional

    float densidade_populacional_1 = populacao_1 / area_1;
    float densidade_populacional_2 = populacao_2 / area_2;

    // Cálculo do PIB per Capita

    float pib_per_capita_1 = (pib_1 * 1000000000) / populacao_1;
    float pib_per_capita_2 = (pib_2 * 1000000000) / populacao_2;

    // Exibição dos Dados das Cartas:

    printf(" \n Carta 1: \n \n");
    printf("Estado: %s \n", codigo_estado_1);
    printf("Nome da Cidade: %s \n", nome_cidade_1);
    printf("População: %ld \n", populacao_1);
    printf("Área: %.2f km^2 \n", area_1);
    printf("PIB: %.2f bilhões de reais \n", pib_1);
    printf("Número de Pontos Turísticos: %d \n", pts_turisticos_1);
    printf("Densidade populacional: %.2f hab/km^2 \n", densidade_populacional_1);
    printf("PIB per Capita: %.2f reais \n", pib_per_capita_1);

    printf("\n Carta 2: \n \n");
    printf("Estado: %s \n", codigo_estado_2);
    printf("Nome da Cidade: %s \n", nome_cidade_2);
    printf("População: %ld \n", populacao_2);
    printf("Área: %.2f km^2 \n", area_2);
    printf("PIB: %.2f bilhões de reais \n", pib_2);
    printf("Número de Pontos Turísticos: %d \n", pts_turisticos_2);
    printf("Densidade populacional: %.2f hab/km^2 \n", densidade_populacional_2);
    printf("PIB per Capita: %.2f reais \n", pib_per_capita_2);

    // Cálculo do SuperPoder

    float SuperPoder_1 = (float) populacao_1 + area_1 + pib_1 + (float) pts_turisticos_1 + (1 / densidade_populacional_1) + pib_per_capita_1;
    float SuperPoder_2 = (float) populacao_2 + area_2 + pib_2 + (float) pts_turisticos_2 + (1 / densidade_populacional_2) + pib_per_capita_2;

    // Menu de comparação
    // Nesta seção, iremos implementar um menu que permitirá que o usuário escolha
    // o atributo a ser comparado.

    printf("\nBem vindo ao jogo!\n");
    printf("Escolha o primeiro atributo a ser comparado (digite um dos números abaixo):\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per capita\n");
    printf("7. Super Poder\n");

    int atributo_1;
    scanf("%d", &atributo_1);

    // Utilizaremos a variável "pontuacao_1" para armazenar a pontuação do jogador 1 e "pontuacao_2" para
    // armazenar a pontuação do jogador 2. Cada vitória conta 1 ponto para o jogador vencedor e 0 pontos
    // para o perdedor. Em caso de empate, ambos recebem 0 pontos.

    int pontuacao_1 = 0, pontuacao_2 = 0;

    // As variáveis "soma" serão utilizadas para armazenar a soma dos atributos escolhidos para cada
    // carta. "soma_1" armazenará a soma dos dois atributos escolhidos da carta 1. Enquanto isso, "soma_2" armazenará
    // a soma dos dois atributos escolhidos da carta 2.

    float soma_1 = 0, soma_2 = 0;

    // Comparação das cartas

    switch (atributo_1){
        case 1:
        printf("\nPopulação: \n" );
        printf("\nCarta 1 - %s: %ld \n", nome_cidade_1, populacao_1);
        printf("Carta 2 - %s: %ld \n", nome_cidade_2, populacao_2);
        soma_1 += (float) populacao_1;
        soma_2 += (float) populacao_2;
        if (populacao_1 > populacao_2){
            printf("Resultado: Carta 1 venceu! \n");
            pontuacao_1++;
        } else if (populacao_1 < populacao_2) {
            printf("Resultado: Carta 2 venceu! \n");
            pontuacao_2++;
        } else{
            printf("Houve um empate.\n");
        }
        break;

        case 2:
        printf("\nÁrea:\n");
        printf("\nCarta 1 - %s: %.2f \n", nome_cidade_1, area_1);
        printf("Carta 2 - %s: %.2f \n", nome_cidade_2, area_2);
        soma_1 += area_1;
        soma_2 += area_2;
        if (area_1 > area_2){
            printf("Resultado: Carta 1 venceu! \n");
            pontuacao_1++;
        } else if (area_1 < area_2) {
            printf("Resultado: Carta 2 venceu! \n");
            pontuacao_2++;
        } else{
            printf("Houve um empate.\n");
        }
        break;

        case 3:
        printf("\nPIB: \n");
        printf("\nCarta 1 - %s: %.2f \n", nome_cidade_1, pib_1);
        printf("Carta 2 - %s: %.2f \n", nome_cidade_2, pib_2);
        soma_1 += pib_1;
        soma_2 += pib_2;
        if (pib_1 > pib_2){
            printf("Resultado: Carta 1 venceu! \n");
            pontuacao_1++;
        } else if (pib_1 < pib_2) {
            printf("Resultado: Carta 2 venceu! \n");
            pontuacao_2++;
        } else {
            printf("Houve um empate.\n");
        }
        break;

        case 4:
        printf("\nPontos turísticos:\n");
        printf("\nCarta 1 - %s: %d \n", nome_cidade_1, pts_turisticos_1);
        printf("Carta 2 - %s: %d \n", nome_cidade_2, pts_turisticos_2);
        soma_1 += (float) pts_turisticos_1;
        soma_2 += (float) pts_turisticos_2;
        if (pts_turisticos_1 > pts_turisticos_2){
            printf("Resultado: Carta 1 venceu! \n");
            pontuacao_1++;
        } else if (pts_turisticos_1 < pts_turisticos_2) {
            printf("Resultado: Carta 2 venceu! \n");
            pontuacao_2++;
        } else {
            printf("Houve um empate.\n");
        }
        break;

        case 5:
        printf("\nDensidade populacional:\n");
        printf("\nCarta 1 - %s: %.2f \n", nome_cidade_1, densidade_populacional_1);
        printf("Carta 2 - %s: %.2f \n", nome_cidade_2, densidade_populacional_2);
        soma_1 += densidade_populacional_1;
        soma_2 += densidade_populacional_2;
        if (densidade_populacional_1 < densidade_populacional_2){
            printf("Resultado: Carta 1 venceu! \n");
            pontuacao_1++;
        } else if (densidade_populacional_1 > densidade_populacional_2) {
            printf("Resultado: Carta 2 venceu! \n");
            pontuacao_2++;
        } else {
            printf("Houve um empate.\n");
        }
        break;

        case 6:
        printf("\nPIB per Capita:\n");
        printf("Carta 1 - %s: %.2f \n", nome_cidade_1, pib_per_capita_1);
        printf("Carta 2 - %s: %.2f \n", nome_cidade_2, pib_per_capita_2);
        soma_1 += pib_per_capita_1;
        soma_2 += pib_per_capita_2;
        if (pib_per_capita_1 > pib_per_capita_2){
            printf("Resultado: Carta 1 venceu! \n");
            pontuacao_1++;
        } else if (pib_per_capita_1 < pib_per_capita_2) {
            printf("Resultado: Carta 2 venceu! \n");
            pontuacao_2++;
        } else {
            printf("Houve um empate.\n");
        }
        break;

        case 7:
        printf("\nSuperPoder:\n", SuperPoder_1 > SuperPoder_2);
        printf("Carta 1 - %s: %.2f \n", nome_cidade_1, SuperPoder_1);
        printf("Carta 2 - %s: %.2f \n", nome_cidade_2, SuperPoder_2);
        soma_1 += SuperPoder_1;
        soma_2 += SuperPoder_2;
        if (SuperPoder_1 > SuperPoder_2){
            printf("Resultado: Carta 1 venceu! \n");
            pontuacao_1++;
        } else if (SuperPoder_1 < SuperPoder_2) {
            printf("Resultado: Carta 2 venceu! \n");
            pontuacao_2++;
        } else {
            printf("Houve um empate.\n");
        }
        break;

        default:
        printf("Opção inválida\n");
    }

    printf("\nEscolha o segundo atributo a ser comparado (digite um dos números abaixo):\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per capita\n");
    printf("7. Super Poder\n");

    int atributo_2;
    scanf("%d", &atributo_2);

    if(atributo_1 == atributo_2){
        printf("Opção de jogo inválida! Você escolheu o mesmo atributo.");
    }else{
        switch (atributo_2){
            case 1:
            printf("\nPopulação:" );
            printf("\nCarta 1 - %s: %ld \n", nome_cidade_1, populacao_1);
            printf("Carta 2 - %s: %ld \n", nome_cidade_2, populacao_2);
            soma_1 += (float) populacao_1;
            soma_2 += (float) populacao_2;
            if (populacao_1 > populacao_2){
                printf("Resultado: Carta 1 venceu! \n");
                pontuacao_1++;
            } else if (populacao_1 < populacao_2) {
                printf("Resultado: Carta 2 venceu! \n");
                pontuacao_2++;
            } else{
                printf("Houve um empate.\n");
            }
            break;
    
            case 2:
            printf("\nÁrea:");
            printf("\nCarta 1 - %s: %.2f \n", nome_cidade_1, area_1);
            printf("Carta 2 - %s: %.2f \n", nome_cidade_2, area_2);
            soma_1 += area_1;
            soma_2 += area_2;
            if (area_1 > area_2){
                printf("Resultado: Carta 1 venceu! \n");
                pontuacao_1++;
            } else if (area_1 < area_2) {
                printf("Resultado: Carta 2 venceu! \n");
                pontuacao_2++;
            } else{
                printf("Houve um empate.\n");
            }
            break;
    
            case 3:
            printf("\nPIB:");
            printf("\nCarta 1 - %s: %.2f \n", nome_cidade_1, pib_1);
            printf("Carta 2 - %s: %.2f \n", nome_cidade_2, pib_2);
            soma_1 += pib_1;
            soma_2 += pib_2;
            if (pib_1 > pib_2){
                printf("Resultado: Carta 1 venceu! \n");
                pontuacao_1++;
            } else if (pib_1 < pib_2) {
                printf("Resultado: Carta 2 venceu! \n");
                pontuacao_2++;
            } else {
                printf("Houve um empate.\n");
            }
            break;
    
            case 4:
            printf("\nPontos turísticos:");
            printf("\nCarta 1 - %s: %d \n", nome_cidade_1, pts_turisticos_1);
            printf("Carta 2 - %s: %d \n", nome_cidade_2, pts_turisticos_2);
            soma_1 += (float) pts_turisticos_1;
            soma_2 += (float) pts_turisticos_2;
            if (pts_turisticos_1 > pts_turisticos_2){
                printf("Resultado: Carta 1 venceu! \n");
                pontuacao_1++;
            } else if (pts_turisticos_1 < pts_turisticos_2) {
                printf("Resultado: Carta 2 venceu! \n");
                pontuacao_2++;
            } else {
                printf("Houve um empate.\n");
            }
            break;
    
            case 5:
            printf("\nDensidade populacional:");
            printf("\nCarta 1 - %s: %.2f \n", nome_cidade_1, densidade_populacional_1);
            printf("Carta 2 - %s: %.2f \n", nome_cidade_2, densidade_populacional_2);
            soma_1 += densidade_populacional_1;
            soma_2 += densidade_populacional_2;
            if (densidade_populacional_1 < densidade_populacional_2){
                printf("Resultado: Carta 1 venceu! \n");
                pontuacao_1++;
            } else if (densidade_populacional_1 > densidade_populacional_2) {
                printf("Resultado: Carta 2 venceu! \n");
                pontuacao_2++;
            } else {
                printf("Houve um empate.\n");
            }
            break;
    
            case 6:
            printf("\nPIB per Capita:");
            printf("Carta 1 - %s: %.2f \n", nome_cidade_1, pib_per_capita_1);
            printf("Carta 2 - %s: %.2f \n", nome_cidade_2, pib_per_capita_2);
            soma_1 += pib_per_capita_1;
            soma_2 += pib_per_capita_2;
            if (pib_per_capita_1 > pib_per_capita_2){
                printf("Resultado: Carta 1 venceu! \n");
                pontuacao_1++;
            } else if (pib_per_capita_1 < pib_per_capita_2) {
                printf("Resultado: Carta 2 venceu! \n");
                pontuacao_2++;
            } else {
                printf("Houve um empate.\n");
            }
            break;
    
            case 7:
            printf("\nSuperPoder:");
            printf("Carta 1 - %s: %.2f \n", nome_cidade_1, SuperPoder_1);
            printf("Carta 2 - %s: %.2f \n", nome_cidade_2, SuperPoder_2);
            soma_1 += SuperPoder_1;
            soma_2 += SuperPoder_2;
            if (SuperPoder_1 > SuperPoder_2){
                printf("Resultado: Carta 1 venceu! \n");
                pontuacao_1++;
            } else if (SuperPoder_1 < SuperPoder_2) {
                printf("Resultado: Carta 2 venceu! \n");
                pontuacao_2++;
            } else {
                printf("Houve um empate.\n");
            }
            break;
    
            default:
            printf("Opção inválida\n");
        }

        printf("\nValor da soma dos atributos da carta 1: %.2f\n", soma_1);
        printf("Valor da soma dos atributos da carta 2: %.2f\n", soma_2);
        if (soma_1 > soma_2){
            printf("A carta 1 tem maior soma dos atributos!\n");
            pontuacao_1++;
        }else if(soma_1 < soma_2){
            printf("A carta 2 tem a maior soma dos atributos!\n");
            pontuacao_2++;
        }else{
            printf("Houve um empate na soma dos atributos!\n");
        }

        printf("\nPontuação final da partida.\n");
        printf("Carta 1: %d\n", pontuacao_1);
        printf("Carta 2: %d\n", pontuacao_2);

        if(pontuacao_1 > pontuacao_2){
            printf("O vencedor da partida é o jogador 1!\nObrigado por jogar!\n");
        }else if(pontuacao_1 < pontuacao_2){
            printf("O vencedor da partida é o jogador 2!\nObrigado por jogar!\n");
        }else{
            printf("Temos um empate!\nObrigado por jogar!\n");
        }
    }

    return 0;
}
