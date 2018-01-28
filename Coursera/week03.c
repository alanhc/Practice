#include <stdio.h>

int iData[10][256][256] = {{{0}}};
int iPlayer, iBoard_size;


int check_row( int i, int j, int k )
{
    int a;
    int line = 1;
    for ( a = 0; a < iBoard_size; a++) {
        line = ( iData[i][j][a] != -1 )? 0 : 1;
        if ( line == 0 ) return 0;
    }
    return 1;
}

int check_col( int i, int j, int k )
{
    int a;
    int line = 1;
    for ( a = 0; a < iBoard_size; a++) {
        line = ( iData[i][a][k] != -1 )? 0 : 1;
        if ( line == 0 ) return 0;
    }
    return 1;
}

int check_cross( int i, int j, int k )
{
    int a;
    int line = 1;
    if ( j == k ) {
        for ( a = 0; a < iBoard_size; a++ ) {
            line = ( iData[i][a][a] != -1 )? 0 : 1;
            if ( line == 0 ) return 0;
        }
        return 1;
    }
    else if ( j + k == iBoard_size -1 ) {
        for ( a = 0; a < iBoard_size; a++ ) {
            line = ( iData[i][a][iBoard_size - 1 - a] != -1 )? 0 : 1;
            if ( line == 0 ) return 0;
        }
        return 1;
    }
    else return 0;
}


int main(void)
{
    int i, j, k, a, b;
    int now;
    int bingo = 0;
    scanf("%d%d", &iPlayer, &iBoard_size);
    for (i = 0; i < iPlayer; i++) {
        for (j = 0; j < iBoard_size; j++) {
            for (k = 0; k < iBoard_size; k++) {
                scanf("%d", &iData[i][j][k]);
            }
        }
    }
    for (i = 0; i < iPlayer; i++) {
        for (j = 0; j < iBoard_size; j++) {
            for (k = 0; k < iBoard_size; k++) {
                printf("%5d ", iData[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }


    for ( a = 0; a < iBoard_size * iBoard_size; a++) {
        scanf("%d", &now);
        for (i = 0; i < iPlayer; i++) {
            for (j = 0; j < iBoard_size; j++) {
                for (k = 0; k < iBoard_size; k++) {
                    if ( iData[i][j][k] == now ) {
                        iData[i][j][k] = -1;
                        if ( check_row( i, j, k ) || check_col( i, j, k ) || check_cross( i, j, k ) ) {
                            if ( bingo == 0) printf("%d ", now);
                        bingo = 1;
                        printf("%d ", i);
                        }
                    }
                }
            }
        }
        //printf("\n");
        if (bingo == 1) break;
    }
    printf("\n");
    ///print array
//    for (i = 0; i < iPlayer; i++) {
//        for (j = 0; j < iBoard_size; j++) {
//            for (k = 0; k < iBoard_size; k++) {
//                printf("%d ", iData[i][j][k]);
//            }
//            printf("\n");
//        }
//        printf("\n");
//    }
}

