
/* PROJETO DO JOGO SUPER TRUNFO, BASEADO EM CIDADES

   Autor: Paulo Henrique Soares de Salles
   Disciplina: Inftrodução à Programação de Computadores
   Prof: Sérgio Cardoso
*/

// Incluir bibliotecas que serão usadas

#include <stdio.h>

// Funcão principal

int main(){

    //Declaracao das variaveis para duas cartas do jogo

    char estado1[50], estado2[50]; // variaveis para a caracteristica "Estado"
    char codigo1[5], codigo2[5];   // variaveis para a caracteristica "Codigo da Carta"
    char cidade1[50], cidade2[50]; // variaveis para a caracteristica "Cidade"
    int populacao1, populacao2;    // variaveis para a caracteristica "Populacao"
    float area1, area2;            // variaveis para a caracteristica "Area"
    float pib1, pib2;              // variaveis para a caracteristica "PIB"
    int pt1, pt2;                  // variaveis para a caracteristica "Numero de pontos turisticos"


    //PARTE 1 - LEITURA DE DADOS


    //Solicitando ao usuario os dados da primeira carta e gravando nas variaveis com final "1"

    printf("Digite o nome do primeiro estado: ");
    scanf("%[^\n]s", estado1); // alocando o dado inserido na variavel "estado1". Comando "[^\n]" para ler nomes compostos.

    printf("Digite o codigo da primeira carta: ");
    scanf(" %s", codigo1); // alocando o dado inserido na variavel "codigo1". Espaço para limpar os espaços vazios.

    printf("Digite o nome da primeira cidade: ");
    scanf(" %[^\n]s", cidade1); // alocando o dado inserido na variavel "cidade1". Comando "[^\n]" para ler nomes compostos. Espaço para limpar os espaços vazios.

    printf("Digite a populacao da primeira cidade: ");
    scanf(" %d", &populacao1); // alocando o dado inserido na variavel "populacao1". Espaço para limpar os espaços vazios.

    printf("Digite a area da primeira cidade: ");
    scanf("%f", &area1); // alocando o dado inserido na variavel "area1"

    printf("Digite o PIB da primeira cidade: ");
    scanf("%f", &pib1); // alocando o dado inserido na variavel "pib1"

    printf("Digite o numero de pontos turisticos da primeira cidade: ");
    scanf("%d", &pt1); // alocando o dado inserido na variavel "pt1"

    printf("\n"); //Quebra de linha para o usuario visualizar melhor o programa

    //Solicitando ao usuario os dados da segunda carta e gravando nas variaveis com final "2"

    printf("Digite o nome do segundo estado: ");
    scanf(" %[^\n]s", estado2); // alocando o dado inserido na variavel "estado2". Comando "[^\n]" para ler nomes compostos. Espaço para limpar os espaços vazios.

    printf("Digite o codigo da segunda carta: ");
    scanf(" %s", codigo2); // alocando o dado inserido na variavel "codigo2". Espaço para limpar os espaços vazios.

    printf("Digite o nome da segunda cidade: ");
    scanf(" %[^\n]s", cidade2); // alocando o dado inserido na variavel "cidade2". Comando "[^\n]" para ler nomes compostos. Espaço para limpar os espaços vazios.

    printf("Digite a populacao da segunda cidade: ");
    scanf(" %d", &populacao2); // alocando o dado inserido na variavel "populacao2". Espaço para limpar os espaços vazios.

    printf("Digite a area da segunda cidade: ");
    scanf("%f", &area2); // alocando o dado inserido na variavel "area2"

    printf("Digite o PIB da segunda cidade: ");
    scanf("%f", &pib2); // alocando o dado inserido na variavel "pib2"

    printf("Digite o numero de pontos turisticos da segunda cidade: ");
    scanf("%d", &pt2); // alocando o dado inserido na variavel "pt2"

    printf("\n"); //Quebra de linha para o usuario visualizar melhor o programa


    //PARTE 2 - IMPRESSÃO DOS DADOS RECEBIDOS


    //Imprimindo na tela para o usuario as informacoes inseridas para a primeira carta

    printf("Estado : %s\n", estado1);
    printf("Codigo : %s\n", codigo1);
    printf("Cidade : %s\n", cidade1);
    printf("Populacao : %d\n", populacao1);
    printf("Area: %.2f\n", area1); // Limitando a área a 2 casas decimais para evitar empate
    printf("PIB: %.0f\n", pib1); // Limitando o PIB A 0 casas decimais por ser um número muito grande
    printf("Numero de Pontos Turisticos: %d\n",pt1);
    
    printf("\n"); //Quebra de linha para o usuario visualizar melhor o programa

    //Imprimindo na tela para o usuario as informacoes inseridas para a segunda carta

    printf("Estado : %s\n",estado2);
    printf("Codigo : %s\n",codigo2);
    printf("Cidade : %s\n",cidade2);
    printf("Populacao : %d\n",populacao2);
    printf("Area: %.2f\n",area2); // Limitando a área a 2 casas decimais para evitar empate
    printf("PIB: %.0f\n",pib2); // Limitando o PIB A 0 casas decimais por ser um número muito grande
    printf("Numero de Pontos Turisticos: %d\n",pt2);

    printf("\n"); //Quebra de linha para o usuario visualizar melhor o programa

    return 0; //Limpando o programa retornando

}