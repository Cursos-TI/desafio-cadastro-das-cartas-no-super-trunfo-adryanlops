#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estado1;
    char estado2; 
    char codigo1[5], codigo2[5], cidade1[30], cidade2[30];
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;
    float area1, area2, pib1, pib2;

    printf("Vamos cadastrar as informações da primeira carta!!\n\n");

    printf("Qual é o seu estado? \n (Entre A a H)\n");
    scanf(" %c", &estado1);   

    printf("Qual é o código?\n");
    scanf("%s", codigo1);

    printf("Qual é o nome da cidade?\n");
    scanf("%s", cidade1);

    printf("Qual a população da cidade?\n");
    scanf("%d", &populacao1);

    printf("Qual a área dessa cidade?\n");
    scanf("%f", &area1);

    printf("Me diga o PIB dessa cidade\n");
    scanf("%f", &pib1);

    printf("Quantos pontos turísticos essa cidade possui?\n");
    scanf("%d", &pontos_turisticos1);

    printf("------------------------------------\n\n");
    printf("Perfeito!! Agora vamos cadastrar as informações da segunda carta!!\n\n");

    printf("Qual é o seu estado? \n");
    scanf(" %c", &estado2);  

    printf("Qual é o código?\n");
    scanf("%s", codigo2);

    printf("Qual é o nome da cidade?\n");
    scanf("%s", cidade2);

    printf("Qual a população da cidade?\n");
    scanf("%d", &populacao2);

    printf("Qual a área dessa cidade?\n");
    scanf("%f", &area2);

    printf("Me diga o PIB dessa cidade\n");
    scanf("%f", &pib2);

    printf("Quantos pontos turísticos essa cidade possui?\n");
    scanf("%d", &pontos_turisticos2);

    printf("\n====================================\n");
    printf("Veja e compare suas duas cartas:\n");
    printf("====================================\n\n");
    
    printf(" Carta 1:\n Estado: %c\n Codigo: %s \n Nome da Cidade: %s \n População: %d \n Área: %.2f km² \n PIB: %.2f R$ \n Pontos Turísticos: %d\n", 
           estado1, codigo1, cidade1, populacao1, area1, pib1, pontos_turisticos1);

    printf("\n------------------------------------\n\n");

    printf(" Carta 2:\n Estado: %c\n Codigo: %s \n Nome da Cidade: %s \n População: %d \n Área: %.2f km² \n PIB: %.2f R$ \n Pontos Turísticos: %d\n", 
           estado2, codigo2, cidade2, populacao2, area2, pib2, pontos_turisticos2);

    printf("\n====================================\n");

    return 0;
}
