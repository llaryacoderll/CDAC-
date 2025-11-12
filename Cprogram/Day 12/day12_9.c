// fputs and fgets
#include<stdio.h>
int main(){
    FILE *ptr = fopen("sun.txt","w");
    char str[100];
    gets(str);
    fputs(str,ptr);
    printf("data entered into the file\n");
    fclose(ptr);
    
    ptr = fopen("sun.txt","r");
    char info[100];
    fgets(info,100,ptr);
    printf("%s",info);
}
