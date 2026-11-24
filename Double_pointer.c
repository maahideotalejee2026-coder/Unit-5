#include <stdio.h>

int main()
{
    int num;
    int *ptr;
    int **dptr;

    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    ptr = &num;
    dptr = &ptr;

    printf("\nValue of variable = %d\n", num);
    printf("Value using pointer = %d\n", *ptr);
    printf("Value using double pointer = %d\n", **dptr);

    printf("\nAddress of variable = %p\n", (void *)&num);
    printf("Address stored in pointer = %p\n", (void *)ptr);
    printf("Address stored in double pointer = %p\n", (void *)dptr);

    return 0;
}
