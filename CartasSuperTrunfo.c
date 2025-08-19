#include <stdio.h>

int main (){
    //dados da carta 1;
    char estado1 = 'A';
    char codigo1[10] = "A01";
    char cidade1[20] = "São_Paulo";
    int populacao1 = 12325000;
    int pontos1 = 50;
    float area1 = 1521.11;
    float pib1 =699280000000;
    float densidade1 = populacao1 / area1;
    float pibp1 = pib1 / populacao1;

    //dados da carta 2;
    char estado2 = 'B';
    char codigo2[10] = "B01";
    char cidade2[20] = "Rio_de_Janeiro";
    int populacao2 = 6748000;
    int pontos2 = 30;
    float area2 = 1200.25;
    float pib2 =300500000000;
    float densidade2 = populacao2 / area2;  //Divida a população da cidade pela sua área
    float pibp2 = pib2 / populacao2; //Divida o PIB da cidade pela sua população
    


    //Imprimmir na tela dados da carta 1
    
    printf("Carta 1: \n");
    printf("Estado: %c\n",estado1);
    printf("Código: %s\n",codigo1);
    printf("Nome da Cidade: %s\n",cidade1);
    printf("População: %d Habitantes\n",populacao1);
    printf("Área: %0.2f km²\n",area1);
    printf("PIB: %0.2f bilhões de reais\n",pib1/1000000000);
    printf("Número de Pontos Turísticos: %d\n",pontos1);
    printf("Densidade Populacional: %0.2f hab/km²\n",densidade1);
    printf("PIB per Capita: %0.2f reais\n",pibp1);


    //Imprimmir na tela dados da carta 2
    printf("Carta 2: \n");
    printf("Estado: %c\n",estado2);
    printf("Código: %s\n",codigo2);
    printf("Nome da Cidade: %s\n",cidade2);
    printf("População: %d Habitantes\n",populacao2);
    printf("Área: %0.2f km²\n",area2);
    printf("PIB: %0.2f bilhões de reais\n",pib2/1000000000);
    printf("Número de Pontos Turísticos: %d\n",pontos2);
    printf("Densidade Populacional: %0.2f hab/km²\n",densidade2);
    printf("PIB per Capita: %0.2f reais\n",pibp2);

    return 0;





}