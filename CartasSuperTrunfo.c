#include <stdio.h>

int main() {
    printf("Desafio super trunfo!\n");

    char estado[3] = "RJ";
    char nome[20] = "rio de janeiro";
    char codigo[3] = "001";
    int populacao = 10;
    int pontos = 4;
    float area = 1.75;
    float pib = 100;

    printf("Estado: %s\n", estado);
    printf("Nome: %s\n", nome);
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %d\n", populacao);
    printf("Pontos: %d\n", pontos);
    printf("Area: %f\n", area);
    printf("PIB %f\n", pib);


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
