//enum
#include <stdio.h>
int main(){
    enum year{jan,feb,mar,apri,may,june,july,aug,sept,oct,nov,dec} ;
    enum year month;

    printf("Enter a month: ");
    scanf("%d",&month);

    switch(month)
    {
        case jan:case may:case mar:case july:case aug:case oct:case dec:
            printf("31 days...\n");
            break;
        case apri:case june:case sept:case nov:
            printf("30 days...\n");
            break;
        case feb:
            printf("28 or 29 days..\n");
            break;
    }

}