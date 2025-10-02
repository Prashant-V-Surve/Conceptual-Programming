#include<stdio.h>

int main()
{
    char cValue = 's';
    int iValue = 11;
    float fValue = 90.78f;
    double dValue = 98.564323;

    printf("%c\n",cValue);
    printf("%d\n",iValue);
    printf("%f\n",fValue);
    printf("%lf\n",dValue);

    printf("Size of Character is : %ld\n",sizeof(cValue));
    printf("Size of integer is : %ld\n",sizeof(iValue));
    printf("Size of float is : %ld\n",sizeof(fValue));
    printf("Size of double is : %ld\n",sizeof(dValue));

    return 0;
}