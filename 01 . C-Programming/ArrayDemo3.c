#include<stdio.h>

int main()
{
    int Arr[4] = {10, 20, 30, 40};
    
    printf("Arr : %ld\n",Arr);
    printf("&Arr ; %ld\n",&Arr);
    printf("&(Arr[0]) ; %ld\n",&(Arr[0]));

    return 0;
}