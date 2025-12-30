#include <time.h>
#include <stdio.h>
#include <stdlib.h>


int main() {
    int numeroJ, numeroC, resultado;
    char tipoComparacao;

    //Gerador de numero aleatorio
    srand(time(0));
    numeroC = rand() % 100 + 1; // Numero entre 1 e 100

    // Inicar o jogo
    printf("Bem vindo ao Jogo do Adivinhar!\n");
    printf("Você deve escolher um número e o tipo de comparação.\n");
    printf("M = Maior\n");
    printf("N = Menor\n");
    printf("I = Igual\n");

    printf("Escolha a comparação: \n");
    scanf(" %c", &tipoComparacao);

    printf("Digite seu número (entre 1 e 100): \n");
    scanf(" %d", &numeroJ);

    //Comparações

    switch (tipoComparacao)
    {
    case 'M':
    case 'm':
        printf("Você escolheu a opção maior!\n");
        resultado = numeroJ > numeroC ? 1 : 0;
        break;
    case 'N':
    case 'n':
        printf("Você escolheu a opção menor!\n");
        resultado = numeroJ < numeroC ? 1 : 0;
        break;
    case 'I':
    case 'i':
        printf("Você escolheu a opção igual!\n");
        resultado = numeroJ == numeroC ? 1 : 0;
        break;
    
    default:
        printf("Opção de jogo invalida!\n");
        break;
    }

    //Resultado

    if (resultado == 1)
    {
        printf("Parabens você venceu!\n");
        printf("O número do computador é: %d e o do jogador é: %d\n", numeroC, numeroJ);

    } else {
        printf("Você perdeu! F\n");
        printf("O número do computador é: %d e o do jogador é: %d\n", numeroC, numeroJ);
    }
    
}
