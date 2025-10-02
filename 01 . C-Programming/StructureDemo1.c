#include<stdio.h>

struct Demo
{
    int i;
    float f;
    int j;
};

int main()
{
    struct Demo obj;

    printf("Size od Demo is : %ld\n",sizeof(struct Demo));    

    printf("Size of objecrt is : %ld\n",sizeof(obj));
    return 0;
}