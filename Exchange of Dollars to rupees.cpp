#include<stdio.h>

int main()
{
    int dollars; 
	float exchange, rupees;
	exchange = 278.0;
    printf("Enter the amount of Dollars you have:");
    scanf("%d", &dollars);
    rupees = dollars*exchange;
    printf("The %d dollar in rupees are %.2f", dollars,rupees);
    
    
    
    return 0;
}
