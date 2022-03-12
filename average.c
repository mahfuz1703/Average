#include <stdio.h>

int main(){
    int x, y, z;
    double average;

    printf("Enter value of x, y, z: ");
    scanf("%d %d %d", &x, &y, &z);

    average = (double)(x+y+z)/3;

    printf("\nThe average is:%.3lf\n", average);

    return 0;
}

