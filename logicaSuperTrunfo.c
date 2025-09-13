#include <stdio.h>
#include <string.h>

typedef struct {
    char estado[3];
    int codigo;
    char cidade[50];
    long long populacao;
    float area;
    long long pib;
    int pontos_turisticos;
} Carta;

int main() {
    Carta carta1, carta2;
    
    printf("=== SUPER TRUNFO - CADASTRO DE CARTAS ===\n\n");
    
    printf("CARTA 1:\n");
    printf("Estado (sigla 2 letras): ");
    scanf("%2s", carta1.estado);
    printf("Codigo: ");
    scanf("%d", &carta1.codigo);
    printf("Cidade: ");
    scanf("%s", carta1.cidade);
    printf("Populacao: ");
    scanf("%lld", &carta1.populacao);
    printf("Area (km²): ");
    scanf("%f", &carta1.area);
    printf("PIB: ");
    scanf("%lld", &carta1.pib);
    printf("Pontos turisticos: ");
    scanf("%d", &carta1.pontos_turisticos);
    
    printf("\nCARTA 2:\n");
    printf("Estado (sigla 2 letras): ");
    scanf("%2s", carta2.estado);
    printf("Codigo: ");
    scanf("%d", &carta2.codigo);
    printf("Cidade: ");
    scanf("%s", carta2.cidade);
    printf("Populacao: ");
    scanf("%lld", &carta2.populacao);
    printf("Area (km²): ");
    scanf("%f", &carta2.area);
    printf("PIB: ");
    scanf("%lld", &carta2.pib);
    printf("Pontos turisticos: ");
    scanf("%d", &carta2.pontos_turisticos);
    
    printf("\n=== COMPARACAO DE CARTAS ===\n");
    printf("\nCARTA 1: %s (%s) - Pop: %lld - Area: %.1f - PIB: %lld - Turismo: %d\n",
           carta1.cidade, carta1.estado, carta1.populacao, carta1.area, carta1.pib, carta1.pontos_turisticos);
    printf("CARTA 2: %s (%s) - Pop: %lld - Area: %.1f - PIB: %lld - Turismo: %d\n\n",
           carta2.cidade, carta2.estado, carta2.populacao, carta2.area, carta2.pib, carta2.pontos_turisticos);
    
    int atributo = 1;
    
    if (atributo == 1) {
        printf("COMPARANDO POR POPULACAO:\n");
        if (carta1.populacao > carta2.populacao) {
            printf("VENCEDOR: CARTA 1 - %s (%s)\n", carta1.cidade, carta1.estado);
        } else if (carta2.populacao > carta1.populacao) {
            printf("VENCEDOR: CARTA 2 - %s (%s)\n", carta2.cidade, carta2.estado);
        } else {
            printf("EMPATE! Ambas tem mesma populacao\n");
        }
    }
    
    return 0;
}
