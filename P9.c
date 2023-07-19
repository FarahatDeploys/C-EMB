// get a positive int number and checkis if it is perfect square 
#include <stdio.h>
#include <stdlib.h>
int main(){
    int input;
    int temp = 1;
    do{
        printf("Enter positive int : ");
        scanf("%d",&input);
        if(input<0){
            printf("Wrong input please try again\n");
        }
        while(temp <= input/2){
            if(temp*temp == input){
                printf("The number is a perfect square");
                break;
            }
            if(temp == input/2){
                printf("Not a perfect Square");
            }
            temp++;
        }
        
    }while(input <0);
}
