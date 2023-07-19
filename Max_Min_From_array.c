// Sheet 1 -- Problem 2 
#include <stdio.h>
#include <stdlib.h>
// take number of inputs from the user and get the max and min numbers 
int main(){
    // printf("Testing");
    int numb_elements;
    printf("Enter the number of elements in your array \n");
    scanf("%d",&numb_elements);
    int max;
    int min;
    int input;
    if(numb_elements>0){

    for (int i = 1; i <= numb_elements; i++)
    {
        printf("Enter element No. %d\n",i);
        scanf("%d",&input);
        if(i==1){
            min = input;
            max = input;
        }
        if(input>max){
            max = input;
        }
        if(input<min){
            min = input;
        }
    }
    printf("Done calculation ! \n");
    printf("The max number is  :  %d\n",max);
    printf("The min number is  :  %d\n",min);

    }else{
        printf("You can't calculate max & min for 0 size array \n");

    }
 

    


}
 
