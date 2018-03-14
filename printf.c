#include <stdio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int i;
	float x;
	
	i =40;
	x=839.21f;
	
	printf ("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
	printf ("|%10.3f|%10.3e|%-10g|\n", x, x, x);
	
	return 0;
}
