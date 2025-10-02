#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iLength = 0;
    int * Arr = NULL;

    printf("Enter the number of elements: \n");
    scanf("%d",&iLength);

    //step1 : Allocate the memory
    Arr = (int *) calloc (iLength, sizeof(int));      ///Arr here is a pointer
    
    if(Arr == NULL)
    {
        printf("Undable to allocate memory \n");
    }
    else
    {
        printf("Memory gets successfully allocated\n");
    }

    //step2 : Use the memory

    //step3 :free the memory
    free(Arr);

    return 0;
}