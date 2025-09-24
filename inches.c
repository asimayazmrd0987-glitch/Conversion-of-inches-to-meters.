#include<stdio.h>

int main()
{
    double cm, inches;
    printf("Enter any digit in cm :");
    scanf("%lf", &cm);

    inches = cm/2.54;
    printf("The cm %lf inches in is %.2lf", cm, inches);




    return 0;
}