#include <stdio.h>

int main(){
    int x, y, z;
    double average;

    scanf("%d %d %d", &x, &y, &z);

    average = (double)(x+y+z)/3;

    printf("The average is:%.3lf\n", average);

    return 0;
}
