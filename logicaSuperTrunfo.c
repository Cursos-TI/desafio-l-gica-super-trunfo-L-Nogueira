#include <stdio.h>
//Desafio lógica super trunfo, nível aventureiro. 

int main() {
   
    printf("SUPER TRUNFO\n\n");

// As variáveis terminadas em 01 correspondem a carta 1, assim como as terminadas em 02 correspondem a carta 2;

        char estado01, estado02;
        char codigo01[6], codigo02[6];
        char nome_cidade01[25], nome_cidade02[25];
        unsigned long int populacao01, populacao02;
        float area_01, area_02;
        float pib01, pib02;
        int pontos_turisticos01, pontos_turisticos02;
        int atributo_escolhido, segundo_atributo_escolhido;
        int resultado_1, resultado_2;
    
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


//Menu de seleção do primeiro atributo
    
    printf("Essa é a hora da verdade! Escolha um dos seguintes atributos para batalhar: \n\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("6 - PIB per capta\n\n");
    printf("Digite o atributo escolhido: ");
    scanf("%d", &atributo_escolhido);
    printf("\n\n");

//Lógica de comparação do primeiro atributo.
    switch (atributo_escolhido)
    {
    case 1:
        printf("Muito bem, o primeiro atributo escolhido para a batalha foi: População!\n\n");
        printf("Carta 1 - %s: %lu habitantes\n", nome_cidade01, populacao01);
        printf("Carta 2 - %s: %lu habitantes\n", nome_cidade02, populacao02);
        printf("\n");
        
        resultado_1 = populacao01 > populacao02 ? 1 : 0;

        break;

    case 2:
        printf("Muito bem, o primeiro atributo escolhido para a batalha foi: Área!\n\n");
        printf("Carta 1 - %s: %.2f km²\n", nome_cidade01, area_01);
        printf("Carta 2 - %s: %.2f km²\n", nome_cidade02, area_02);
        printf("\n");

        resultado_1 = area_01 > area_02 ? 1 : 0;

        break;

    case 3:
        printf("Muito bem, o primeiro atributo escolhido para a batalha foi: PIB!\n\n");
        printf("Carta 1 - %s: %.2f bilhoes de R$\n", nome_cidade01, pib01);
        printf("Carta 2 - %s: %.2f bilhoes de R$\n", nome_cidade02, pib02);
        printf("\n");

        resultado_1 = pib01 > pib02 ? 1 : 0;

        break;

    case 4:
        printf("Muito bem, o primeiro atributo escolhido para a batalha foi: Número de pontos turísticos!\n\n");
        printf("Carta 1 - %s: %d pontos turísticos\n", nome_cidade01, pontos_turisticos01);
        printf("Carta 2 - %s: %d pontos turísticos\n", nome_cidade02, pontos_turisticos02);
        printf("\n");

        resultado_1 = pontos_turisticos01 > pontos_turisticos02 ? 1 : 0;

        break;
    
    case 5:
        printf("Muito bem, o primeiro atributo escolhido para a batalha foi: Densidade demográfica!\n\n");
        printf("Carta 1 - %s: %.2f habitantes por km²\n", nome_cidade01, densidade_populacional01);
        printf("Carta 2 - %s: %.2f habitantes por km²\n", nome_cidade02, densidade_populacional02);
        printf("\n");

        resultado_1 = densidade_populacional01 < densidade_populacional02 ? 1 : 0;

        break;

    case 6:
        printf("Muito bem, o primeiro atributo escolhido para a batalha foi: PIB per capta!\n\n");
        printf("Carta 1 - %s: %.2f R$\n", nome_cidade01, pib_per_capita01);
        printf("Carta 2 - %s: %.2f R$\n", nome_cidade02, pib_per_capita02);
        printf("\n");

        resultado_1 = pib_per_capita01 > pib_per_capita02 ? 1 : 0;

        break;

    default:
        printf("Opção inválida! Escolha um dos atributos de 1 - 6.\n\n");
        break;
    }

 //Escolha do segundo atributo.
    printf("Escolha mais um atributo para batalhar: \n\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("6 - PIB per capta\n\n");
    printf("Digite o atributo escolhido: ");
    scanf("%d", &segundo_atributo_escolhido);
    printf("\n\n");

// Comparação para impossibilitar a escolha do mesmo atributo duas vezes, e lógica de comparação do segundo atributo.
    printf("Primeiro atributo escolhido: %d\n", atributo_escolhido);
    printf("Segundo atributo escolhido: %d\n\n", segundo_atributo_escolhido);

    if (atributo_escolhido == segundo_atributo_escolhido) 
    { printf("Você escolheu o mesmo atributo de antes, escolha um atributo diferente...\n\n");
        return 1;
    } else {
    switch (segundo_atributo_escolhido) {
    case 1:
        printf("Muito bem, o segundo atributo escolhido para a batalha foi: População!\n\n");
        printf("Carta 1 - %s: %lu habitantes\n", nome_cidade01, populacao01);
        printf("Carta 2 - %s: %lu habitantes\n", nome_cidade02, populacao02);
        printf("\n");
        
        resultado_2 = populacao01 > populacao02 ? 1 : 0;

        break;

    case 2:
        printf("Muito bem, o segundo atributo escolhido para a batalha foi: Área!\n\n");
        printf("Carta 1 - %s: %.2f km²n", nome_cidade01, area_01);
        printf("Carta 2 - %s: %.2f km²\n", nome_cidade02, area_02);
        printf("\n");

        resultado_2 = area_01 > area_02 ? 1 : 0;

        break;

    case 3:
        printf("Muito bem, o segundo atributo escolhido para a batalha foi: PIB!\n\n");
        printf("Carta 1 - %s: %.2f bilhoes de R$\n", nome_cidade01, pib01);
        printf("Carta 2 - %s: %.2f bilhoes de R$\n", nome_cidade02, pib02);
        printf("\n");

        resultado_2 = pib01 > pib02 ? 1 : 0;

        break;

    case 4:
        printf("Muito bem, o segundo atributo escolhido para a batalha foi: Número de pontos turísticos!\n\n");
        printf("Carta 1 - %s: %d pontos turísticos\n", nome_cidade01, pontos_turisticos01);
        printf("Carta 2 - %s: %d pontos turísticos\n", nome_cidade02, pontos_turisticos02);
        printf("\n");

        resultado_2 = pontos_turisticos01 > pontos_turisticos02 ? 1 : 0;

        break;
    
    case 5:
        printf("Muito bem, o segundo atributo escolhido para a batalha foi: Densidade demográfica!\n\n");
        printf("Carta 1 - %s: %.2f habitantes por km²\n", nome_cidade01, densidade_populacional01);
        printf("Carta 2 - %s: %.2f habitantes por km²\n", nome_cidade02, densidade_populacional02);
        printf("\n");

        resultado_2 = densidade_populacional01 < densidade_populacional02 ? 1 : 0;

        break;

    case 6:
        printf("Muito bem, o segundo atributo escolhido para a batalha foi: PIB per capta!\n\n");
        printf("Carta 1 - %s: %.2f R$\n", nome_cidade01, pib_per_capita01);
        printf("Carta 2 - %s: %.2f R$\n", nome_cidade02, pib_per_capita02);
        printf("\n");

        resultado_2 = pib_per_capita01 > pib_per_capita02 ? 1 : 0;

        break;

    default:
        printf("Opção inválida! Escolha um dos atributos de 1 - 6.\n\n");
        break;
        
    }}
   
    //Resultado final, verificação da somatória dos atributos 1 e 2
    /*Os possíveis resultados são: 
    1 - o atribulto da cidade 1 vencer no primeiro resultado (1) e no segundo resultado (1), somando um valor = 2, resultando em vitória para carta 1.
    2 - o atributo da cidade 1 vencer no primeiro resultado (1) e perder no segundo resultado (0), somando um valor = 1, resultando em empate.
    3 - o atributo da cidade 1 perder no primeiro resultado (0) e perder no segundo resultado (0), somando um valor = 0, resultando em vitória da carta 2. */

    if (resultado_1 + resultado_2 == 1) { 
        printf ("Que batalha acirrada, houve um empate entre (%s) e (%s)!!!\n\n", nome_cidade01, nome_cidade02);
    } else if (resultado_1 + resultado_2 == 2) {
        printf ("FOI UMA GRANDE DISPUTA, A CARTA 1 (%s) VENCEU!!!\n\n", nome_cidade01);
    } else {
        printf ("FOI UMA GRANDE DISPUTA, A CARTA 2 (%s) VENCEU!!!\n\n", nome_cidade02);
    }

    return 0;
}
