#include<stdio.h>
int main()
{
    int a = 30, b = 20;
    char c = 'A';
    int *ptr1,*ptr2,sum;
    //char *character;
    //character = &c;
    ptr1 = &a;
    ptr2 = &b;
    sum = *ptr1 + *ptr2;
    printf("pointer 1: %d\n",*ptr1);
    printf("Pointer 2: %d\n",*ptr2);
    printf("Total Sum: %d\n",sum);
    // printf("Character: %c\n",*character);
    // printf("Character: %c\n",c);

    if(*ptr1>*ptr2)
    {
        printf("%d is greater than %d\n",*ptr1, *ptr2);
    }
    else
    {
        printf("%d is less than %d\n",*ptr1, *ptr2);
    }
    return 0;
}
