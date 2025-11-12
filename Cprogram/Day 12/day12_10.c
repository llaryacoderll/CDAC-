// fputc : append, getchar()
#include<stdio.h>
int main(){
    FILE *ptr = fopen("sunbeam.txt","a");
    char ch;
    while((ch = getchar())!= EOF){
        fputc(ch,ptr);
    }
}


