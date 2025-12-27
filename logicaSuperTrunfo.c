#include <stdio.h> 
#include <stdbit.h> 
#include <time.h> 

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    printf("!!! CARTA 1!!!\n"); 
   
    char estado, codigo [10], cidade [10];   
    float pessoas, pib, area;     
    int pontos; 
    int carta1 = 0; 
    float densidade, divisao1, divisao2, inversa, inversa2; 
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    printf("Uma letra de 'A', 'B', (representando um estado):\n" ); 
    scanf(" %c", &estado); 

    printf("Código da carta:(EX:A01..)\n"); 
    scanf("%s", codigo); 

    printf("Digite a Cidade:\n"); 
    scanf("%s", cidade); 

    printf("Área(km²):\n"); 
    scanf("%f", &area); 

    printf("População:\n"); 
    scanf("%f", &pessoas); 

    printf("PIB:\n"); 
    scanf("%f", &pib); 

    printf("Nº de pontos turísticos:\n"); 
    scanf("%d", &pontos); 
    
    divisao1 = (float) pessoas / area;
    inversa = 1.0 / densidade; 
    printf("\n!!! CARTA 2!!!\n"); 

    char Estado, Cidade [10], Codigo [10]; 
    float Pessoas, Pib, Area, densidade2; 
    int Ponto; 
    int carta2 = 0;  

    printf("Uma letra de 'A', 'B', (representando um estado):\n" ); 
    scanf(" %c", &Estado); 

    printf("Código da carta:(EX:A01..)\n"); 
    scanf("%s", Codigo); 

    printf("Digite a Cidade:\n"); 
    scanf("%s", Cidade); 

    printf("Área(km²):\n"); 
    scanf("%f", &Area); 

    printf("População:\n"); 
    scanf("%f", &Pessoas); 

    printf("PIB:\n"); 
    scanf("%f", &Pib); 

    printf("Nº de pontos turísticos:\n"); 
    scanf("%d", &Ponto); 

    divisao2 = (float) Pessoas / Area;
    inversa2 = 1.0 / densidade; 

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    if(area > Area){
       printf("A Carta1 tem maior área\n"); 
       carta1++; 
    } else{
      printf("A Carta2 tem maior área\n"); 
      carta2++; 
    }

    if(pessoas > Pessoas){
       printf("A Carta1 tem a maior população\n"); 
       carta1++; 
    } else{
      printf("A Carta2 tem a maoir população\n"); 
      carta2++; 
    }

    if(pib > Pib){
       printf("A Carta1 tem maior PIB\n"); 
       carta1++; 
    } else{
      printf("A Carta2 tem maior PIB\n"); 
      carta2++; 
    }
    
    if(pontos > Ponto){
       printf("A Carta1 tem maior número de pontos turísticos\n"); 
       carta1++;  
    } else{
      printf("A Carta2 tem maior número de pontos turísticos\n"); 
      carta2++; 
    } 
    
    if(densidade > densidade2){
      printf("A carta1 tem maior densidade populacional\n");
      carta1++;  
    } else{
      printf("A Carat2 tem maior densidade populacional\n"); 
      carta2++; 
    }

    if(carta1 > carta2){
       printf("A CARTA1 É A VENCEDORA!!!\n"); 
    } else{
      printf("A CARTA2 É A VENCEDORA!!!\n"); 
    }
    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    //menu interativo

    int opcao, opcao2; 


  printf("***MENU INTERATIVO CARTA1***\n"); 
  printf("Escolha uma das opções para comparar:\n"); 
  printf("1. Nome da cidade:\n"); 
  printf("2. Populacão \n"); 
  printf("3. Área \n"); 
  printf("4. PIB\n"); 
  printf("5. Nº de Pontos turísticos\n ");  
  printf("6. Densidade Populacional\n"); 
  printf("Escolha: "); 
  scanf("%d", &opcao); 

  switch (opcao)
  {
  case 1:
    printf("Carta1: %s\n", cidade);  
    printf("Carta2: %s\n", Cidade);  
    break;
  case 2: 
    printf("População:\n"); 
    printf("Carta1: %f\n", pessoas); 
    printf("Carta 2: %f\n", Pessoas);
    
    if (pessoas > Pessoas)
  {
    printf("A CARTA1 VENCEU EM POPULAÇÃO!\n"); 
  } else if(Pessoas > pessoas)
   { 
    printf("A CARTA2 VENCEU EM POPULAÇÃO!\n");
   } else{
    printf("Empate\n"); 
   }
    break; 
  case 3: 
    printf("Área:\n"); 
    printf("Carta1: %f\n", area); 
    printf("carta2: %f\n", Area); 

    if(area > Area)
   {
    printf("A CARTA1 VENCEU EM ÁREA\n"); 
   } else if(Area > area)
   {
    printf("A CARTA2 VENCEU EM ÁREA\n");
   } else {
    printf("Empate\n"); 
   }
    break; 
  case 4: 
    printf("PIB:\n"); 
    printf("Carta1: %f\n", pib); 
    printf("Carta2: %f\n", Pib); 

     if(pib > Pib)
   {
    printf("A CARTA1 VENCEU EM PIB\n"); 
   } else if(Pib > pib)
   {
    printf("A CARTA2 VENCEU EM PIB\n"); 
   } else{
    printf("Empate\n"); 
   }
    break; 
  case 5: 
    printf("Número de Pontos turísticos:\n"); 
    printf("Carta1: %d\n", pontos); 
    printf("Carta2: %d\n", Ponto); 

     if(pontos > Ponto)
   {
    printf("A CARTA1 VENCEU EM Nº DE PONTOS\n"); 
   } else if(Ponto > pontos)
   {
    printf("A CARTA2 VENCEU EM Nº DE PONTOS\n"); 
   }
    break;
    case 6: 
    printf("Densidade Populacinal\n"); 
    printf("Carta1: %f\n", densidade); 
    printf("Carta2:%f\n", densidade2); 
    break; 
    default: 
        printf("Opção inválida\n"); 
    break;
  }
  

    return 0;
}
