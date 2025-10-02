#include<stdio.h>

int main()
{
    int iNo1 = 10;
    const int iNo2 = 20;

    //Below lines generate error

    iNo1++;          // iNo1 = iNo1 + 1;
    iNo2++;          // iNo2 = iNo2 + 1;      //Error

    iNo2 = 30;              //Error

    printf("Value of iNo1 : %d", iNo1);
    printf("Value of iNo2 : %d", iNo2);

    return 0;
}