/*
            G
        E F G F E
    C D E F G F E D C
A B C D E F G F E D C B A
    C D E F G F E D C 
        E F G F E
            G
*/

#include <stdio.h>
int main()
{
    int i;
    char ch,ch2;
    for(i=6,ch='G',ch2='G';i>=-1;i-=2,ch=ch-2,ch2-=2)
    {
        for(int j=1;j<=i;j++)
            printf("  ");
    
    

        for(char i=ch;i<='G';i++)
            printf("%c ",i);

        for(char k='F';k>=ch2;k--)
            printf("%c ",k);


        printf("\n");
    }
    for(i=2,ch='C',ch2='C';i<=7,ch2<='G';i+=2,ch+=2,ch2+=2)
    {
        for(int j=1;j<=i;j++)
            printf("  ");
    

        for(char i=ch;i<='G';i++)
             printf("%c ",i);

        for(char k='F';k>=ch2;k--)
            printf("%c ",k);


        printf("\n");
    }


    for(ch='C';ch>='G';ch++){
        for(ch2='G';ch2>=ch;ch2++)
            printf("%c",ch2);
        printf("\n");
    }
        

}