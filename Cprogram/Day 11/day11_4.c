#include<stdio.h>
int main()
{
    printf("Current time : %s\n",__TIME__);
    printf("Current date : %s\n",__DATE__);
    printf("Current Line : %d\n",__LINE__);
    printf("Current File : %s\n",__FILE__);

    #line 50
    printf("Current Line : %d\n",__LINE__);
    


}