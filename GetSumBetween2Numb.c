// P1 by Abdbasit 
// take 2 numbers as input from the user 
// calculate the sum of the numbers between these inputs !

// Libraries 
#include <stdio.h>
#include <stdlib.h>

int main(){

    //printf("Compiler check");
    int a,b;
    printf("Enter 2 numbers to calculate the sum of number : \n");
    scanf("%d %d",&a,&b);
    int start_numb ;
    int end_numb;
    // start_numb is the smaller number from the user 
    // end_num is the bigger number from the user
    if(a>b){
        start_numb = b+1;
        end_numb = a-1;
    }else{
        start_numb = a+1;
        end_numb =b-1;
    }
    // 1, 4 
    // numbers between 1,4 are 2,3
    // start_numb = 2
    // end_num = 3
    // count_limit = 3-2 = 1
    int countLimit = end_numb-start_numb+1;
    int numb = start_numb;
    int sum =0;
    for (int i = 0; i <countLimit ; i++)
    {
        sum = numb + sum;
        numb++;
    }
    printf("The result of sum is \n");
    printf("%d",sum);
}
