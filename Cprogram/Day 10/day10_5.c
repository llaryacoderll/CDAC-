//char pointer to array
#include <stdio.h>
int main(){
    char *coures[] ={"dac","dbab","dac","ditties","ll"};
    printf("coures[1] = %s\n",coures[1]);

    printf("*(*(coures+2)+5) = %c\n",*(*(coures+2)+8));

    printf("sizeof(coures) = %d\n",sizeof(coures));


}