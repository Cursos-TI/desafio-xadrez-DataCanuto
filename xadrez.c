/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void menuPrincipal(){
    printf("\nBem Vindo!\n");
    printf("\nVamos Aprender a jogar Xadrez?\n");
    printf("Qual peça você gostaria de mover?\n");
    printf("1 - Torre\n2 - Cavalo\n3 - Bispo\n4 - Rainha\n5 - Rei\n0 - Sair\n");
    printf("Escolha: ");
}



void movimentarTorre(int casas, int sentido, char *coluna, int *linha){
    if(casas == 0){
        return;
    }
    if(sentido == 1){
        printf("Cima\n");
        (*linha)++;
    }else if(sentido == 2){
        printf("Direita\n");
        (*coluna)++;
    }else if(sentido == 3){
        printf("Baixo\n");
        (*linha)--;
    }else if(sentido == 4){
        printf("Esquerda\n");
        (*coluna)--;
    }
    
    movimentarTorre(casas - 1, sentido, coluna, linha);
}

void movimentarCavalo(int sentido, char* colCavalo, int* linCavalo){
    if(sentido == 0){
        return;
    }
    switch(sentido){
        case 1:{
            for(int i = 0; i < 1; i++){
                for(int j = 0; j < 2; j++){
                    printf("cima\n");
                    (*linCavalo)++;
                }
                printf("direita\n");
                (*colCavalo)++;
            }
            break;
        }
        case 2:{
            for(int i = 0; i < 1; i++){
                for(int j = 0; j < 2; j++){
                    printf("cima\n");
                    (*linCavalo)++;
                }
                printf("esquerda\n");
                (*colCavalo)--;
            }
            break;
        }
        case 3:{
            for(int i = 0; i < 1; i++){
                for(int j = 0; j < 2; j++){
                    printf("direita\n");
                    (*colCavalo)++;
                }
                printf("cima\n");
                (*linCavalo)++;
            }
            break;
        }
        case 4:{
            for(int i = 0; i < 1; i++){
                for(int j = 0; j < 2; j++){
                    printf("direita\n");
                    (*colCavalo)++;
                }
                printf("baixo\n");
                (*linCavalo)--;
            }
            break;
        }
        case 5:{
            for(int i = 0; i < 1; i++){
                for(int j = 0; j < 2; j++){
                    printf("esquerda\n");
                    (*colCavalo)--;
                }
                printf("cima\n");
                ((*linCavalo))++;
            }
            break;
        }
        case 6:{
            for(int i = 0; i < 1; i++){
                for(int j = 0; j < 2; j++){
                    printf("esquerda\n");
                    (*colCavalo)--;
                }
                printf("baixo\n");
                (*linCavalo)--;
            }
            break;
        }
        case 7:{
            for(int i = 0; i < 1; i++){
                for(int j = 0; j < 2; j++){
                    printf("baixo\n");
                    (*linCavalo)--;
                }
                printf("direita\n");
                (*colCavalo)++;
            }
            break;
        }
        case 8:{
            for(int i = 0; i < 1; i++){
                for(int j = 0; j < 2; j++){
                    printf("baixo\n");
                    (*linCavalo)--;
                }
                printf("esquerda\n");
                (*colCavalo)--;
            }
            break;
        }
    }
}

void movimentarBispo(int casas, int sentido, char *coluna, int *linha){
    if(casas == 0){
        return;
    }
    if(sentido == 1){
        printf("Direita + Cima\n");
        (*linha)++;
        (*coluna)++;
    }else if(sentido == 2){
        printf("Esquerda + Cima\n");
        (*linha)--;
        (*coluna)++;
    }else if(sentido == 3){
        printf("Direita + Baixo\n");
        (*linha)++;
        (*coluna)--;
    }else if(sentido == 4){
        printf("Esquerda + Baixo\n");
        (*linha)--;
        (*coluna)--;
    }
    
    movimentarBispo(casas - 1, sentido, coluna, linha);
}

void movimentarRainha(int casas, int sentido, char *coluna, int *linha){
    if(casas == 0){
        return;
    }
    if(sentido == 1){
        printf("Cima\n");
        (*linha)++;
    }else if(sentido == 2){
        printf("Direita\n");
        (*coluna)++;
    }else if(sentido == 3){
        printf("Baixo\n");
        (*linha)--;
    }else if(sentido == 4){
        printf("Esquerda\n");
        (*coluna)--;
    }else if(sentido == 5){
        printf("Direita + Cima\n");
        (*linha)++;
        (*coluna)++;
    }else if(sentido == 6){
        printf("Esquerda + Cima\n");
        (*linha)--;
        (*coluna)++;
    }else if(sentido == 7){
        printf("Direita + Baixo\n");
        (*linha)++;
        (*coluna)--;
    }else if(sentido == 8){
        printf("Esquerda + Baixo\n");
        (*linha)--;
        (*coluna)--;
    }
    
    movimentarRainha(casas - 1, sentido, coluna, linha);
}

