#include<stdio.h>

int main(){
    int linhaTorre = 1;
    char colunaTorre = 'A';

    int opt = 0;
    int casas = 0;
    printf("\nMovimentação da Torre:\n");
    printf("A torre está na casa %c%d\n",colunaTorre,linhaTorre);
    printf("Em que sentido deseja movimentar a torre?\n1 - cima\n2 - direita\n");
    scanf("%d",&opt);
    printf("Quantas casas deseja mover a peça no sentido escolhido?\n");
    scanf("%d",&casas);    

    switch(opt){
        case 1: {
            for(int i = 0; i < casas; i++){
                printf("Cima\n");
                linhaTorre++;
            }
            break;
        }
        case 2: {
            for(int i = 0; i < casas; i++){
                printf("Direita\n");
                colunaTorre++;
            }
            break;
        }
    }
    printf("-------------------------------\n");
    printf("Agora, a torre está na casa %c%d\n",colunaTorre,linhaTorre);
    printf("-------------------------------\n");
    
    int linRainha = 1;
    char colRainha = 'D';
    
    
    printf("\nMovimentação da Rainha:\n");
    printf("A Rainha está na casa %c%d\n",colRainha,linRainha);
    printf("Em que sentido deseja movimentar a rainha?\n1 - cima\n2 - direita\n3 - diagonal cima direita\n");
    scanf("%d",&opt);
    printf("Quantas casas deseja mover a peça no sentido escolhido?\n");
    scanf("%d",&casas);    

    switch(opt){
        case 1: {
            for(int i = 0; i < casas; i++){
                printf("Cima\n");
                linRainha++;
            }
            break;
        }
        case 2: {
            for(int i = 0; i < casas; i++){
                printf("Direita\n");
                colRainha++;
            }
            break;
        }
        case 3: {
            for(int i = 0; i < casas; i++){
                printf("Direita + Cima\n");
                colRainha++;
                linRainha++;
            }
            break;
        }
    }
    printf("-------------------------------\n");
    printf("Agora, a rainha está na casa %c%d\n",colRainha,linRainha);
    printf("-------------------------------\n");
    
    int linBispo = 1;
    char colBispo = 'C';
    
    
    printf("\nMovimentação da Bispo:\n");
    printf("O Bispo está na casa %c%d\n",colBispo,linBispo);
    printf("Em que sentido deseja movimentar a Bispo?\n1 - diagonal cima + direita\n2 - diagonal cima + esquerda\n");
    scanf("%d",&opt);
    printf("Quantas casas deseja mover a peça no sentido escolhido?\n");
    scanf("%d",&casas);
    
    switch(opt){
        case 1:{
            for(int i = 0; i < casas; i++){
                printf("direita + cima\n");
                colBispo++;
                linBispo++;
            }
        break;
        }
        case 2:{
            for(int i = 0; i < casas; i++){
            printf("esquerda + cima\n");
            colBispo--;
            linBispo++;
            }
        }
    }
    printf("-------------------------------\n");
    printf("Agora, o Bispo está na casa %c%d\n",colBispo,linBispo);
    printf("-------------------------------\n");
    
    int linCavalo = 1;
    char colCavalo = 'B';
    
    
    printf("\nMovimentação do Cavalo:\n");
    printf("O Cavalo está na casa %c%d\n",colCavalo,linCavalo);
    printf("Em que sentido deseja movimentar a Cavalo?\n1 - cima cima direita\n2 - cima cima esquerda\n");
    printf("3 - direita direita cima\n4 - direita direita baixo\n5 - esquerda esquerda cima\n6 - esquerda esquerda baixo\n");
    printf("7 - baixo baixo direita\n8 - baixo baixo esquerda\n");
    scanf("%d",&opt);
    
    switch(opt){
        case 1:{
            for(int i = 0; i < 1; i++){
                for(int j = 0; j < 2; j++){
                    printf("cima\n");
                    linCavalo++;
                }
                printf("direita\n");
                colCavalo++;
            }
            break;
        }
        case 2:{
            for(int i = 0; i < 1; i++){
                for(int j = 0; j < 2; j++){
                    printf("cima\n");
                    linCavalo++;
                }
                printf("esquerda\n");
                colCavalo--;
            }
            break;
        }
        case 3:{
            for(int i = 0; i < 1; i++){
                for(int j = 0; j < 2; j++){
                    printf("direita\n");
                    colCavalo++;
                }
                printf("cima\n");
                linCavalo++;
            }
            break;
        }
        case 4:{
            for(int i = 0; i < 1; i++){
                for(int j = 0; j < 2; j++){
                    printf("direita\n");
                    colCavalo++;
                }
                printf("baixo\n");
                linCavalo--;
            }
            break;
        }
        case 5:{
            for(int i = 0; i < 1; i++){
                for(int j = 0; j < 2; j++){
                    printf("esquerda\n");
                    colCavalo--;
                }
                printf("cima\n");
                linCavalo++;
            }
            break;
        }
        case 6:{
            for(int i = 0; i < 1; i++){
                for(int j = 0; j < 2; j++){
                    printf("esquerda\n");
                    colCavalo--;
                }
                printf("baixo\n");
                linCavalo--;
            }
            break;
        }
        case 7:{
            for(int i = 0; i < 1; i++){
                for(int j = 0; j < 2; j++){
                    printf("baixo\n");
                    linCavalo--;
                }
                printf("direita\n");
                colCavalo++;
            }
            break;
        }
        case 8:{
            for(int i = 0; i < 1; i++){
                for(int j = 0; j < 2; j++){
                    printf("baixo\n");
                    linCavalo--;
                }
                printf("esquerda\n");
                colCavalo--;
            }
            break;
        }
    }
    printf("-------------------------------\n");
    printf("Agora, o Cavalo está na casa %c%d\n",colCavalo,linCavalo);
    printf("-------------------------------\n");
}
