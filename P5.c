// make remainder operator withou using %
#include <stdio.h>
#include <stdlib.h>
int main(){
    int input1;
    int input2;
    printf("Enter the numbers for remainder calculation\n");
    scanf("%d %d",&input1,&input2); 
    int remainder = input1 - input2*(input1/input2);
    printf("%d  %%  %d = %d",input1,input2,remainder);


}
