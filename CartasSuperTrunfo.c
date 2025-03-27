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
    
    int Populacao;
    float Area;
    float Pib;
    int PontosTuristicos;

    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
  
  printf("Carta numero 1 \n\n");

  //Aqui é o numero de população.
  printf("Digite o número de população: ");
  scanf("%d", &Populacao);

  //aqui é o número de Área.
  printf("Digite sua Área: ");
  scanf("%f", &Area);

  //aqui é o número de Pib.
  printf("Digite o número de Pib: ");
  scanf("%f", &Pib);

  //Aqui é o número de pontos turisticos.
  printf("Digite o nume de Pontos Turistico: ");
  scanf("%d", &PontosTuristicos);

  //espaçamente de uma linha.
  printf("\n\n");


  


    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
   
  printf("Carta numero 2 \n\n");

  //Aqui é o numero de população.
  printf("Digite o número de população: ");
  scanf("%d", &Populacao);

  //aqui é o número de Área.
  printf("Digite sua Área: ");
  scanf("%f", &Area);

  //aqui é o número de Pib.
  printf("Digite o número de Pib: ");
  scanf("%f", &Pib);

  //Aqui é o número de pontos turisticos.
  printf("Digite o nume de Pontos Turistico: ");
  scanf("%d", &PontosTuristicos);

  //espaçamente de uma linha.
  printf("\n\n");


  //Carta numero 1
  printf("Carta 1\n");

  printf("Sua população e de : %d \n", Populacao);
  printf("Sua área é de: %.1f \n", Area );  
  printf("Seu pib é de: %.1f \n", Pib);
  printf("Seu número de Pontos Turisticos é de: %d \n\n", PontosTuristicos);

  printf("\n\n");


  //carta numero 2
  printf("Carta 2\n");

  printf("Sua população e de : %d \n", Populacao);
  printf("Sua área é de: %.1f \n", Area );  
  printf("Seu pib é de: %.1f \n", Pib);
  printf("Seu número de Pontos Turisticos é de: %d \n\n", PontosTuristicos);

    
    return 0;
}
