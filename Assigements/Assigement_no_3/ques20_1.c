/*20. Write a program to display
a. Prime numbers between 1 to 100
b. Armstrong Numbers between 1 to 500*/

#include<stdio.h>
int main()
{
    int n=8,c=0;
    for(int j=1;j<=100;j++)
    {
        
        for(int i=1;i<=j;i++){
            if(n%i==0)
              c++;
        }
        if(c==2)
            printf("%d",j);
        printf("%d ",c);
    }
}