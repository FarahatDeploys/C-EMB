// write program that multiply numbers without multiplication
#include <stdio.h>
#include <stdlib.h>
int main(){
    // multiplication without multiplication operator 
    printf("Enter 2 number to multiply \n");
    int input1;
    int input2;
    scanf("%d %d",&input1,&input2);
    int multiply_result = 0 ;
    for (int i = 0; i < input2; i++)
    {
        multiply_result = input1+multiply_result;
    }
    printf("%d * %d  = %d",input1,input2,multiply_result);
    
}
