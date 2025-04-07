#include <stdio.h>

// Definindo a estrutura de dados para armazenar as o dados de uma carta
typedef struct {
    char estado[3];          // Estado agora será uma string de dois caracteres, ex: "CE"
    char codigo[5];          // Código da carta (ex: A01, B03)
    char cidade[100];        // Nome da cidade
    int populacao;           // População da cidade
    float area;              // Área da cidade em km²
    float pib;               // PIB da cidade em bilhões de reais
    int pontos_turisticos;   // Número de pontos turísticos na cidade
} Carta;

void lerCarta(Carta *carta) {
    // Função para ler os dados de uma carta
    printf("\nDigite os dados da carta:\n");

    // Leitura dos dados da carta
    printf("Estado (de 'A' a 'H', ou duas letras como 'CE'): ");
    scanf("%s", carta->estado);  // Agora aceitamos o estado como string de dois caracteres

    printf("Código da carta (ex: A01, B03): ");
    scanf("%s", carta->codigo);

    // Limpar o buffer do teclado antes de ler o nome da cidade
    getchar();  // Consome o '\n' que fica no buffer após o scanf

    printf("Nome da cidade: ");
    fgets(carta->cidade, sizeof(carta->cidade), stdin);
    
    // Remover o '\n' que o fgets adiciona no final do nome da cidade
    carta->cidade[strcspn(carta->cidade, "\n")] = '\0';

    printf("População: ");
    scanf("%d", &carta->populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta->area);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta->pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta->pontos_turisticos);
}

void exibirCarta(Carta carta, int numeroCarta) {
    // Função para exibir os dados da carta
    printf("\nCarta %d:\n", numeroCarta);
    printf("Estado: %s\n", carta.estado);
    printf("Código: %s\n", carta.codigo);
    printf("Nome da Cidade: %s\n", carta.cidade);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões de reais\n", carta.pib);
    printf("Número de Pontos Turísticos: %d\n", carta.pontos_turisticos);
}

int main() {
    // Criando duas cartas para armazenar os dados
    Carta carta1, carta2;

    // Lendo os dados das cartas
    printf("Preencha os dados da primeira carta:\n");
    lerCarta(&carta1);

    printf("\nPreencha os dados da segunda carta:\n");
    lerCarta(&carta2);

    // Exibindo os dados das cartas
    exibirCarta(carta1, 1);
    exibirCarta(carta2, 2);

    return 0;
}
