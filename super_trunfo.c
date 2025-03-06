#include <stdio.h>
#include <string.h>

int main() {

    //Declaração de váriaveis da primeira carta
    char    estado_1;
    char    codigo_1[4];
    char    cidade_1[25];
    int     populacao_1 = 0;
    float   area_1 = 0;
    float   pib_1 = 0;
    int     pontos_turisticos_1 = 0;
    
    //Declaração de váriaveis da segunda carta
    char    estado_2;
    char    codigo_2[4];
    char    cidade_2[25];
    int     populacao_2 = 0;
    float   area_2 = 0;
    float   pib_2 = 0;
    int     pontos_turisticos_2 = 0;

    //RECEBENDO DADOS DA PRIMEIRA CARTA

    //Entrada do estado da carta
    printf("Digite o estado da carta (Somente de A a H): ");
    scanf("%c", &estado_1);
    getchar();

    //Entrada do código da carta
    printf("Digite o código da carta (Somente de 01 a 04): ");
    scanf("%s", codigo_1);

    //Entrada da cidade
    printf("Digite a cidade: ");
    scanf("%s", cidade_1);

    //Entrada com o número da população
    printf("Digite a população dessa cidade: ");
    scanf("%d", &populacao_1);

    //Entrada com a area da cidade
    printf("Digite a area dessa cidade: ");
    scanf("%f", &area_1);

    //Entrada com o PIB da cidade
    printf("Digite o PIB dessa cidade: ");
    scanf("%f", &pib_1);

    //Entrada com número de pontos túristicos da cidade
    printf("Digite o número de pontos túristicos da cidade: ");
    scanf("%d", &pontos_turisticos_1);

    printf("\n");
    printf("Dados da primeira carta inseridos, vamos agora com os dados da segunda carta.\n");
    //RECEBENDO DADOS DA SEGUNDA CARTA

    //Entrada do estado da carta
    printf("Digite o estado (Somente de A a H): ");
    scanf(" %c", &estado_2);
    getchar();

    //Entrada do código da carta
    printf("Digite o código da carta (Somente de 01 a 04): ");
    scanf("%s", codigo_2);

    //Entrada da cidade
    printf("Digite a cidade: ");
    scanf("%s", cidade_2);

    //Entrada com o número da população
    printf("Digite a população dessa cidade: ");
    scanf("%d", &populacao_2);

    //Entrada com a area da cidade
    printf("Digite a area dessa cidade: ");
    scanf("%f", &area_2);

    //Entrada com o PIB da cidade
    printf("Digite o PIB dessa cidade: ");
    scanf("%f", &pib_2);

    //Entrada com número de pontos túristicos da cidade
    printf("Digite o número de pontos túristicos da cidade: ");
    scanf("%d", &pontos_turisticos_2);

    //EXIBINDO OS DADOS COLETADOS DA PRIMEIRA CARTA
    printf("\n");
    printf("Vamos agora exibir as cartas informadas!\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado_1);
    printf("Código: %c%s\n", estado_1, codigo_1);
    printf("Nome da Cidade: %s\n", cidade_1);
    printf("População: %d\n", populacao_1);
    printf("Área: %.2f Km²\n", area_1);
    printf("PIB: %.2f bilhões de reais\n", pib_1);
    printf("Números de Pontos Turisticos: %d\n", pontos_turisticos_1);

    printf("\n");
    //EXIBINDO OS DADOS COLETADOS DA SEGUNDA CARTA

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %c%s\n", estado_2, codigo_2);
    printf("Nome da Cidade: %s\n", cidade_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %.2f Km²\n", area_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
    printf("Números de Pontos Turisticos: %d\n", pontos_turisticos_2);



    return 0;
}
