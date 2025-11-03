/*
Write a program to determine the ranges of char, short, int, and long variables, both signed and
unsigned, by printing appropriate values from standard headers.
Do not use spaces to align table columns.
(note: the size and range changes from compiler to compiler)

Data Type            Size     Format Specifier        Range

char                 1        %c                    -128 to +127
unsigned char        1        %c                    0 to 255
short int            2        %hd                   -32768 to +32767
unsigned short int   2        %hu                   0 to 65535
int                  2        %d                    -32768 to +32767
unsigned int         2        %u                    0 to 65535
long int             4        %ld                   -2,147,483,648 to 2,147,483,647
unsigned long int    4        %lu                   0 to 4,294,967,295

*/
#include<stdio.h>
#include<limits.h>
int main()
{
    printf("Datatype \t\t size \t\t Format Specifier \t\t Range\n");
    printf("---------------------------------------------------------------------------------------\n");
    printf("char \t\t\t 1 \t\t %%c \t\t\t %d to %d\n",CHAR_MIN,CHAR_MAX);
    printf("unsigned char \t\t 1 \t\t %%c \t\t\t 0 to %d\n",UCHAR_MAX);
    printf("short int \t\t 1 \t\t %%hd \t\t\t %d to %d\n",SHRT_MIN,SHRT_MAX);
    printf("unsigned short int \t 1 \t\t %%hd \t\t\t 0 to %u\n",USHRT_MAX);
    printf("int \t\t\t 1 \t\t %%d \t\t\t %d to %d\n",INT_MIN,INT_MAX);
    printf("unsigend int \t\t 1 \t\t %%d \t\t\t 0 to %u\n",UINT_MAX);
    printf("long int \t\t 1 \t\t %%ld \t\t\t %ld to %ld\n",LONG_MIN,LONG_MAX);
    printf("unsigned long int \t 1 \t\t %%lu \t\t\t 0 to %lu\n",ULLONG_MAX);
    printf("---------------------------------------------------------------------------------------\n");


}