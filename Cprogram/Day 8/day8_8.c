// char array
#include<stdio.h>
int main(){
    char str1[5] = {'A','B','C','D','E'}; // char array
    char str2[5] = {'A','B','C'}; // string
    char str3[5] = "POOJA"; //char array
    char str4[5] = "PUNE"; // string
    //char str[]; error
    char str5[] = "SUNBEAM"; // string
    char str6[] = {'S','U','N','B','E','A','M'}; //char array

    printf("str1 = %s\n",str1);
    printf("str3 = %s\n",str3);

    printf("String: \n");
    for(int i = 0; i<7;i++){
        printf("%c",str6[i]);
    }

    return 0;

}