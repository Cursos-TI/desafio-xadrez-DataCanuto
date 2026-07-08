#include <stdio.h>

int main(){
    
    int rainha=0, bispo=0, torre=0, cavalo=0;
    
    printf("Movendo a torre:\n");
    do{
        printf("Movendo a torre %d casa (direita)\n ",torre+1);
        torre++;
    }while(torre <= 5);
    
    printf("\n------------------\n");
    
    printf("Movendo o bispo: \n");
    for(bispo = 0; bispo < 5; bispo++){
        printf("Movendo o bispo %d casa (cima, direita)\n",bispo+1);
    }
    
    printf("\n------------------\n");
    
    printf("Movendo a rainha: \n");
    while(rainha < 8){
        printf("Movendo a rainha %d casa (esquerda)\n",rainha+1);
        rainha++;
    }
    
    printf("\n------------------\n");
    
    printf("Movendo o cavalo: \n");
    for(cavalo = 0; cavalo < 2; cavalo++){
        printf("Movendo o cavalo %d casa (cima)\n",cavalo+1);
    }
    printf("Movendo o cavalo 1 casa (esquerda)\n");
    
    
    
}

    return 0;
}
