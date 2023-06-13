// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool is_palidrome(char string[]);

int main() {

    char s1 [] = "not a palindrome!";
    char s2 [] = "abccba";
    char string3 [] = "abcdcba";
    int string1Length = strlen(s2);
    for(int i =0;i<string1Length/2;i++){
        if(!(s2[i]-s2[string1Length-i-1] ==0)){
            printf("Not a palid...");
        }else{
            printf("Palind..");
        }
        
    }
    

    return 0;
} 
