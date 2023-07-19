// read positive int and check if it has base of 2 
#include <stdio.h>
#include <stdlib.h>
int main(){
    int input1;
    do{
        printf("Enter positive INT : ");
        scanf("%d",&input1);
        if(input1 >1){
            while (input1>=1)
            {
                if(input1%2!=0 && input1 != 1){
                   printf("Not base 2");
                   input1 = 4;
                   break; 
                }
                input1 = input1/2;
                if(input1==1){
                    printf("Base 2");
                    input1 =10;
                    break;
                    
                }
            }
            
        }

    
    }while(input1<=0);
}
