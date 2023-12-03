#include <stdio.h>

int main(){
    //Initialize variables with integer types
    int fahr, celcius;
    int lower, upper, step;

    //Declare values for variables. Start at "lower" for the loop. And end the loop with "upper". Increase farenheight by 20 each time.
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;

    //Farenheight will start with the value of 0. Then the value of celcius will be caclulated by a formula which converts farenheight to celcius
    while(fahr <= upper){
        celcius = 5 * (fahr-32) / 9;
        //Use %d to reference a parameter in order
        printf("%d\t%d\n", fahr, celcius);
        //Increase by 20, looping through 16 iterations
        fahr = fahr + step;
    }
    return 0;
}

