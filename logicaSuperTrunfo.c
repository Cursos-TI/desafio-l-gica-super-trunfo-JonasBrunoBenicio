#include <stdio.h>

int main() {
    printf("Desafio Logica Super Trunfo!\n");
    
    int Populacao1, PontosTuristicos1, Populacao2, PontosTuristicos2;
    float Area1, PIB1, Area2, PIB2;
    char Estado1, Codigo1, Cidade1, Estado2, Codigo2, Cidade2;

    //Para iniciar o jogo adicione as informações das duas cartas a seguir:

    printf("Carta 01: \n");
    printf("Estado: ");
    scanf("%s", &Estado1);
    printf("Codigo: ");
    scanf("%s", &Codigo1);
    printf("Cidade: ");
    scanf("%s", &Cidade1);
    printf("Populacao: ");
    scanf("%f", &Populacao1);
    printf("Area (em km²): ");
    scanf("%d", &Area1);
    printf("PIB: ");
    scanf("%d", &PIB1);
    printf("Número de pontos Turisticos: ");
    scanf("%d", &PontosTuristicos1);

    printf("Carta 02: \n");
    printf("Estado: ");
    scanf("%s", &Estado2);
    printf("Codigo: ");
    scanf("%s", &Codigo2);
    printf("Cidade: ");
    scanf("%s", &Cidade2);
    printf("Populacao: ");
    scanf("%f", &Populacao2);
    printf("Area (em km²): ");
    scanf("%d", &Area2);
    printf("PIB: ");
    scanf("%d", &PIB2);
    printf("Número de pontos Turisticos: ");
    scanf("%d", &PontosTuristicos2);
    
    // Comparação de cartas (Atributo: População):

    if(Populacao1 > Populacao2){
        printf("Comparação (Atributo: População) Resultado: Carta 1 venceu!\n");
    } else {
        printf("Comparação (Atributo: População) Resultado: Carta 2 venceu!\n");
    } 


   // Comparação de cartas (Atributo: Area):
    
    if(Area1 > Area2){
        printf("Comparação(Atributo: Area) Resultado: Carta 1 venceu!\n");
    } else {
        printf("Comparação(Atributo: Area) Resultado: Carta 2 venceu!\n");
    } 
  


}