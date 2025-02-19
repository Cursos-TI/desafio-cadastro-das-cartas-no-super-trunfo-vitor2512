#include <stdio.h>

typedef struct {
    char estado[50];
    char codigo[5];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;

int main() {
   
    Carta carta1, carta2;

    printf("Digite os dados da primeira carta:\n");
    printf("Estado:São Paulo ");
    scanf(" %[^\n]", carta1.estado);
    printf("Código:SP01 ");
    scanf(" %s", carta1.codigo);
    printf("Nome da cidade:São Paulo ");
    scanf(" %[^\n]", carta1.nomeCidade);
    printf("População:12300000 ");
    scanf("%d", &carta1.populacao);
    printf("Área (km²):1521.11 ");
    scanf("%f", &carta1.area);
    printf("PIB:699000.00 ");
    scanf("%f", &carta1.pib);
    printf("Número de pontos turísticos:10 ");
    scanf("%d", &carta1.pontosTuristicos);

    printf("\nDigite os dados da segunda carta:\n");
    printf("Estado:Rio de Janeiro ");
    scanf(" %[^\n]", carta2.estado);
    printf("Código:RJ02 ");
    scanf(" %s", carta2.codigo);
    printf("Nome da cidade:Rio de Janeiro ");
    scanf(" %[^\n]", carta2.nomeCidade);
    printf("População:6775561 ");
    scanf("%d", &carta2.populacao);
    printf("Área (km²):1200.27 ");
    scanf("%f", &carta2.area);
    printf("PIB:364000.50 ");
    scanf("%f", &carta2.pib);
    printf("Número de pontos turísticos:15 ");
    scanf("%d", &carta2.pontosTuristicos);

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.pontosTuristicos);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.nomeCidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.pontosTuristicos);

    return 0;
}
