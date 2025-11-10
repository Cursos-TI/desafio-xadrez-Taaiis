#include <stdio.h>

int main() {

    

    int casas_torre = 5, casas_bispo = 5, casas_rainha = 8;  //Declaracão de váriaveis para o número de casas de cada peça

    printf("====== Desafio xadrez! ====== \n\n");

    printf ("Casas que a torre irá percorrer... \n");

    for (int i = 0; i < casas_torre; i++)    //Estrutura de repetição
    {
        printf("Direita\n"); //Resultado a ser impreso
        
    }
    printf("\n");
    
        printf ("Casas que o bispo irá percorrer... \n\n");
    int i = 0;

    while (i < casas_bispo) {
        printf("Cima, Direita\n");//Resultado a ser impreso

        i++; //incremento do contador para que não ocorra um loop infinito

    }
    printf("\n");

  printf("Casas que a rainha irá percorrer... \n\n");
//estrutura de repetição
  int j = 0;
  do {
  printf("Esquerda \n");//Resultado a ser impreso

    j++; //incremento para que o programa não entre em loop

  } while (j < casas_rainha);




    return 0;
}
