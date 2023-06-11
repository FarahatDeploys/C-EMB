// Online C compiler to run C program online
#include <stdio.h>

int main() {
    double raduis = 0;
    do{
        printf("Enter raduis: ");
        scanf("%lf",&raduis);
    }while(raduis<0);
    // Write C code her
    double area = 3.141592 *raduis*raduis;
    printf("area: %f \n",area);

    return 0;
}
