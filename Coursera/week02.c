#include <stdio.h>

int iYear,iWeek, iNumber_data,leap_year;
int itemp_month[100], itemp_date[100];



int main(void) {

    int i,j,iOutput_week,iSum_date;
    ///input
    scanf("%d%d\n%d",&iYear,&iWeek,&iNumber_data);
    leap_year = ( iYear % 4 ==0 || ( iYear % 4 == 0 ) && ( iYear % 100 != 0 ))? 1: 0;
    int iMonth_date[12]= { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (leap_year == 1)
        iMonth_date[1]++;

    if (iNumber_data > 100)
        iNumber_data = 100;
    for (i=0; i<iNumber_data; i++) {
        scanf("%d %d", &itemp_month[i], &itemp_date[i]);
    }

    ///output
    for ( i = 0 ; i < iNumber_data ; i++) {
        if ( itemp_month[i] < 1 || itemp_month[i] > 12 ) {
            /// invalid month input
            iOutput_week = -1;
        } else if ( itemp_date[i] < 1 || itemp_date[i] > iMonth_date[itemp_month[i] - 1] ) {
            /// invalid date input
            iOutput_week = -2;
        } else {
                iSum_date = 0;
                for ( j = 0; j < itemp_month[i] - 1; j++) {
                    iSum_date += iMonth_date[j];
                }
                iSum_date += itemp_date[i] - 1;
                iOutput_week = (iWeek + iSum_date) % 7;
        }
        printf("%d ",iOutput_week);
    }
}
