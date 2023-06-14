// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

// target 
// count of a word occurance in a string 
int count_occ(char *stirng,char * word);

int main() {
    // Write C code here
    printf("Compiled ....\n");
    char  s [] = "ZKY ZKY ZKY  ZKY ZKY ZKY hady";
    char  w [] = "ZKY";
    int countres= count_occ(s,w)/(sizeof(w)-1);
    printf("count result : %d",countres);
    

    return 0;
}
int count_occ(char *s,char *w){
    int count = 0;
    int slen = strlen(s);
    int wlen = strlen(w);
    for(int i=0;i<slen;i++){
        if(s[i]==w[0]){
            for(int j =0;j<wlen;j++){
                if(s[i+j] !=w[j]){
                    break;
                }
                count++;
            }
        }
    }
    return count;
}
