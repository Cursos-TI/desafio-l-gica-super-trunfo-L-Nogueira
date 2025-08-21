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
        int atributo_escolhido;
    
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


    //menu de seleção para comparação atributos
    
    printf("Essa é a hora da verdade! Escolha um dos seguintes atributos para batalhar: /n/n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("6 - PIB per capta\n");

    switch (atributo_escolhido)
    {
    case 1:
        printf("Muito bem, a disputa ocorrerá usando o atributo: População!\n\n");
        printf("Carta 1 - %s: %u\n", nome_cidade01, populacao01);
        printf("Carta 2 - %s: %u\n", nome_cidade02, populacao02);
        printf("\n");

         if (populacao01 == populacao02){
            printf("RESULTADO: Empate entre Carta 1 (%s) e Carta 2 (%s)! \n\n", nome_cidade01, nome_cidade02);
        } else if (populacao01 > populacao02) {
            printf("RESULTADO: Carta 1 (%s) venceu!\n\n", nome_cidade01);
        } else {
            printf("RESULTADO: Carta 2 (%s) venceu!\n\n", nome_cidade02);
        }
        printf("FIM DO JOGO\n\n");

        break;

    case 2:
        printf("Muito bem, a disputa ocorrerá usando o atributo: Área!\n\n");
        printf("Carta 1 - %s: %.2f\n", nome_cidade01, area_01);
        printf("Carta 2 - %s: %.2f\n", nome_cidade02, area_02);
        printf("\n");

         if (area_01 == area_02){
            printf("RESULTADO: Empate entre Carta 1 (%s) e Carta 2 (%s)! \n\n", nome_cidade01, nome_cidade02);
        } else if (area_01 > area_02) {
            printf("RESULTADO: Carta 1 (%s) venceu!\n\n", nome_cidade01);
        } else {
            printf("RESULTADO: Carta 2 (%s) venceu!\n\n", nome_cidade02);
        }
        printf("FIM DO JOGO\n\n");

        break;

    case 3:
        printf("Muito bem, a disputa ocorrerá usando o atributo: PIB!\n\n");
        printf("Carta 1 - %s: %.2f\n", nome_cidade01, pib01);
        printf("Carta 2 - %s: %.2f\n", nome_cidade02, pib02);
        printf("\n");

         if (pib01 == pib02){
            printf("RESULTADO: Empate entre Carta 1 (%s) e Carta 2 (%s)! \n\n", nome_cidade01, nome_cidade02);
        } else if (pib01 > pib02) {
            printf("RESULTADO: Carta 1 (%s) venceu!\n\n", nome_cidade01);
        } else {
            printf("RESULTADO: Carta 2 (%s) venceu!\n\n", nome_cidade02);
        }
        printf("FIM DO JOGO\n\n");

        break;

    case 4:
        printf("Muito bem, a disputa ocorrerá usando o atributo: Número de pontos turísticos!\n\n");
        printf("Carta 1 - %s: %d\n", nome_cidade01, pontos_turisticos01);
        printf("Carta 2 - %s: %d\n", nome_cidade02, pontos_turisticos02);
        printf("\n");

         if (pontos_turisticos01 == pontos_turisticos02){
            printf("RESULTADO: Empate entre Carta 1 (%s) e Carta 2 (%s)! \n\n", nome_cidade01, nome_cidade02);
        } else if (pontos_turisticos01 > pontos_turisticos02) {
            printf("RESULTADO: Carta 1 (%s) venceu!\n\n", nome_cidade01);
        } else {
            printf("RESULTADO: Carta 2 (%s) venceu!\n\n", nome_cidade02);
        }
        printf("FIM DO JOGO\n\n");

        break;
    
    case 5:
        printf("Muito bem, a disputa ocorrerá usando o atributo: Densidade demográfica!\n\n");
        printf("Carta 1 - %s: %.2f\n", nome_cidade01, densidade_populacional01);
        printf("Carta 2 - %s: %.2f\n", nome_cidade02, densidade_populacional02);
        printf("\n");

         if (densidade_populacional01 == densidade_populacional02){
            printf("RESULTADO: Empate entre Carta 1 (%s) e Carta 2 (%s)! \n\n", nome_cidade01, nome_cidade02);
        } else if (densidade_populacional01 < densidade_populacional02) {
            printf("RESULTADO: Carta 1 (%s) venceu!\n\n", nome_cidade01);
        } else {
            printf("RESULTADO: Carta 2 (%s) venceu!\n\n", nome_cidade02);
        }
        printf("FIM DO JOGO\n\n");

        break;

    case 6:
        printf("Muito bem, a disputa ocorrerá usando o atributo: PIB per capta!\n\n");
        printf("Carta 1 - %s: %d\n", nome_cidade01, pib_per_capita01);
        printf("Carta 2 - %s: %d\n", nome_cidade02, pib_per_capita02);
        printf("\n");

         if (pib_per_capita01 == pib_per_capita02){
            printf("RESULTADO: Empate entre Carta 1 (%s) e Carta 2 (%s)! \n\n", nome_cidade01, nome_cidade02);
        } else if (pib_per_capita01 > pib_per_capita02) {
            printf("RESULTADO: Carta 1 (%s) venceu!\n\n", nome_cidade01);
        } else {
            printf("RESULTADO: Carta 2 (%s) venceu!\n\n", nome_cidade02);
        }
        printf("FIM DO JOGO\n\n");

        break;

    default:
        printf("Opção inválida! Escolha um dos atributos de 1 - 6.\n\n");
        break;
    }

   
    return 0;
}
