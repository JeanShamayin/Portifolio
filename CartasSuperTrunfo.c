#include <stdio.h>
// Desafio Super Trunfo - Nivel MESTRE
// Tema 3 - A Batalha das cartas!
/*Exemplos que estou usando para testa o codigo, caso queira utilizar:
A
A01
Brasilia
População atual: Aproximadamente 2.996.899 habitantes (2025).
Área total: 5.760.784 km²
PIB: R$ 244.682 bilhões
Pontos Turisticos: 15 ~ 32

B
B01
Goiania
População atual: Aproximadamente 1.494.599 habitantes (2025).
Área total: 729.296 km²
PIB: R$ 59.865.989.619
Pontos Turisticos: 30
*/
int main() {
    // Dados das duas cartas
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];

    unsigned long int populacao1, populacao2; // Agora unsigned long int, assim como pedido no desafio
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    float densidade1, densidade2;
    float pibcapita1, pibcapita2;
    float superPoder1, superPoder2;

    printf("===== SUPER TRUNFO - NIVEL MESTRE =====\n\n");

    // ---- CARTA 1 ----
    /*Coloquei esses espaços antes, pois senti que estava tendo aquele "bug" de quando da espaço ele pula as outras categorias, ainda não entendi isso direito, mas resolvi assim KKKK
    Coloquei uns exemplos e sugestões entre () para o usuario não ter duvida KKKK*/
    printf("===!@!@! ATENÇÃO: COLOQUE OS DADOS SOMENTE LETRAS E NUMEROS, SEM CARACTERES ESPECIAIS!  !@!@!===\n");
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta (ex: A01): ");
    scanf(" %s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf(" %lu", &populacao1);

    printf("Area (km²): ");
    scanf(" %f", &area1);

    printf("PIB (em bilhões): ");
    scanf(" %f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &pontos1);

    densidade1 = populacao1 / area1;
    pibcapita1 = pib1 / populacao1;
    superPoder1 = (float)populacao1 + area1 + pib1 + pontos1 + pibcapita1 + (1.0 / densidade1);


    // ---- CARTA 2 ----
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (ex: A01): ");
    scanf(" %s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf(" %lu", &populacao2);

    printf("Area (km²): ");
    scanf(" %f", &area2);

    printf("PIB (em bilhões): ");
    scanf(" %f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &pontos2);

    densidade2 = populacao2 / area2;
    pibcapita2 = pib2 / populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + pontos2 + pibcapita2 + (1.0 / densidade2);


    // ---- EXIBIÇÃO ----
    printf("\n\n===== CARTAS CADASTRADAS =====\n");

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibcapita1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibcapita2);


    // ---- EXIBIÇÃO E BATALHA ----
    printf("\n\n===== RESULTADO DA BATALHA =====\n\n");

    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibcapita1 > pibcapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}