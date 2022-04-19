#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;

    // using here malloc();


    ptr = (int*)malloc(5*sizeof(int));

    //using calloc() function;

    //ptr = (int*)calloc(10,sizeof(int));

    if(ptr ==NULL){
        printf("Memory Not Allocated.\n");
    }else{
        printf("Memory Allocated Successful.\n");
        printf("Allocated Memory value is: %d\n",*ptr);
        printf("Allocated Memory Address is: %p\n",ptr);
       // free(ptr);
      //  printf("Memory freed Successful.\n");
       // printf("Memory freed value is: %d\n",*ptr);
      //  printf("Memory freed Address is: %p\n",ptr);
        realloc(ptr,50);
        printf("Memory relocation Successful.\n");
        printf("Memory relocation value is: %d\n",*ptr);
        printf("Memory relocation Address is: %p\n",ptr);

    }
    return 0;
}
