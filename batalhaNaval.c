#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

//Função para criar e posicionar barcos
void criar_barco(int matriz_criada[10][10],int eixo_i, int eixo_j, int comprimento, int direcao){

    switch (direcao)
    {
    case 1://Barco para baixo
        for (int i = 0; i < comprimento; i++)
        {   
            matriz_criada[eixo_i][eixo_j] = 3;
            eixo_i ++;
        }
        
        break;
    case 2://Barco para direita
         for (int i = 0; i < comprimento; i++)
        {   
            matriz_criada[eixo_i][eixo_j] = 3;
            eixo_j ++;
        }
        break;
    default:
        break;
    }

}


int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    int matriz [10][10];
    int linha[10] = {0,1,2,3,4,5,6,7,8,9};
    char letra_coluna[10] = {'A','B','C','D','E','F','G','H','I','J'};

    for (int i = 0; i < 10; i++) //Inicialização da matriz atribuindo zero a cada posição
    { 
        for (int j = 0 ; j < 10; j++)
        {
            matriz[i][j] = 0;
        }       
    }

    //Logica de posicionamento e criação dos barcos
    criar_barco(matriz,2,2,3,1);
    criar_barco(matriz,4,4,3,2);
    
    printf("__");
    for (int i = 0; i < 10; i++) //Criçao do titulo das colunas de A a J
    {   
        printf("%c ", letra_coluna[i]); //Print dos indices das colunas de A a J
    }
        printf("\n");

        for (int i = 0; i < 10; i++)
    {   
        printf("%d ", linha[i]); //Print dos indices das linhas de 0 a 9
        for (int j = 0 ; j < 10; j++)
        {
            printf("%d ", matriz[i][j]); //Print da matriz linha a linha
        }
        printf("\n");
    }   

    return 0;
}
