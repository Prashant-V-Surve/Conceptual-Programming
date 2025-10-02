#include <stdio.h>

int main()
{
    int no = 11;

    int * p = &no;
    int ** q = &p;
    int *** a = &q;
    int ****b = &a;
    int *****c = &b;

    printf("Data fetched by no is : %d\n",no);
    printf("Data fetched by p is : %d\n",*p);
    printf("Data fetched by q is : %d\n",**q);
    printf("Data fetched by a is : %d\n",***a);
    printf("Data fetched by b is : %d\n",****b);
    printf("Data fetched by c is : %d\n",*****c);
/*    printf("Data fetched by p is : %d\n",*p);
    printf("Data fetched by p is : %d\n",*p);
*/
    return 0;
}