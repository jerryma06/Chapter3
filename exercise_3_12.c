#include <stdio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	float x; 
	
	printf ("Enter float number: " );
	scanf ("%f", &x);
	
	printf ("%-8.1e\n", x);
	printf ("%10.6e\n", x);
	printf ("%-8.3f\n", x);
	printf ("%6.0f\n", x);
	
	
	return 0;
}
