#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    //dados da carta 1;
    char estado1 = 'A';
    char codigo1[10] = "A01";
    char cidade1[20] = "São_Paulo";
    int populacao1 = 12325000;
    int pontos1 = 50;
    float area1 = 1521.11;
    float pib1 =699.28;

    //dados da carta 2;
    char estado2 = 'B';
    char codigo2[10] = "B01";
    char cidade2[20] = "Rio_de_Janeiro";
    int populacao2 = 6748000;
    int pontos2 = 30;
    float area2 = 1200.25;
    float pib2 =300.50;
    


    //Imprimmir na tela dados da carta 1
    
    printf("Carta 1: \n");
    printf("Estado: %c\n",estado1);
    printf("Código: %s\n",codigo1);
    printf("Nome da Cidade: %s\n",cidade1);
    printf("População: %d Habitantes\n",populacao1);
    printf("Área: %0.2f km²\n",area1);
    printf("PIB: %0.2f bilhões de reais\n",pib1);
    printf("Número de Pontos Turísticos: %d\n",pontos1);

    //Imprimmir na tela dados da carta 2
    printf("Carta 2: \n");
    printf("Estado: %c\n",estado2);
    printf("Código: %s\n",codigo2);
    printf("Nome da Cidade: %s\n",cidade2);
    printf("População: %d Habitantes\n",populacao2);
    printf("Área: %0.2f km²\n",area2);
    printf("PIB: %0.2f bilhões de reais\n",pib2);
    printf("Número de Pontos Turísticos: %d\n",pontos2);

    return 0;
}
