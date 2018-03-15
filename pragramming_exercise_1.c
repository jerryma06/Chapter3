
#include <stdio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int mm,dd,yy;
	
	printf("Enter a date (mm/dd/yyyy): ");
	scanf ("%d/%d/%d", &mm,&dd,&yy);
	
	printf("You entered the date: %.4d%.2d%.2d", yy,mm,dd);
	
	return 0;
}
