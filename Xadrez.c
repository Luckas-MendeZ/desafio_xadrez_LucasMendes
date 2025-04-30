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
        int casasvert=1; //movimento vertical
        int casashor=2; //movimento horizontal

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

        switch (casasvert) {
        case 1:
            printf("Cima, ");
            break;
        
        default:
            printf("invalido");
            break;
        } 
        switch (casashor) {
        case 2:
            printf("Direita\n");
            break;
        
        default:
            printf("invalido");
            break;
        }
    }
    return 0;
}