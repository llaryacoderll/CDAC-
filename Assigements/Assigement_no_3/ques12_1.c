/*12. Write a program to accept integer values of base and index and calculate power of base to
index.
Input: base: 2  index: 5
Output: 32
Input: base: 8  index: 3
Output: 512
*/
#include <stdio.h>
int main()
{
    int base,index,res=1;
    printf("Enter base and index values: ");
    scanf("%d %d",&base,&index);
    printf("base = %d index = %d\n",base,index);

    for(int i=1;i<=index;i++)
    {
        res = res*base;
    }
    printf("Output = %d",res);
}