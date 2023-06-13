// this is training program to get the smallest element in array 
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // initialize an array
    int myarray [] = {8,7,5,3,9,10,1,2,4};
    int max = myarray[0];
    int arrlength = 9;
    for(int i =0;i<arrlength;i++){
        if(myarray[i]>max) {
            max = myarray[i];
            
        }
        
    }
    printf("The max number is :  %d",max);

    return 0;
}
