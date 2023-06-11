// Online C compiler to run C program online
#include <stdio.h>
// function that returns miles given km 
double km_to_miles(double km);
double km_to_nautical_miles(double km);


int main() {
    double start_km = 0;
    double end_km = 0;
    double step_km=0;
    double current_km = 0;
    // do while loop to carry validation for input 
    do{
        printf("Start km Value:  ");
        scanf("%lf",&start_km);
        if(start_km<0){
            printf("Start Km must be > 0\n");
        }
    }while(start_km<0);
    do{
        printf("Step km Value:  ");
        scanf("%lf",&step_km);
        if(step_km<0){
            printf("Step Km must be > 0\n");
        }
    }while(step_km<0);
    do{
        printf("End km Value:  ");
        scanf("%lf",&end_km);
        if(end_km<=0){
            printf("End Km must be  0\n");
        }
    }while(end_km<=0);
    printf("*****************************\n");
    printf("Start Km %.2lf \n",start_km);
    printf("Step Km %.2lf \n",step_km);
    printf("End Km %.2lf \n",end_km);
    printf("***************\n\n");
    printf("%-20s%-20s%-20s\n",
            "Kilomemters",
            "Miles",
            "Nautical");
    for(current_km=start_km;current_km<end_km;current_km+= step_km){
        printf("%-20.4f%-20.4f%-20.4f\n",current_km,km_to_miles(current_km),km_to_nautical_miles(current_km));
    }
    return 0;
}
double km_to_miles(double km)
{
    return km * 0.62137;
    
}
double km_to_nautical_miles(double km){
    return km * 0.539957;
}
