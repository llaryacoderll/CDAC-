// 5. Write a function to print a given character for a given number of times.
#include<stdio.h>
void chprint(char ,int);
int main()
{
    char ch;
    int n;
    printf("Enter a charater: ");
    scanf("%c",&ch);
    printf("How many times do you want print..? ");
    scanf("%d",&n);
    chprint(ch,n);
}
void chprint(char ch,int n){
    for(int i=1;i<=n;i++)
        printf("%c",ch);
}