/*Exemplos que estou usando para testa o codigo, caso queira utilizar:
DF
A01
Brasilia
População atual: Aproximadamente 2.996.899 habitantes (2025).
Área total: 5.760.784 km²
PIB: R$ 244.682.000.000
Pontos Turisticos: 15 ~ 32

GO
B01
Goiania
População atual: Aproximadamente 1.494.599 habitantes (2025).
Área total: 729.296 km²
PIB: R$ 59.865.989.619
Pontos Turisticos: 30
*/
#include <stdio.h>

int main() {
    // Dados das cartas
    char estado1[3], estado2[3];
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2; // como não tem numero negativo e são numeros grandes.
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    // Variáveis calculadas
    float densidade1, densidade2;
    float pibCapita1, pibCapita2;


    // Etapa 2 - Nivel Novato
    printf("===== SUPER TRUNFO =====\n\n");

    // Entrada Carta 1
    printf("===!@!@! ATENÇÃO: COLOQUE OS DADOS SOMENTE LETRAS E NUMEROS, SEM CARACTERES ESPECIAIS!  !@!@!===\n"); // aviso pra não da problema
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado: ");
    scanf("%s", estado1);
    printf("Codigo: ");
    scanf("%s", codigo1);
    printf("Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhoes): ");
    scanf("%f", &pib1);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontos1);

    // Entrada Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado: ");
    scanf("%s", estado2);
    printf("Codigo: ");
    scanf("%s", codigo2);
    printf("Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhoes): ");
    scanf("%f", &pib2);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontos2);

    // Cálculos
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pibCapita1 = pib1 / populacao1;
    pibCapita2 = pib2 / populacao2;

    printf("\n===== RESULTADO DA BATALHA =====\n\n");
        /*
       -----------------------------
       COMPARACAO DAS CARTAS
       -----------------------------
       Neste nivel, vamos comparar APENAS 1 atributo.
       Aqui escolhemos: POPULACAO.
       
       Regra:
       - Para População: MAIOR valor vence.


       Estrutura de decisao com if e if-else
    */

    // POPULAÇÃO
    printf("Populacao:\n");
    if (populacao1 > populacao2) {
        printf("Carta 1 venceu!\n\n");
    } else if (populacao2 > populacao1) {
        printf("Carta 2 venceu!\n\n");
    } else {
        printf("Empate!\n\n");
    }

    // ÁREA
    printf("Area:\n");
    if (area1 > area2) {
        printf("Carta 1 venceu!\n\n");
    } else if (area2 > area1) {
        printf("Carta 2 venceu!\n\n");
    } else {
        printf("Empate!\n\n");
    }

    // PIB
    printf("PIB:\n");
    if (pib1 > pib2) {
        printf("Carta 1 venceu!\n\n");
    } else if (pib2 > pib1) {
        printf("Carta 2 venceu!\n\n");
    } else {
        printf("Empate!\n\n");
    }

    // Pontos turísticos
    printf("Pontos turisticos:\n");
    if (pontos1 > pontos2) {
        printf("Carta 1 venceu!\n\n");
    } else if (pontos2 > pontos1) {
        printf("Carta 2 venceu!\n\n");
    } else {
        printf("Empate!\n\n");
    }

    // DENSIDADE (MENOR vence!)
    printf("Densidade Populacional:\n");
    if (densidade1 < densidade2) {
        printf("Carta 1 venceu! (Menor densidade)\n\n");
    } else if (densidade2 < densidade1) {
        printf("Carta 2 venceu! (Menor densidade)\n\n");
    } else {
        printf("Empate!\n\n");
    }

    // PIB PER CAPITA
    printf("PIB per Capita:\n");
    if (pibCapita1 > pibCapita2) {
        printf("Carta 1 venceu!\n\n");
    } else if (pibCapita2 > pibCapita1) {
        printf("Carta 2 venceu!\n\n");
    } else {
        printf("Empate!\n\n");
    }

    return 0;
}
