#include<stdio.h>

int main()
{
    int i = 10;
    short int j = 20;
    long int k = 30;

    printf("Size of integer is : %ld \n",sizeof(i));              //4
    printf("Size of short integer is : %ld \n",sizeof(j));        //2
    printf("Size of long integer is : %ld \n",sizeof(k));         //8

    return 0;
}