#include <stdio.h>

void movtorre(int casastorre){
    if (casastorre > 0){
    
        printf("Direita! %d\n", casastorre);
        movtorre(casastorre - 1);
    }
}

void movrainha(int casasrainha){
    if (casasrainha > 0){
    
        printf("Esquerda! %d\n", casasrainha);
        movrainha(casasrainha - 1);
    }
}
void movbispo(){
    int casasbispo = 5;
        printf("Cima, direita \n");
    
    for(int i = 0;i < casasbispo;i++){
        for(int j = 0;j < 1;j++){
            printf("Cima, direita!\n");
            }
    }
}



int main(){
    //movimentação torre
        int casastorre=5; //quantidade de casas que precisa mover
        int torrelugar=0; //casa atual da torre
    //movimentação rainha
        int casasrainha=8; //quantidade de casas que precisa mover
        int rainhalugar=0; //casa atual da rainha
    //movimentação bispo
        int casasbispo=5; //quantidade de casas que precisa mover
        int bispovert=1; //movimento vertical
        int bispohor=2; //movimento horizontal
    //movimentação cavalo
        int cavalovert=1;
        int cavalohor=1;
        int j=1;

        char opcao;

    printf("Selecione o movimentos das peças : T-Torre, R-Rainha,C-Cavalo,B-Bispo \n");
    scanf(" %c",&opcao);
    
    switch (opcao)
    {
    case 't':
    case 'T':
        printf("\n***Torre***\n");

        movtorre(casastorre);
        break;

    case 'r':
    case 'R':
        printf("\n***Rainha***\n");

        movrainha(casasrainha);
        break;
    
    case 'b':
    case 'B':
        printf("\n***Bispo***\n");

        movbispo();
        break;
    
    case 'c':
    case 'C':
        printf("\n***Cavalo***\n");

        for (int i = 0;i<4;i++){

            if (i==2) break;;
                
            printf("Cima\n");
            
            
            

    }       
        printf("Direita\n");

        break;

    default: printf("Opcao invalida\n");
        break;
    }

    return 0;
}