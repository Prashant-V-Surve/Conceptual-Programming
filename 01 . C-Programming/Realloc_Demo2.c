#include <stdio.h>
#include <stdlib.h>

int main()
{

    int * Arr = NULL;

    //step1 : Allocate the memory
    Arr = (int *) malloc (5 * sizeof(int));      ///Arr here is a pointer

    //step2 : Use the memory
    Arr = (int *) realloc (Arr,3 * sizeof(int));

    //step3 :free the memory
    free(Arr);

    return 0;
}