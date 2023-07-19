#include <stdio.h>
#include <stdlib.h>
// write a program that sums the numbers in a decimal number
int main(){
    int input1;
    printf("Enter a number\n");
    scanf("%d",&input1);
    int sum =0;
    while (input1>0)
    {
        sum = input1%10+sum;
        input1 = input1/10;
        
    }
    printf("Sum of the numbers : %d",sum);
    

}
