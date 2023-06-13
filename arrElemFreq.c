// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

int main() {
    int myarray [] = {4,5,6,7,9,9,9,10};
    int count =0;
    int arrayLength = sizeof(myarray)/sizeof(int);
    int target =9;
    
    
    for(int i =0;i<arrayLength;i++){
        if(myarray[i]-target == 0){
            count++;
        }
    }
    printf("Number %d have repeated %d ",target,count);
    return 0;
}
