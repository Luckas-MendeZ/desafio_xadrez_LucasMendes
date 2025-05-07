#include <stdio.h>

//movimentação da torre usando procedimentos com recursividade
void movtorre(int casastorre){
    if (casastorre > 0){ 
    
        printf("Direita! %d\n", casastorre); // Imprime a direção e a quantidade de casas restantes
        movtorre(casastorre - 1); // Chamada recursiva para mover uma casa a menos
    }
}

//movimentação da rainha usando procedimentos com recursividade
void movrainha(int casasrainha){
    if (casasrainha > 0){
    
        printf("Esquerda! %d\n", casasrainha); // Imprime a direção e a quantidade de casas restantes
        movrainha(casasrainha - 1); // Chamada recursiva para mover uma casa a menos
    }
}

//movimentação do bispo usando procedimentos com recursividade
void movbispo(){
    int casasbispo = 5;
        printf("Cima, direita \n"); // Inicia o movimento em diagonal
    
    for(int i = 0;i < casasbispo;i++){ //movimento vertical
        for(int j = 0;j < 1;j++){ //movimento horizontal
            printf("Cima, direita!\n");
        }
    }
}



int main(){

    //lógica torre
        int casastorre=5; //quantidade de casas que precisa mover
        int torrelugar=0; //casa atual da torre

    //lógica rainha
        int casasrainha=8; //quantidade de casas que precisa mover
        int rainhalugar=0; //casa atual da rainha

    //lógica bispo
        int casasbispo=5; //quantidade de casas que precisa mover
        int bispovert=1; //movimento vertical do bispo
        int bispohor=2; //movimento horizontal do bispo
        
    //lógica cavalo
        int cavalovert=1; //movimento vertical do cavalo
        int cavalohor=1; //movimento horizontal do cavalo

        char opcao; //menu interativo

    printf("Selecione o movimentos das peças:\n T-Torre\n R-Rainha\n C-Cavalo\n B-Bispo \n");
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