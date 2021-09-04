#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
    float height[10];
    float sum = 0;
    float average;
    for (int i = 0; i <= 9; i++)
    {
        printf("Enter the height of %d student : ", i+1);
        scanf("%f",&height[i]);
        sum = sum + height[i];
    }
    average = sum / 10.0;
    printf("Average height is : %.2f", average); 
    return 0;
}