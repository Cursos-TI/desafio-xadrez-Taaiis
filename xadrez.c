#include <stdio.h>

int main() {

    

    int casas_torre = 5, casas_bispo = 5, casas_rainha = 8;  //Declaracão de váriaveis para o número de casas de cada peça

    printf("====== Desafio xadrez! ====== \n");

    printf ("Casas que a torre irá percorrer... \n\n");

    for (int i = 0; i < casas_torre; i++)    //Estrutura de repetição
    {
        printf("Direita\n"); //Resultado a ser impreso
        
    }printf("\n");
    
        printf ("Casas que o bispo irá percorrer... \n\n");
    int i = 0;

    while (i < casas_bispo) {
        printf("Cima, Direita\n");//Resultado a ser impreso

        i++; //incremento do contador para que não ocorra um loop infinito

    }
    printf("\n");





    

    return 0;
}
// Nível Novato - Movimentação das Peças 
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover. 
    // Implementação de Movimentação do Bispo 
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal. 
    // Implementação de Movimentação da Torre 
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita. 
    // Implementação de Movimentação da Rainha 
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
