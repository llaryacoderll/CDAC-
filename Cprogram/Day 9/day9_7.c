//predefined string functions
//strlen,strcmp,strcpy,strchr,strstr,strrev,strlwr,strupr,strcat,strncat
#include<stdio.h>
#include<string.h>
int main(){
    char str1[] = "sunbeam info";
    char str2[30] ;
    //strcpy : copies string into another array;
    strcpy(str2,str1);
    printf("str1 = %s\n",str1);
    printf("str2 = %s\n",str2);

    //strchr : it finds the specific character
    char ch = 'i';
    char *ptr = strchr(str1,ch);
    if(ptr==NULL){
        printf("charcter is not found\n");
    }
    else{
        printf("character is found at %d index\n",ptr-str1);
    }
    //strstr : finds the substring/specific string
    ptr = strstr(str1,"beam");
    if(ptr==NULL){
        printf("string is not found\n");
    }
    else{
        printf("string is found at %d index\n",ptr-str1);
    }
    printf("string reverse = %s\n",strrev(str1));
    printf("string reverse = %s\n",strrev(str1));
    printf("string upper = %s\n",strupr(str1));
    printf("string upper = %s\n",strlwr(str1));
    printf("string upper = %s\n",strcat(str1,str2));//concat/combining 2 strings
    printf("strncat = %s\n",strncat(str1,str2,5));




    
    return 0;
}
