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

    printf("Address of cValue is : %ld\n",&cValue);
    printf("Address of iValue is : %ld\n",&iValue);
    printf("Address of fValue is : %ld\n",&fValue);
    printf("Address of dValue is : %ld\n",&dValue);

    return 0;
}