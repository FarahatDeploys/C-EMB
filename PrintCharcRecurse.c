// Author Farahat
// Data 20-6-23

// compute the standarad deviation !
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <ctype.h>

bool check_anagram(char * w1,char * w2);
int count_punct(char *s);
void print_reverse(char *s);

int main()
{
    char s[] = "This is the way.";
    print_reverse(s);

    return 0;


}


// print -- > H
// print reverse -> T

void print_reverse(char *s)
{
    if(*(s) !=('\0')){
    print_reverse(s+1);
    printf("%c",*s);
    }


}





bool check_anagram(char * w1,char * w2){
    int len1 = strlen(w1);
    int len2 = strlen(w2);
    int w1lc[26] = {0};
    int w2lc[26] = {0};
    for(int i =0;i<len1;i++){
        int lower = towlower(w1[i]);
        w1lc[lower-'a']++;

    }

    for(int i =0;i<len2;i++){
        int lower = towlower(w2[i]);
        w2lc[lower-'a']++;

    }
    for(int i =0;i<26;i++){
        if(w1lc[i] != w2lc[i]) return false;
    }
    return true;
}

int count_punct(char *s)
{

    int len = strlen(s);
    int count = 0;
    for(int i =0;i<len;i++){
        if(ispunct(s[i])) count++;
    }
    return count;
}


