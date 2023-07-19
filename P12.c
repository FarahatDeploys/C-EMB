// write a program to take even numbers from user and
// print the sum of them after each entry if the user enters
// 2 odd number the program print "bye" and stopped.
#include <stdio.h>
#include <stdlib.h>
int main(){
    int flag  = 0;
    int input1;
    int sum =0;
    while (flag<2)
    {
        printf("Enter an even number\n");
        scanf("%d",&input1);
        if(input1%2!=0){
            flag++;
        }
        sum = sum +input1;
        printf("sum     : %d\n",sum);
        if(flag==2){
            printf("bye");
            break;
        }
    }
    
}
