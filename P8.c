// take positive inte and checks if it is a prime
// a prime number is a number that can be divised without any remainders ! 
#include <stdio.h>
#include <stdlib.h>
int main (){
    int input1;
    do{
        printf("Enter Positive Int : ");
        scanf("%d",&input1);
        if(input1<=0){
            printf("Wrong input please try again\n");
        }
        int temp = input1-1;
        if(temp == 0){
            printf("Number is prime ");
        }
        while (temp>=1)
        {
            if(temp == 1){
                printf("Number is Prime ");
                break;
            }
            if(input1%temp==0){
                printf("Not Prime Number");
                break;
            }
            temp--;
            

        }
        

    }while(input1<=0);

}
