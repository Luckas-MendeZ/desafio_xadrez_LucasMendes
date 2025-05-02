#include <stdio.h>

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

    printf("\n***Torre***\n");

    while (torrelugar < casastorre)
    {
        printf("Direita\n");
        torrelugar++;
    }

    printf("\n***Rainha***\n");

    do
    {
        printf("Esquerda\n");
        rainhalugar++;
    } while (rainhalugar < casasrainha);

    printf("\n***Bispo***\n");

    for (int i = 0; i < casasbispo; i++){

        switch (bispovert) {
        case 1:
            printf("Cima, ");
            break;
        
        default:
            printf("invalido");
            break;
        } 
        switch (bispohor) {
        case 2:
            printf("Direita\n");
            break;
        
        default:
            printf("invalido");
            break;
        }
    }

    printf("\n***Cavalo***\n");

    for (int i = 0; i <= cavalovert; i++)
    {   
        while (j <= cavalohor)
        {
            printf("esquerda\n");
            j++;
        }
        printf("baixo\n");
    }
    
    return 0;
}