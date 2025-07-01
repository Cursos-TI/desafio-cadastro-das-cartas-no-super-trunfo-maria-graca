#include <stdio.h>

#include <stdio.h>
int main(){

//Informações da carta 1

        int carta1; 
        int pontosturisticos1;
        int populacao1;
        char estado1 [2] ;
        char cidade1[10];
        char codigo1 [3];
        float areadacidade1;
        float PIB1;

//digitar informações da carta 1

 printf("Digite a carta: ");
        scanf("%d", &carta1);

 printf("Digite o estado (UF): ");
scanf("%2s", &estado1);

  
printf("Digite o codigo: ");
scanf("%s", &codigo1);

printf("Digite a cidade:  ");
scanf("%s", &cidade1);

printf("Digite a população:  ");
scanf("%d", &populacao1);

printf("Digite a area:  ");
scanf("%f", &areadacidade1);

printf("Digite o PIB:  ");
scanf("%f", &PIB1);

printf("Digite pontosturisticos:  ");
scanf("%d", &pontosturisticos1);

//mostrar os dados da carta1

printf("\n=== Carta 1 ===\n");

    printf("Carta: %d\n", carta1);
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f km²\n", areadacidade1);
    printf("PIB: %f\n", PIB1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);

// // Informações da carta 2
    int carta2;
    int pontosTuristicos2;
    int populacao2;
    char estado2[3];
    char cidade2[20];
    char codigo2[4];
    float areaDaCidade2;
    float PIB2;

    // Digitar informações da carta 2
    printf("\nDigite a carta: ");
    scanf("%d", &carta2);

    printf("Digite o estado (UF): ");
    scanf(" %2s", estado2);

    printf("Digite o código: ");
    scanf("%3s", codigo2);

    printf("Digite a cidade: ");
    scanf("%s", cidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade: ");
    scanf("%f", &areaDaCidade2);

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);

    printf("Digite os pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Mostrar dados da carta 2
    printf("\n=== Carta 2 ===\n");
    printf("Carta: %d\n", carta2);
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", areaDaCidade2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);

    return 0;
}