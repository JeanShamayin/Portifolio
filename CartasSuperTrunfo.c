#include <stdio.h>

int main() {
    // Cartas pré-cadastradas
    char pais1[] = "Brasilia";
    int populacao1 = 3055149;
    float area1 = 5760.78;
    float pib1 = 273.6;
    int pontos1 = 40;

    char pais2[] = "Goiania";
    int populacao2 = 1536097;
    float area2 = 729.30;
    float pib2 = 85.0;
    int pontos2 = 25;

    // Densidade demográfica
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    int attr1, attr2;
    float valor1_c1 = 0, valor1_c2 = 0;
    float valor2_c1 = 0, valor2_c2 = 0;

    printf("===== SUPER TRUNFO - NIVEL MESTRE =====\n\n");
    printf("Cartas em jogo: %s x %s\n\n", pais1, pais2);

    // -------- MENU 1 --------
    printf("Escolha o PRIMEIRO atributo:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &attr1);

    // -------- MENU 2 DINÂMICO --------
    printf("\nEscolha o SEGUNDO atributo:\n");

    if (attr1 != 1) printf("1 - Populacao\n");
    if (attr1 != 2) printf("2 - Area\n");
    if (attr1 != 3) printf("3 - PIB\n");
    if (attr1 != 4) printf("4 - Pontos Turisticos\n");
    if (attr1 != 5) printf("5 - Densidade Demografica\n");

    printf("Opcao: ");
    scanf("%d", &attr2);

    if (attr1 == attr2) {
        printf("\nErro: Voce nao pode escolher o mesmo atributo duas vezes.\n");
        return 0;
    }

    // -------- CAPTURA DOS VALORES --------
    switch (attr1) {
        case 1: valor1_c1 = populacao1; valor1_c2 = populacao2; break;
        case 2: valor1_c1 = area1; valor1_c2 = area2; break;
        case 3: valor1_c1 = pib1; valor1_c2 = pib2; break;
        case 4: valor1_c1 = pontos1; valor1_c2 = pontos2; break;
        case 5: valor1_c1 = densidade1; valor1_c2 = densidade2; break;
        default:
            printf("Opcao invalida no primeiro atributo.\n");
            return 0;
    }

    switch (attr2) {
        case 1: valor2_c1 = populacao1; valor2_c2 = populacao2; break;
        case 2: valor2_c1 = area1; valor2_c2 = area2; break;
        case 3: valor2_c1 = pib1; valor2_c2 = pib2; break;
        case 4: valor2_c1 = pontos1; valor2_c2 = pontos2; break;
        case 5: valor2_c1 = densidade1; valor2_c2 = densidade2; break;
        default:
            printf("Opcao invalida no segundo atributo.\n");
            return 0;
    }

    // -------- AJUSTE PARA DENSIDADE (menor vence) --------
    float soma1 = 0, soma2 = 0;

    soma1 += (attr1 == 5) ? (1.0 / valor1_c1) : valor1_c1;
    soma2 += (attr1 == 5) ? (1.0 / valor1_c2) : valor1_c2;

    soma1 += (attr2 == 5) ? (1.0 / valor2_c1) : valor2_c1;
    soma2 += (attr2 == 5) ? (1.0 / valor2_c2) : valor2_c2;

    // -------- EXIBICAO --------
    printf("\n===== RESULTADO =====\n\n");
    printf("Cartas: %s x %s\n\n", pais1, pais2);

    printf("Atributo 1 (%d): %s = %.2f | %s = %.2f\n",
           attr1, pais1, valor1_c1, pais2, valor1_c2);

    printf("Atributo 2 (%d): %s = %.2f | %s = %.2f\n",
           attr2, pais1, valor2_c1, pais2, valor2_c2);

    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", pais1, soma1);
    printf("%s: %.2f\n", pais2, soma2);

    // -------- RESULTADO FINAL --------
    printf("\nResultado final: ");
    if (soma1 > soma2)
        printf("%s venceu!\n", pais1);
    else if (soma2 > soma1)
        printf("%s venceu!\n", pais2);
    else
        printf("Empate!\n");

    return 0;
}
