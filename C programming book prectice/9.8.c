#include<stdio.h>

enum DAY {SUNDAY,MONDAY,TUESDAY,WEDNESDAY,THURSDAY,FRIDAY,SATURDAY};

int main()
{
    enum DAY today;

    today =SUNDAY;

    switch (today){

    case SUNDAY:
        printf("Today is Sunday .It is a work day\n");
       // break;

    case MONDAY:
        printf("Today is monday .It is a work day\n");
        break;
    case TUESDAY:
        printf("Today is tuesday .It is a work day\n");
        break;
    case WEDNESDAY:
        printf("Today is Wednesday .It is a work day\n");
        break;
    case THURSDAY:
        printf("Today is Thursday .It is a work day\n");
        break;
    case FRIDAY:
        printf("Today is Friday .Today is holiday\n");
        //break;
    case SATURDAY:
        printf("Today is Saturday .Today is holiday\n");
        break;

    }
    return 0;

}
