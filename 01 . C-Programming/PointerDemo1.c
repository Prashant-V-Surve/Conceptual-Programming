#include<stdio.h>

int main()
{
    int iValue = 11;
    char cValue = 'M';
    
    int * iPtr = &iValue;
    char * cPtr = &cValue;

    printf("size of iPtr : %ld\n", sizeof(iPtr));
    printf("size of cPtr : %ld\n", sizeof(cPtr));

    return 0;
}