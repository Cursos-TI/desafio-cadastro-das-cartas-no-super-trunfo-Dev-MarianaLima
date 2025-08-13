#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {
    int codigo_cidade, carta;
    char nome_cidade[100];
    int populacao;
    float area;
    float pib;
    int num_pontos_turisticos;


    // Cadastro das Cartas: informações de cada cidade

    for (int i = 0; i <= 1; i++) {
        carta = i + 1; // Número da carta
        printf("Carta %d:\n", carta);
    printf("Digite o código da cidade: ");
    scanf("%d", &codigo_cidade);
   
    printf("Digite o nome da cidade: \n");
    scanf("%s",&nome_cidade);

    printf("Digite a população da cidade: \n");
    scanf("%d",&populacao);

    printf("Digite a area da cidade (em km²): \n");
    scanf("%f",&area);

    printf("Digite o PIB da cidade (em milhões): \n");
    scanf("%f",&pib);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d",&num_pontos_turisticos,"\n");
     
    }

    // Exibição dos Dados das Cartas:

    printf("Código da cidade: %d\n", codigo_cidade);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("População da cidade: %d\n", populacao);
    printf("Área da cidade: %.2f km²\n", area);
    printf("PIB da cidade: %.2f milhões\n", pib);
    printf("Número de pontos turísticos da cidade: %d\n", num_pontos_turisticos);

    return 0;
}
