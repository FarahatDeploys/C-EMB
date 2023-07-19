// You are designing a poster which prints out numbers
// with a unique style applied to each of them. The styling
// is based on the number of closed paths or holes present
// in a giver number. The number of holes that each of the
// digits from 0 to 9 have are equal to the number of
// closed paths in the digit. Their values are:
// 1, 2, 3, 5 and 7 = 0 holes.
// 0, 4, 6, and 9 = 1 hole.
// 8 = 2 holes.
// Example if number 3824->3 has 0 holes,8 has 2
// holes,4 has 1hole sum=0+2+1=3.
#include <stdio.h>
#include <stdlib.h>
int main(){
    int input1;
    int remainder = 1;
    int holes = 0;
    printf("Enter a number \n");
    scanf("%d",&input1);
    while (input1>0)
    {
        remainder = input1%10;
        if(remainder==0 || remainder==4 || remainder == 6 || remainder ==9){
            holes = holes+1;
        }
        else if(remainder == 8){
            holes = holes +2;
        }

        input1 = input1/10;
    
    }
    printf("Number of holes : %d",holes);
    

}
