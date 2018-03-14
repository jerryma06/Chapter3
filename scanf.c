#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int num1, denom1, num2, denom2, result_num, result_denom;
	
	printf("Enter first fraction: ");
	scanf ("%d/%d", &num1, &denom1);
	
	printf("Enter second fraction: ");
	scanf ("%d/%d", &num2, &denom2);
	
	result_num = num1 * denom2 + num2 * denom1;
	result_denom = denom1 * denom2;
	printf ("The sum is %d/%d\n", result_num, result_denom);
	
	
	return 0;
}
