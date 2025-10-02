#include<stdio.h>

int main()
{
    int Arr[4] = {10, 20, 30, 40};
    
    int Brr[] = {10, 20, 30, 40, 50};
    
    int Crr[6] = {10, 20, 30};

    printf("Size of Arr : %ld\n", sizeof(Arr));
    printf("Size of Brr : %ld\n", sizeof(Brr));
    printf("Size of Crr : %ld\n", sizeof(Crr));

    return 0;
}