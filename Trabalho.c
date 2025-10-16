#include <stdio.h>

int main() {

    
    char Estado[3];
    char Codigo[5];
    char NomeCidade[50];    
    unsigned long int Populacao;
    float Area;
    float PIB;
    int Pontos;

    
    char Estado2[3];
    char Codigo2[5];
    char NomeCidade2[50];
    unsigned long int Populacao2;
    float Area2;
    float PIB2;
    int Pontos2;

    // informações da carta 1
    printf("###| Carta Número 1 |###\n");
    printf("Digite a Sigla do Estado: ");
    scanf("%s", Estado);
    printf("Digite o Código da carta: ");
    scanf("%s", Codigo);
    printf("Digite o Nome da cidade: ");
    scanf(" %49[^\n]", NomeCidade);
    printf("Digite a população: ");
    scanf("%lu", &Populacao);
    printf("Digite a Área: ");
    scanf("%f", &Area);
    printf("Digite o PIB do País: ");
    scanf("%f", &PIB);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &Pontos);

    // informações da carta 2
    printf("\n###| Carta Número 2 |###\n");
    printf("Digite a Sigla do Estado: ");
    scanf("%s", Estado2);
    printf("Digite o Código da carta: ");
    scanf("%s", Codigo2);
    printf("Digite o Nome da cidade: ");
    scanf(" %49[^\n]", NomeCidade2);
    printf("Digite a população: ");
    scanf("%lu", &Populacao2);
    printf("Digite a Área: ");
    scanf("%f", &Area2);
    printf("Digite o PIB do País: ");
    scanf("%f", &PIB2);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &Pontos2);

    // Cálculos extras
    float Densidade1 = (float)Populacao / Area;
    float Densidade2 = (float)Populacao2 / Area2;
    float PIBCapita1 = PIB / Populacao;
    float PIBCapita2 = PIB2 / Populacao2;

    // Exibição dos resultados das cartas
    printf("\n_____________________________\n");
    printf("*** |Resultado número 1| ***\n");
    printf("_____________________________\n");
    printf("Estado: %s\n", Estado);
         printf ("-\n");
    printf("Código: %s\n", Codigo);
         printf ("-\n");
    printf("Cidade: %s\n", NomeCidade);
         printf ("-\n");
    printf("População: %lu\n", Populacao);
         printf ("-\n");
    printf("Área: %.2f km²\n", Area);
         printf ("-\n");
    printf("PIB: %.2f\n", PIB);
         printf ("-\n");
    printf("Pontos turísticos: %d\n", Pontos);
         printf ("-\n");
    printf("Densidade Demográfica: %.2f\n", Densidade1);
         printf ("-\n");
    printf("PIB per capita: %.4f\n", PIBCapita1);

    printf("\n_____________________________\n");
    printf("*** |Resultado número 2| ***\n");
    printf("_____________________________\n");
    printf("Estado: %s\n", Estado2);
        printf ("-\n");
    printf("Código: %s\n", Codigo2);
        printf ("-\n");
    printf("Cidade: %s\n", NomeCidade2);
        printf ("-\n");
    printf("População: %lu\n", Populacao2);
        printf ("-\n");
    printf("Área: %.2f km²\n", Area2);
        printf ("-\n");
    printf("PIB: %.2f\n", PIB2);
        printf ("-\n");
    printf("Pontos turísticos: %d\n", Pontos2);
        printf ("-\n");
    printf("Densidade Demográfica: %.2f\n", Densidade2);
        printf ("-\n");
    printf("PIB per capita: %.4f\n", PIBCapita2);

    // Escolha dos dois atributos
    int escolha1, escolha2;
    printf("\n### MENU DE ATRIBUTOS ###\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Escolha o primeiro atributo: ");
    scanf("%d", &escolha1);

    do {
        printf("\nEscolha o segundo atributo (diferente do primeiro): ");
        scanf("%d", &escolha2);
        if (escolha1 == escolha2)
            printf("❌ Você já escolheu esse atributo. Escolha outro.\n");
    } while (escolha1 == escolha2);

    // Valores individuais
    float valor1_c1 = 0, valor1_c2 = 0;
    float valor2_c1 = 0, valor2_c2 = 0;

    // Atribuição dos valores atributos escolhidos
    switch (escolha1) {
        case 1: valor1_c1 = Populacao; valor1_c2 = Populacao2; break;
        case 2: valor1_c1 = Area; valor1_c2 = Area2; break;
        case 3: valor1_c1 = PIB; valor1_c2 = PIB2; break;
        case 4: valor1_c1 = Pontos; valor1_c2 = Pontos2; break;
        case 5: valor1_c1 = Densidade1; valor1_c2 = Densidade2; break;
        default: printf("Opção inválida!\n"); return 0;
    }

    switch (escolha2) {
        case 1: valor2_c1 = Populacao; valor2_c2 = Populacao2; break;
        case 2: valor2_c1 = Area; valor2_c2 = Area2; break;
        case 3: valor2_c1 = PIB; valor2_c2 = PIB2; break;
        case 4: valor2_c1 = Pontos; valor2_c2 = Pontos2; break;
        case 5: valor2_c1 = Densidade1; valor2_c2 = Densidade2; break;
        default: printf("Opção inválida!\n"); return 0;
    }

    // Comparações individuais
    printf("\n=== COMPARAÇÕES INDIVIDUAIS ===\n");
    for (int i = 0; i < 2; i++) {
        int atributo = (i == 0) ? escolha1 : escolha2;
        float c1 = (i == 0) ? valor1_c1 : valor2_c1;
        float c2 = (i == 0) ? valor1_c2 : valor2_c2;

        switch (atributo) {
            case 1: printf("\nComparando População:\n"); break;
            case 2: printf("\nComparando Área:\n"); break;
            case 3: printf("\nComparando PIB:\n"); break;
            case 4: printf("\nComparando Pontos Turísticos:\n"); break;
            case 5: printf("\nComparando Densidade Demográfica:\n"); break;
        }

        if (atributo == 5) {
            if (c1 < c2)
                printf("Carta 1 venceu (%.2f < %.2f)\n", c1, c2);
            else if (c1 > c2)
                printf("Carta 2 venceu (%.2f > %.2f)\n", c1, c2);
            else
                printf("Empate!\n");
        } else {
            if (c1 > c2)
                printf("Carta 1 venceu (%.2f > %.2f)\n", c1, c2);
            else if (c1 < c2)
                printf("Carta 2 venceu (%.2f < %.2f)\n", c1, c2);
            else
                printf("Empate!\n");
        }
    }

    // Soma dos atributos
    float soma1 = valor1_c1 + valor2_c1;
    float soma2 = valor1_c2 + valor2_c2;

    printf("\n=== RESULTADO FINAL ===\n");
    printf("Soma dos atributos Carta 1: %.2f\n", soma1);
    printf("Soma dos atributos Carta 2: %.2f\n", soma2);

    if (soma1 > soma2)
        printf("🏆 A carta 1 venceu a rodada!\n");
    else if (soma1 < soma2)
        printf("🏆 A carta 2 venceu a rodada!\n");
    else
        printf("⚖️ Empate!\n");

    return 0;
}
