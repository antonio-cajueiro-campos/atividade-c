#include <stdio.h>
#include <stdlib.h>

void main() {
	system("cls");
	int num;

	printf ("Digite seu numero: "); 
	scanf ("%d", &num); 
	if(num > 0) {
    	printf("o numero %d e positivo. \n", num);
	} else
	if (num < 0) {
    	printf("o numero %d e negativo. \n", num);
	} else {
    	printf("seu numero é zero. \n");
	}
	system("pause");
}