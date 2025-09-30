#include <stdio.h>

// Função principal do programa
int main() {
    // Cadastro das cartas (dados já existentes)
    char estado1 = 'A';
    char codigo1[5] = "A01";
    char nomeCidade1[50] = "Cidade um";
    int populacao1 = 1000000;
    float area1 = 500.0;
    float pib1 = 150.0; // bilhões
    int pontosTuristicos1 = 20;

    char estado2 = 'B';
    char codigo2[5] = "B02";
    char nomeCidade2[50] = "Cidade dois";
    int populacao2 = 800000;
    float area2 = 700.0;
    float pib2 = 120.0; // bilhões
    int pontosTuristicos2 = 15;

    // Cálculo dos atributos derivados
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    int opcao;

    printf("Menu de atributos para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Escolha o atributo pelo número: ");
    scanf("%d", &opcao);

    printf("\nComparação entre %s e %s pelo atributo escolhido:\n", nomeCidade1, nomeCidade2);

    switch (opcao) {
        case 1: // População
            printf("População: %d vs %d\n", populacao1, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: %s venceu!\n", nomeCidade1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: %s venceu!\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2: // Área
            printf("Área: %.2f km² vs %.2f km²\n", area1, area2);
            if (area1 > area2) {
                printf("Resultado: %s venceu!\n", nomeCidade1);
            } else if (area2 > area1) {
                printf("Resultado: %s venceu!\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: // PIB
            printf("PIB: %.2f bilhões vs %.2f bilhões\n", pib1, pib2);
            if (pib1 > pib2) {
                printf("Resultado: %s venceu!\n", nomeCidade1);
            } else if (pib2 > pib1) {
                printf("Resultado: %s venceu!\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // Número de pontos turísticos
            printf("Número de pontos turísticos: %d vs %d\n", pontosTuristicos1, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Resultado: %s venceu!\n", nomeCidade1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Resultado: %s venceu!\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // Densidade demográfica (regra inversa: menor vence)
            printf("Densidade demográfica: %.2f vs %.2f habitantes/km²\n", densidade1, densidade2);
            if (densidade1 < densidade2) {
                printf("Resultado: %s venceu!\n", nomeCidade1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: %s venceu!\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Por favor, escolha um número entre 1 e 5.\n");
    }

    return 0;
}
