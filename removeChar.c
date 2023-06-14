// Online C compiler to run C program online
#include <stdio.h>
void remove_char(char * s,char r);
int main() {
    // Write C code here
    char h[] = "Hello World";
    char z = 'o';
    remove_char(h,z);
    int ze = 0;
    printf("h after removal %s",h);
    

    return 0;
}
void remove_char(char *s,char r){
    int i = 0;
    while(s[i] != '\0'){
        printf("S[i] : %c\n",s[i]);
        if(s[i] == r){
            printf("Caught : S[i] : %c\n",s[i]);
            int z = i;
            while(s[z] != '\0'){
                s[z] = s[z+1];
                z++;
            }
        }else i++;
    }
    
}
