#include <stdio.h>
#include <stdlib.h>

//Está é a primeira versâo idealizada para o desafio_novato

struct Carta {
    char Estado[3];
    char Codigo[4]; 
    char Cidade[51];
    int populacao;
    double area;
    double pib;
    int numPontoTuristico;
    float densidadePopulacional;
    float pibPerCapta;
};
  
int sair() {
     char opcao;

    do {
        printf("Digite 'S' para sair: ");
        // O espaço antes do %c serve para ignorar o 'Enter' anterior no buffer
        scanf(" %c", &opcao);
        // O loop continua enquanto a opcao for DIFERENTE de 's' E 'S'
    } while (opcao != 's' && opcao != 'S');

    printf("\nVoce digitou '%c'. Saindo do programa...\n", opcao);
    exit(0);
}



int main() {
   system("clear");
   struct Carta carta[2];
   printf("Digite as informacoes para 2 cartas:\n\n");
   for (int i = 0; i <= 1; i++) {
        printf("\n");
        printf("Carta: %d \n", (i + 1));

        printf("Estado: \n");
        scanf("%s", &carta[i].Estado);

        printf("Codigo: \n");
        scanf("%s", &carta[i].Codigo);

        printf("Cidade: \n");
        scanf("%s", &carta[i].Cidade);

        printf("Populacao: \n");
        scanf("%d", &carta[i].populacao);

        printf("Area: \n");
        scanf("%lf", &carta[i].area);

        printf("PIB: \n");
        scanf("%lf", &carta[i].pib);

        printf("Numero de Pontos Turisticos: \n");
        scanf("%d", &carta[i].numPontoTuristico);

       carta[i].densidadePopulacional = (carta[i].populacao / carta[i].area);
       carta[i].pibPerCapta = (carta[i].pib / carta[i].populacao);
    }
    
    system("clear");

    for (int i = 0; i <= 1; i++)
    {
        printf("---------------------------------\n\n");
        printf("Carta %d:\n", i + 1);
        printf("Estado: %s\n", carta[i].Estado);
        printf("Codigo: %s\n", carta[i].Codigo);
        printf("Cidade: %s\n", carta[i].Cidade);
        printf("Populacao: %d\n", carta[i].populacao);
        printf("Area: %.2lf\n", carta[i].area);
        printf("PIB: %.2lf\n", carta[i].pib);
        printf("Numero de Pontos Turisticos: %d\n", carta[i].numPontoTuristico);
        printf("Densidade Poplacional: %f\n", carta[i].densidadePopulacional);
        printf("PIB per Capta: %f\n", carta[i].pibPerCapta);
    }
    printf("---------------------------------\n\n");
   
    sair();

    return 0;
}
