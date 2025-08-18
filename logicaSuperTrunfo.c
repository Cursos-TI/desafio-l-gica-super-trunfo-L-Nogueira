#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);



   
    printf("SUPER TRUNFO\n\n");

    // As variáveis terminadas em 01 correspondem a carta 1, assim como as terminadas em 02 correspondem a carta 2;

        char estado01, estado02;
        char codigo01[6], codigo02[6];
        char nome_cidade01[25], nome_cidade02[25];
        unsigned long int populacao01, populacao02;
        float area_01, area_02;
        float pib01, pib02;
        int pontos_turisticos01, pontos_turisticos02;
    
    // entrada de dados da carta 1;
    /* 
    
    para esse teste a carta 1 será referente a cidade de fortaleza 
    O número da carta será: 01
    A letra referente ao estado será: "A"
    O cdigo dessa carta será portanto: "01A"
    O nome da cidade será: "Fortaleza"
    A população será: "2428678"
    A área será: 313.18
    O PIB será: 73.4
    A quantidade de pontos turísticos será: "20"
    
    */


        printf("É HORA DE JOGAR, FORNEÇA OS DADOS DA PRIMEIRA CARTA \n\n");

        printf("Digite a letra referente ao estado de A - H: ");
        scanf("%c", &estado01);

        printf("Digite o codigo da carta (o codigo deve ser o número da carta + a letra do estado): ");
        scanf("%s", codigo01);

        printf("Digite o nome da cidade: ");
        scanf("%s", nome_cidade01);

        printf("Digite a população da cidade: ");
        scanf("%lu", &populacao01);

        printf("Digite a área da cidade em km2: ");
        scanf("%f", &area_01);

        printf("Digite o PIB da cidade: ");
        scanf("%f", &pib01);

        printf("Digite o número de pontos turísticos da cidade: ");
        scanf("%d", &pontos_turisticos01);

        printf("\n\n");

    //parâmetros calculados da carta 1;

        float densidade_populacional01 = (float)populacao01 / area_01;

        float pib_per_capita01 = (float)(pib01 * 1000000000) / populacao01;

        float superpoder01 = (float) (1/densidade_populacional01) + populacao01 + area_01 + pib01 + pontos_turisticos01 + pib_per_capita01;

    // entrada de dados da carta 2
    /* 
    
    para esse teste a carta 2 será referente a cidade de salvador 
    O número da carta será: 02
    A letra referente ao estado será: "B"
    O cdigo dessa carta será portanto: "02B"
    O nome da cidade será: "Salvador"
    A população será: "2417678"
    A área será: 693.8
    O PIB será: 62.9
    A quantidade de pontos turísticos será: "18"
    
    */


        printf("É HORA DE JOGAR, FORNEÇA OS DADOS DA SEGUNDA CARTA \n\n");

        printf("Digite a letra referente ao estado de A - H: ");
        scanf(" %c", &estado02);

        printf("Digite o codigo da carta (o codigo deve ser o número da carta + a letra do estado): ");
        scanf("%s", codigo02);

        printf("Digite o nome da cidade: ");
        scanf("%s", nome_cidade02);

        printf("Digite a população da cidade: ");
        scanf("%lu", &populacao02);

        printf("Digite a área da cidade em km2: ");
        scanf("%f", &area_02);

        printf("Digite o PIB da cidade: ");
        scanf("%f", &pib02);

        printf("Digite o número de pontos turísticos da cidade: ");
        scanf("%d", &pontos_turisticos02);

        printf("\n\n");

    //parâmetros calculados da carta 2;

        float densidade_populacional02 = (float)populacao02 / area_02;
        
        float pib_per_capita02 = (float)(pib02 * 1000000000) / populacao02;

        float superpoder02 = (float) (1/densidade_populacional02) + populacao02 + area_02 + pib02 + pontos_turisticos02 + pib_per_capita02;


    // operações lógicas;

        printf("***HORA DA BATALHA***\n\n");
        printf("Atributo escolhido: PIB\n");
        printf("Carta 1 - %s: %.2f\n", nome_cidade01, pib01);
        printf("Carta 2 - %s: %.2f\n", nome_cidade02, pib02);
        printf("\n");

        if (pib01 > pib02){
            printf("RESULTADO: Carta 1 (%s) venceu!\n", nome_cidade01);
        } else {
            printf("RESULTADO: Carta 2 (%s) venceu!\n", nome_cidade02);
        }
        printf("\n\n");



    return 0;
}
