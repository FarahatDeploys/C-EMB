// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int myArr [] = {1,2,3,4,5,6,7,8,9};
    int length = 9;
    int temp = 0;
    for(int i =0;i<length/2;i++){
        temp = myArr[i];
        myArr[i] = myArr[length-i-1];
        myArr[length-i-1] = temp;
        
    }
    for(int i =0;i<length;i++){
        printf("Arr element %d : %d\n",i,myArr[i]);
    }
    return 0;
} 
