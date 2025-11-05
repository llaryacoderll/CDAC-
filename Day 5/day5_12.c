// goto statments
#include <stdio.h>
int main()
{
    int j;
    for(int i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
            printf("%4d",i);
        if(j==4)
            goto END;
    }

    END:printf("End...");

}