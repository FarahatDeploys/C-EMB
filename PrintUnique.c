// print uniques example.
// turn array into set  
// ex :input -> [1,1,2,2,3,4]  => output -> {1,2,3,4}
#include <stdio.h>
#include <stdbool.h>
void print_unique(int a[],int length);
int main()
{
    int a[] = {1,2,3,3,4,4,5,6,6};
    print_unique(a,sizeof(a)/sizeof(int));

}
void print_unique(int a[],int length){
    for(int i =0;i<length ;i++){
        bool match_found = false;
        for(int j =0;j<length;j++){
            if(a[i] == a[j] && i != j){
                match_found = true;
            }
        }
        if(!match_found) printf("%d\n",a[i]);
    }

}
