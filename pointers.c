//Pointers
//Written by Nathan Lam, 8/7/17
//For the full code, go to:
//https://github.com/lam5ter/pointers

#include <stdio.h>
#include <stdlib.h>

//Constants
#define ARRAY_SIZE 5

int main(int argc, char *argv[]) {

    int x = 10;                 //assign an integer value to a variable
    int *p = &x;                //create a pointer to the address of x
    printf("x = %d\n", x);
    printf("p = %p\n", p);

    //Dereference pointers
    printf("*p = %d\n", *p);   
    printf("p[0] = %d\n", p[0]);

    printf("\nBelow shows how pointers can be used with arrays.\n");
    printf("Size of INT datatype: %lu\n", sizeof(int));
    int a[ARRAY_SIZE];      //assign a pointer
    int i;                  //iterator
    int *q = a;

    //Set 5 consecutive locations in memory to
    //0, 1, 2, 3, 4 respectively.
    for (i = 0; i < ARRAY_SIZE; i++) {
        *q = i;
        q++;
    }
    //Lines 31-34 can be replaced by the following line
    //for (i = 0; i < ARRAY_SIZE; i++) a[i] = i;
    for (i = 0; i < ARRAY_SIZE; i++)
        printf("At the address %p -> a[%d] = %d\n", &a[i], i, a[i]);
    //Notice that addresses differ by the size of an int datatype

    return EXIT_SUCCESS;

}

