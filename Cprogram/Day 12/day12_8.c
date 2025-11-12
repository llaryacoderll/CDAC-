// File handling : fprintf and fscanf
#include<stdio.h>
int main(){
    FILE *ptr = fopen("sunbeam.txt","w");
    char name[20];
    int age;
    for (int i = 0; i<1; i++){
        printf("enter the name and age\n");
        scanf("%s%d",&name,&age);
        fprintf(ptr,"%s  %d\n",name,age);
    }
    printf(" data written in the file!!\n");
    fclose(ptr);

    ptr = fopen("sunbeam.txt","r");
    while(fscanf(ptr,"%s%d",&name,&age)!=EOF){
        printf("name = %s\n age =%d\n",name,age);
    }
fclose(ptr);

    
return 0;
}

