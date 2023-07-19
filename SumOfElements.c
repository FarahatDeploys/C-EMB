// sheet 1 -- P3 
#include <stdio.h>
#include <stdlib.h>
int main(){
    // printf("Hello world \n");
    int number_elem;
    printf("Enter number of Elements \n");
    scanf("%d",&number_elem);
    int temp = number_elem;
    int input;
    int i =1;
    int sum = 0;
    while(temp>0){
        printf("Enter element NO. %d : ",i);
        scanf("%d",&input);
        temp--;
        i++;
        sum = sum+input;
    }
    printf("Calculation done \n");
    printf("Sum of Elements : %d",sum);
}
