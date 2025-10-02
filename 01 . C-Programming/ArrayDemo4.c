#include<stdio.h>

int main()
{
    int Arr[5] = {10, 20, 30, 40, 50};
    
    printf("size of Arr : %ld\n",sizeof(Arr));

    printf("Arr ; %ld\n", Arr);
    printf("&Arr ; %ld\n", &Arr);

    printf("Arr + 1 ; %ld\n", Arr+1);
    printf("(&Arr) + 1 ; %ld\n", (&Arr) + 1);



    return 0;
}