
/* add your value() based on this code */
#include <stdio.h>
int gcd( int a, int b );
int value(int type, int width, int height, int length );

int value(int type, int width, int height, int length )
{
    ///intialize
    int iDataType[] = { 79, 47, 29, 82, 26, 22 };
    int iDataType_Value[] = { 30, 10, 4, 5, 3, 9};
    int iDataArray[] = { width, height, length };
    int iAns, iMetalValue, iGCD, iHowM_Cube;
    int i, flag;
    ///check

    ///check type
    flag = 1;/*intial flag*/
    for ( i = 0; i < 6; i++) {
        if ( type == iDataType[i] ) {
            flag = 0;
            iMetalValue = iDataType_Value[i];
            break;
        }
    }
    if (flag == 1) return -1; /*type incorrect*/
    ///check (width, height, length)
    flag = 1;/*intial flag*/
    if ( width > 0 && height > 0 &&
        length > 0 ) {
        flag = 0;
    }
    if (flag == 1) return -2; /*(width, height, length) incorrect*/
    ///right data, count value
    /*GCD*/
    for (i = 0; i < 3; i++) {
        iGCD = gcd( iGCD, iDataArray[i]);
    }
    iHowM_Cube = ( width / iGCD ) * ( height / iGCD ) * ( length / iGCD );
    iAns = ( iGCD * iGCD * iGCD ) * ( iGCD * iGCD * iGCD ) *
            iMetalValue * iHowM_Cube;
    printf("%d, %d, %d\n", iGCD, iMetalValue, iHowM_Cube);
    return iAns;
}

int gcd( int a, int b )
{
    int iAns, temp;
    while ( b > 0 ) {
        temp = b;
        b = a % b;
        a = temp;
    }
    iAns = a;
    return iAns;
}



int main()
{
    int type, width, height, length;
    scanf ( "%d%d%d%d", &type, &width, &height, &length );
    printf ( "%d", value ( type, width, height, length ) );
    return 0;
}
