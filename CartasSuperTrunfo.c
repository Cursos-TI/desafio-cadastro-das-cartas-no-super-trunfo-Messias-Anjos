#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    printf("Desafio Cartas Super Trunfo!\n\n\n");
    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int Populacao1, Populacao2;
    float Area1, Area2;
    float Pib1, Pib2;
    int PontosTuristicos1, PontosTuristicos2;
    float media1, media11, media2, media22;
    float superPoder1, superPoder2;
    int comparacaoPopulacao, comparacaoArea, comparacaoPib, comparacaoPontosTuristico;

    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
  
  printf("Carta numero 1 \n\n");

  //Aqui é o numero de população.

  printf("Digite o número de população: ");
  scanf("%d", &Populacao1);

  //aqui é o número de Área.
  printf("Digite sua Área: ");
  scanf("%f", &Area1);

  //aqui é o número de Pib.
  printf("Digite o número de Pib: ");
  scanf("%f", &Pib1);

  //Aqui é o número de pontos turisticos.
  printf("Digite o nume de Pontos Turistico: ");
  scanf("%d", &PontosTuristicos1);

  //espaçamente de uma linha.
  printf("\n\n");


  


    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
   
  printf("Carta numero 2 \n\n");

  //Aqui é o numero de população.
  printf("Digite o número de população: ");
  scanf("%d", &Populacao2);

  //aqui é o número de Área.
  printf("Digite sua Área: ");
  scanf("%f", &Area2);

  //aqui é o número de Pib.
  printf("Digite o número de Pib: ");
  scanf("%f", &Pib2);

  //Aqui é o número de pontos turisticos.
  printf("Digite o nume de Pontos Turistico: ");
  scanf("%d", &PontosTuristicos2);

  //espaçamente de uma linha.
  printf("\n\n");


  //Carta numero 1
  printf("Carta 1\n");

  printf("Sua população e de : %d \n", Populacao1);
  printf("Sua área é de: %.1f \n", Area1 );  
  printf("Seu pib é de: %.1f \n", Pib1);
  printf("Seu número de Pontos Turisticos é de: %d \n\n", PontosTuristicos1);
  

  printf("\n\n");


  //carta numero 2
  printf("Carta 2\n");

  printf("Sua população e de : %d \n", Populacao2);
  printf("Sua área é de: %.1f \n", Area2 );  
  printf("Seu pib é de: %.1f \n", Pib2);
  printf("Seu número de Pontos Turisticos é de: %d \n\n", PontosTuristicos2);

  media1 = (float)(Pib1 / Area1);
  media11 = (float)(Populacao1 / Area1);
  

  media2 = (float)(Pib2 / Area2);
  media22 = (float)(Populacao2 / Area2);

  printf("A media de Pib por Area da carta 1 é de: %.2f", media1);
  printf("\n\n");

  printf("A media de Populacao por Area da carta 1 é de: %.2f", media11);
  printf("\n\n");


  printf("A media de Pib por Area da carta 2 é de: %.2f", media2);
  printf("\n\n");

  printf("A media de Populacao por Area, da carta 2 é de: %.2f", media22);
  printf("\n\n");


  superPoder1 = (Pib1 + PontosTuristicos1 + Area1 + Populacao1) / 4;
  printf("O Super Poder da carta 1 é de: %.2f", superPoder1);

  printf("\n\n");

  superPoder2 = (Pib2 + PontosTuristicos2 + Area2 + Populacao2) / 4;
  printf("O Super Poder da carta 2 é de: %.2f", superPoder2);

  comparacaoArea = Area1 > Area2;
  comparacaoPib = Pib1 > Pib2;
  comparacaoPontosTuristico = PontosTuristicos1 > PontosTuristicos2;
  comparacaoPopulacao = Populacao1 > Populacao2;

  printf("\n\n");

  printf("Comparação da Area da carta 1 e carta 2, se for menor resultado 0, se for maior rersultado 1:  %d", comparacaoArea);
  printf("\n\n");
  
  printf("Comparação da Pib da carta 1 e carta 2, se for menor resultado 0, se for maior rersultado 1:  %d", comparacaoPib);
  printf("\n\n");

  printf("Comparação da Pontos Turisticos da carta 1 e carta 2, se for menor resultado 0, se for maior rersultado 1:  %d", comparacaoPontosTuristico);
  printf("\n\n");

  printf("Comparação da População da carta 1 e carta 2, se for menor resultado 0, se for maior rersultado 1:  %d", comparacaoPopulacao);
  printf("\n\n");

    
    return 0;
}
