#include <stdio.h>
#include <conio.h>

void main() {
	system("clear");

	int arr[ 15 ];

	printf("Só será mostrado números entre 15 e 150 \n");

	for (int i = 1; i <= 15; i++) {
		printf("Digite o %iº numero: ", i);
		scanf("%d", &arr[i]);
	}

	for (int i = 1; i <= 15; i++) {
		if (arr[i] >= 15.0 && arr[i] <= 150.0) {
			printf("Seu %dº número digitado aceito foi: %d ", i, arr[i]);
			printf("\n");
		}
	}
	
}