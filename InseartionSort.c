#include<stdio.h>
int main(){
    int array[] = {67,15,78,96,23,14,89,100,7,5};
    int i,j,item,n=10;

    for(i=1;i<n;i++){

        item = array[i];
        j  = i - 1;
        while(j>=0 && array[j]>item){
            array[j+1] = array[j];
            j = j - 1;
        }
        array[j+1] = item;

    }
    for(i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    return 0;
}
