//Babbul Sort
#include<stdio.h>
int main(){
    int array[] = {15,58,6,64,79,12,54,1,14,50};
    int i,j,swap,size = 10,count = 0;
    for(i=0;i<size-1;i++){
        swap = 0;
        for(j=0;j<size-1-i;j++){
                count++;
            if(array[j]>array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
                swap = 1;
            }
        } if(swap == 0){
            break;
        }
    }
    printf("After sorting: ");

    for(i = 0; i<size; i++){
        printf("%d ",array[i]);
    }
    printf("\nTotal loop : %d",count);
    return 0;
}