void movimentarRei(int sentido, char *coluna, int *linha){
    if(sentido == 1){
        printf("Cima\n");
        (*linha)++;
    }else if(sentido == 2){
        printf("Direita\n");
        (*coluna)++;
    }else if(sentido == 3){
        printf("Baixo\n");
        (*linha)--;
    }else if(sentido == 4){
        printf("Esquerda\n");
        (*coluna)--;
    }
}



int main()
{
    int opt = 0;
    int linTorre=1, linCavalo=1, linBispo=1, linRainha=1, linRei=1;
    int casas = 0;
    int sentido = 0;
    char colTorre, colCavalo, colBispo, colRainha='D', colRei='E';

    do{
    
        menuPrincipal();
        scanf("%d",&opt);
        
        switch(opt){
            case 0:{
                break;
            }
            case 1: {
                printf("Movimentação da Torre\n");
                printf("Selecione a torre: \n[A, H]\n");
                scanf(" %c",&colTorre);
                printf("Torre slecionada: %c%d\n",colTorre,linTorre);
                printf("Selecione o sentido da movimentação:\n1 - Cima\n2 - Direita\n3 - Baixo\n4 - Esquerda\n ");
                printf("Escolha: ");
                scanf("%d",&sentido);
                printf("Informe quantas casas deseja mover a torre no sentido selecionado: ");
                scanf("%d",&casas);
                movimentarTorre(casas, sentido, &colTorre, &linTorre);
                printf("-------------------------------\n");
                printf("\nAgora, a torre está na casa %c%d\n",colTorre,linTorre);
                printf("-------------------------------\n");
                break;
            }
            case 2: {
                printf("Movimentação do Cavalo\n");
                printf("Selecione o Cavalo:\n[B, G]\n");
                scanf(" %c", &colCavalo);
                printf("Cavalo senecionado: %c%d\n",colCavalo,linCavalo);
                printf("Escolha um dos sentidos de movimentação possíveis:\n");
                printf("1 - cima cima direita\n2 - cima cima esquerda\n");
                printf("3 - direita direita cima\n4 - direita direita baixo\n5 - esquerda esquerda cima\n6 - esquerda esquerda baixo\n");
                printf("7 - baixo baixo direita\n8 - baixo baixo esquerda\n");
                scanf("%d",&sentido);
                
                movimentarCavalo(sentido,&colCavalo,&linCavalo);
                
                printf("-------------------------------\n");
                printf("Agora, o Cavalo está na casa %c%d\n",colCavalo,linCavalo);
                printf("-------------------------------\n");
                break;
            }
            case 3: {
                printf("Movimentação do Bispo\n");
                printf("Selecione o Bispo:\n[C, F]\n");
                scanf(" %c", &colBispo);
                printf("Bispo selecionado: %c%d\n",colBispo,linBispo);
                printf("Escolha um dos sentidos de movimentação possíveis:\n");
                printf("1 - Direita + Cima\n2 - Esquerda + Cima\n3 - Direita + Baixo\n4 - Esquerda + Baixo\n");
                scanf("%d",&sentido);
                printf("Quantas casas deseja mover o bispo: ");
                scanf("%d",&casas);
                
                movimentarBispo(casas,sentido,&colBispo, &linBispo);
                printf("-------------------------------\n");
                printf("Agora, o Bispo está na casa %c%d\n",colBispo,linBispo);
                printf("-------------------------------\n");
                break;
            }
            case 4:{
                printf("Movimentação da Rainha\n");
                printf("Rainha na casa %c%d\n", colRainha,linRainha);
                printf("Escolha um dos sentidos de movimentação possíveis:\n");
                printf("1 - Cima\n2 - Direita\n3 - Baixo\n4 - Esquerda\n");
                printf("5 - Direita + Cima\n6 - Esquerda + Cima\n7 - Direita + Baixo\n8 - Esquerda + Baixo\n");
                scanf("%d",&sentido);
                printf("Quantas casas deseja mover a rainha: ");
                scanf("%d", &casas);
                movimentarRainha(casas,sentido,&colRainha,&linRainha);
                printf("-------------------------------\n");
                printf("Agora, a Rainha está na casa %c%d\n",colRainha,linRainha);
                printf("-------------------------------\n");
                break;
                
            }
            case 5:{
                printf("Movimentação do Rei\n");
                printf("Rei na casa %c%d\n", colRei,linRei);
                printf("Escolha um dos sentidos de movimentação possíveis:\n");
                printf("1 - Cima\n2 - Direita\n3 - Baixo\n4 - Esquerda\n");
                scanf("%d",&sentido);
                movimentarRei(sentido,&colRei,&linRei);
                printf("-------------------------------\n");
                printf("Agora, o Rei está na casa %c%d\n",colRei,linRei);
                printf("-------------------------------\n");
                break;
                
            }
            default:{
                printf("Opção inválida\n");
                break;
            }
        }
    }while(opt != 0);

    return 0;
}
