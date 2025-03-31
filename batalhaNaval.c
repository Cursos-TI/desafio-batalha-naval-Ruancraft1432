#include <stdio.h>

int main() {
    //Tabuleiro
    char S[11] = {'A','B','C','D','E','F','G','H','I','J','*'};
    int Ta[10][11] = {
        {0,0,0,0,0,0,0,0,0,0,1},
        {0,0,0,0,0,0,0,0,0,0,2},
        {0,0,0,0,0,0,0,0,0,0,3},
        {0,0,0,0,0,0,0,0,0,0,4},
        {0,0,0,0,0,0,0,0,0,0,5},
        {0,0,0,0,0,0,0,0,0,0,6},
        {0,0,0,0,0,0,0,0,0,0,7},
        {0,0,0,0,0,0,0,0,0,0,8},
        {0,0,0,0,0,0,0,0,0,0,9},
        {0,0,0,0,0,0,0,0,0,0,10}
    };
    //Navios
    int N1 = 3, N2 = 3, N3 = 3, N4 = 3;
    //Navio 1 Horizontal G2, H2, J2
    Ta[1][6] = N1,Ta[1][7] = N1,Ta[1][8] = N1;
    //Navio 2 Vertical F8, F9, F10
    Ta[7][5] = N2,Ta[8][5] = N2,Ta[9][5] = N2;
    //Navio 3 Diagonal Esquerda A1, B2, C3
    Ta[0][0] = N3,Ta[1][1] = N3,Ta[2][2] = N3;
    //Navio 4 Diagonal Direita B10, C9, D8
    Ta[7][3] = N4,Ta[8][2] = N4,Ta[9][1] = N4;

    printf("TABULEIRO DE BATALHA NAVAL\n");
    //Projeção das letras A,B,C,D,E,F,G,H,I,J,*
    for(int s = 0; s < 11; s++){
        printf("%c ",S[s]);
    }
    //Habilidades
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 11; j++){
            if(j % 2 == 0){
                //Cruz
                Ta[2][5] = 5, Ta[3][3] = 5, Ta[3][4] = 5, Ta[3][5] = 5, Ta[3][6] = 5, Ta[3][7] = 5, Ta[4][5] = 5;
                //Cone
                Ta[4][7] = 5, Ta[5][6] = 5,Ta[5][7] = 5, Ta[5][8] = 5, Ta[6][5] = 5, Ta[6][6] = 5, Ta[6][7] = 5, Ta[6][8] = 5;
                //Octaedro
                Ta[5][1] = 5, Ta[6][0] = 5, Ta[6][1] = 5, Ta[6][2] = 5, Ta[7][1] = 5;
            }
        }
    }

    printf("\n");
    //Projeção do Tabuleiro
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 11; j++){
            printf("%d ",Ta[i][j]);
        }
        printf("\n");
    }

    return 0;
}