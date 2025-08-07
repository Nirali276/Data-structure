#include <stdio.h>
int main() {
    int a = 20;          
    int *ptr;            

    ptr = &a;            

    printf("Value of a: %d\n", a);
    printf("Address of a:%d\n",ptr);

    return 0;
}
